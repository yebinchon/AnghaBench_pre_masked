
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int colorspace; scalar_t__ seps; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;
typedef int fz_colorspace ;


 char* FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int
FUNC_6(fz_context *VAR_0, fz_colorspace *VAR_1, fz_pixmap *VAR_2)
{


 if (!FUNC_3(VAR_0, VAR_2->colorspace) && FUNC_1(VAR_0, VAR_1))
  return 0;


 if (VAR_2->seps)
  return 1;



 if (FUNC_3(VAR_0, VAR_2->colorspace))
 {
  int VAR_3, VAR_4;
  if (FUNC_2(VAR_0, VAR_1))
   return 1;

  VAR_4 = FUNC_4(VAR_0, VAR_1);
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  {
   const char *VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3);

   if (!VAR_5)
    return 0;
   if (!FUNC_5(VAR_5, "All"))
    continue;
   if (!FUNC_5(VAR_5, "Cyan"))
    continue;
   if (!FUNC_5(VAR_5, "Magenta"))
    continue;
   if (!FUNC_5(VAR_5, "Yellow"))
    continue;
   if (!FUNC_5(VAR_5, "Black"))
    continue;
   if (!FUNC_5(VAR_5, "None"))
    continue;
   return 0;
  }
  return 1;
 }

 return 0;
}
