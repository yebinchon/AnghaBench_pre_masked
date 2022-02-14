
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int alpha; int s; int seps; int * colorspace; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_overprint ;
typedef int fz_context ;
typedef int fz_colorspace ;


 char* FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (char const*,char const*) ;

__attribute__((used)) static fz_overprint *
FUNC_6(fz_context *VAR_0, fz_overprint *VAR_1, const fz_pixmap *VAR_2, fz_colorspace *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 if (!VAR_1)
  return ((void*)0);

 if (!FUNC_1(VAR_0, VAR_3) || !FUNC_1(VAR_0, VAR_2->colorspace))
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_0, VAR_3);
 VAR_5 = VAR_2->n - VAR_2->alpha;
 VAR_9 = VAR_5 - VAR_2->s;






 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
 {


  const char *VAR_10 = FUNC_0(VAR_0, VAR_3, VAR_8);
  if (!VAR_10)
   break;
  if (!FUNC_5(VAR_10, "All") || !FUNC_5(VAR_10, "None"))
   continue;
  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
  {
   const char *VAR_11 = FUNC_0(VAR_0, VAR_2->colorspace, VAR_7);
   if (!VAR_11)
    continue;
   if (!FUNC_5(VAR_11, VAR_10))
    break;
  }
  if (VAR_7 != VAR_9)
   continue;
  for (; VAR_7 < VAR_5; VAR_7++)
  {
   const char *VAR_12 = FUNC_3(VAR_0, VAR_2->seps, VAR_7 - VAR_9);
   if (!VAR_12)
    continue;
   if (!FUNC_5(VAR_12, VAR_10))
    break;
  }
  if (VAR_7 == VAR_5)
  {

   break;
  }
 }
 if (VAR_8 == VAR_6)
 {


  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
  {
   const char *VAR_13 = FUNC_0(VAR_0, VAR_2->colorspace, VAR_7);

   for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
   {
    const char *VAR_14 = FUNC_0(VAR_0, VAR_3, VAR_8);
    if (!VAR_13 || !VAR_14)
     continue;
    if (!FUNC_5(VAR_13, VAR_14))
     break;
    if (!FUNC_5(VAR_14, "All"))
     break;
   }
   if (VAR_8 == VAR_6)
    FUNC_4(VAR_1, VAR_7);
  }
 }
 for (VAR_7 = VAR_9; VAR_7 < VAR_5; VAR_7++)
 {
  const char *VAR_15 = FUNC_3(VAR_0, VAR_2->seps, VAR_7 - VAR_9);

  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  {
   const char *VAR_16 = FUNC_0(VAR_0, VAR_3, VAR_8);
   if (!VAR_15 || !VAR_16)
    continue;
   if (!FUNC_5(VAR_15, VAR_16))
    break;
   if (!FUNC_5(VAR_16, "All"))
    break;
  }
  if (VAR_8 == VAR_6)
   FUNC_4(VAR_1, VAR_7);
 }

 return VAR_1;
}
