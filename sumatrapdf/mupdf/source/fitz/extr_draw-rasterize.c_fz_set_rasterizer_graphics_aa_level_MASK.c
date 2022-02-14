
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {int hscale; int vscale; int bits; int scale; } ;
typedef TYPE_1__ fz_aa_context ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int *,char*,...) ;

void
FUNC_2(fz_context *VAR_1, fz_aa_context *VAR_2, int VAR_3)
{
 if (VAR_3 == 9 || VAR_3 == 10)
 {
  VAR_2->hscale = 1;
  VAR_2->vscale = 1;
  VAR_2->bits = VAR_3;
 }
 else if (VAR_3 > 6)
 {
  VAR_2->hscale = 17;
  VAR_2->vscale = 15;
  VAR_2->bits = 8;
 }
 else if (VAR_3 > 4)
 {
  VAR_2->hscale = 8;
  VAR_2->vscale = 8;
  VAR_2->bits = 6;
 }
 else if (VAR_3 > 2)
 {
  VAR_2->hscale = 5;
  VAR_2->vscale = 3;
  VAR_2->bits = 4;
 }
 else if (VAR_3 > 0)
 {
  VAR_2->hscale = 2;
  VAR_2->vscale = 2;
  VAR_2->bits = 2;
 }
 else
 {
  VAR_2->hscale = 1;
  VAR_2->vscale = 1;
  VAR_2->bits = 0;
 }
 VAR_2->scale = 0xFF00 / (VAR_2->hscale * VAR_2->vscale);
 FUNC_0(VAR_1, VAR_2, VAR_3);

}
