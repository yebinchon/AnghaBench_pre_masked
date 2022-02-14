
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* out; unsigned char* expanded; unsigned char* idata; TYPE_1__* s; } ;
typedef TYPE_2__ png ;
struct TYPE_5__ {int img_out_n; int img_x; int img_y; int img_n; } ;


 int VAR_0 ;
 unsigned char* FUNC_0 (unsigned char*,int,int,int,int) ;
 unsigned char* FUNC_1 (char*,char*) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int) ;

__attribute__((used)) static unsigned char *FUNC_4(png *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int VAR_5)
{
   unsigned char *VAR_6=((void*)0);
   if (VAR_5 < 0 || VAR_5 > 4) return FUNC_1("bad req_comp", "Internal error");
   if (FUNC_3(VAR_1, VAR_0, VAR_5)) {
      VAR_6 = VAR_1->out;
      VAR_1->out = ((void*)0);
      if (VAR_5 && VAR_5 != VAR_1->s->img_out_n) {
         VAR_6 = FUNC_0(VAR_6, VAR_1->s->img_out_n, VAR_5, VAR_1->s->img_x, VAR_1->s->img_y);
         VAR_1->s->img_out_n = VAR_5;
         if (VAR_6 == ((void*)0)) return VAR_6;
      }
      *VAR_2 = VAR_1->s->img_x;
      *VAR_3 = VAR_1->s->img_y;
      if (VAR_4) *VAR_4 = VAR_1->s->img_n;
   }
   FUNC_2(VAR_1->out); VAR_1->out = ((void*)0);
   FUNC_2(VAR_1->expanded); VAR_1->expanded = ((void*)0);
   FUNC_2(VAR_1->idata); VAR_1->idata = ((void*)0);

   return VAR_6;
}
