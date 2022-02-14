
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int packed; int cmd_len; int coord_len; } ;
typedef TYPE_1__ fz_path ;
struct TYPE_5__ {int coord_len; int cmd_len; } ;
typedef TYPE_2__ fz_packed_path ;





 int FUNC_0 (int ) ;

int FUNC_1(const fz_path *VAR_0)
{
 switch (VAR_0->packed)
 {
 case 128:
  if (VAR_0->cmd_len > 255 || VAR_0->coord_len > 255)
   return sizeof(fz_path);
  return sizeof(fz_packed_path) + sizeof(float) * VAR_0->coord_len + sizeof(uint8_t) * VAR_0->cmd_len;
 case 129:
  return sizeof(fz_path);
 case 130:
 {
  fz_packed_path *VAR_1 = (fz_packed_path *)VAR_0;
  return sizeof(fz_packed_path) + sizeof(float) * VAR_1->coord_len + sizeof(uint8_t) * VAR_1->cmd_len;
 }
 default:
  FUNC_0("This never happens" == ((void*)0));
  return 0;
 }
}
