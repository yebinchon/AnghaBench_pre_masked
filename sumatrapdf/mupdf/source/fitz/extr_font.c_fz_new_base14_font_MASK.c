
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int fz_font ;
struct TYPE_13__ {TYPE_2__* font; } ;
typedef TYPE_3__ fz_context ;
struct TYPE_11__ {int is_serif; } ;
struct TYPE_14__ {TYPE_1__ flags; } ;
struct TYPE_12__ {TYPE_5__** base14; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int * FUNC_1 (TYPE_3__*,TYPE_5__*) ;
 unsigned char* FUNC_2 (TYPE_3__*,char const*,int*) ;
 TYPE_5__* FUNC_3 (TYPE_3__*,char const*,unsigned char const*,int,int ,int) ;
 int FUNC_4 (TYPE_3__*,int ,char*,char const*) ;

fz_font *
FUNC_5(fz_context *VAR_1, const char *VAR_2)
{
 const unsigned char *VAR_3;
 int VAR_4;
 int VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 >= 0)
 {
  if (VAR_1->font->base14[VAR_5])
   return FUNC_1(VAR_1, VAR_1->font->base14[VAR_5]);
  VAR_3 = FUNC_2(VAR_1, VAR_2, &VAR_4);
  if (VAR_3)
  {
   VAR_1->font->base14[VAR_5] = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, 0, 1);
   VAR_1->font->base14[VAR_5]->flags.is_serif = (VAR_2[0] == 'T');
   return FUNC_1(VAR_1, VAR_1->font->base14[VAR_5]);
  }
 }
 FUNC_4(VAR_1, VAR_0, "cannot find builtin font with name '%s'", VAR_2);
}
