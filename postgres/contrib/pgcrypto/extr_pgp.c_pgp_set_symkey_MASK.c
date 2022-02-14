
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int sym_key_len; int const* sym_key; } ;
typedef TYPE_1__ PGP_Context ;


 int VAR_0 ;

int
FUNC_0(PGP_Context *VAR_1, const uint8 *VAR_2, int VAR_3)
{
 if (VAR_2 == ((void*)0) || VAR_3 < 1)
  return VAR_0;
 VAR_1->sym_key = VAR_2;
 VAR_1->sym_key_len = VAR_3;
 return 0;
}
