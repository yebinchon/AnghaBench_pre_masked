
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xt_ct_target_info_v1 {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



__attribute__((used)) static u16 FUNC_0(const struct xt_ct_target_info_v1 *VAR_3)
{
 switch (VAR_3->flags & (129 |
          128)) {
 case 129:
  return VAR_1;
 case 128:
  return VAR_2;
 default:
  return VAR_0;
 }
}
