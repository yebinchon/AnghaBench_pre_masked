
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_3__ {int text_bits; } ;
typedef TYPE_1__ fz_aa_context ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

void
FUNC_1(fz_context *VAR_1, fz_aa_context *VAR_2, int VAR_3)
{
 if (VAR_3 > 8)
  VAR_2->text_bits = 0;
 else if (VAR_3 > 6)
  VAR_2->text_bits = 8;
 else if (VAR_3 > 4)
  VAR_2->text_bits = 6;
 else if (VAR_3 > 2)
  VAR_2->text_bits = 4;
 else if (VAR_3 > 0)
  VAR_2->text_bits = 2;
 else
  VAR_2->text_bits = 0;

}
