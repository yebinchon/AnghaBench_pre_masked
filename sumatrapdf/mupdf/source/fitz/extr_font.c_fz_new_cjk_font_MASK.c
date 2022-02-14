
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int fz_font ;
struct TYPE_9__ {TYPE_1__* font; } ;
typedef TYPE_2__ fz_context ;
struct TYPE_8__ {int * cjk; } ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_2__*,int ) ;
 unsigned char* FUNC_1 (TYPE_2__*,int,int*,int*) ;
 int FUNC_2 (TYPE_2__*,int *,unsigned char const*,int,int,int ) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 scalar_t__ FUNC_4 (int *) ;

fz_font *
FUNC_5(fz_context *VAR_1, int VAR_2)
{
 const unsigned char *VAR_3;
 int VAR_4, VAR_5;
 if (VAR_2 >= 0 && VAR_2 < (int)FUNC_4(VAR_1->font->cjk))
 {
  if (VAR_1->font->cjk[VAR_2])
   return FUNC_0(VAR_1, VAR_1->font->cjk[VAR_2]);
  VAR_3 = FUNC_1(VAR_1, VAR_2, &VAR_4, &VAR_5);
  if (VAR_3)
  {
   VAR_1->font->cjk[VAR_2] = FUNC_2(VAR_1, ((void*)0), VAR_3, VAR_4, VAR_5, 0);
   return FUNC_0(VAR_1, VAR_1->font->cjk[VAR_2]);
  }
 }
 FUNC_3(VAR_1, VAR_0, "cannot find builtin CJK font");
}
