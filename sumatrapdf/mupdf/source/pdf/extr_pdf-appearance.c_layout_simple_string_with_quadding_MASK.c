
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_layout_block ;
typedef int fz_font ;
typedef int fz_context ;


 float FUNC_0 (int *,int *,float,char const*,char const**,float) ;
 int FUNC_1 (int *,int *,float,float,float,char const*) ;
 int FUNC_2 (int *,int *,int *,float,float,float,char const*,char const*) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_layout_block *VAR_1,
 fz_font *VAR_2, float VAR_3, float VAR_4,
 float VAR_5, float VAR_6, const char *VAR_7, float VAR_8, int VAR_9)
{
 const char *VAR_10;
 float VAR_11 = 0, VAR_12;
 int VAR_13 = 0;

 if (!*VAR_7)
  VAR_13 = 1;

 while (*VAR_7)
 {
  VAR_12 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_7, &VAR_10, VAR_8);
  if (VAR_10 > VAR_7)
  {
   if (VAR_9 > 0)
   {
    if (VAR_9 == 1)
     VAR_11 = (VAR_8 - VAR_12) / 2;
    else
     VAR_11 = (VAR_8 - VAR_12);
   }
   if (VAR_10[-1] == '\n' || VAR_10[-1] == '\r')
   {
    FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5+VAR_11, VAR_6, VAR_7, VAR_10-1);
    VAR_13 = 1;
   }
   else
   {
    FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5+VAR_11, VAR_6, VAR_7, VAR_10);
    VAR_13 = 0;
   }
   VAR_7 = VAR_10;
   VAR_6 -= VAR_4;
  }
 }
 if (VAR_13)
  FUNC_1(VAR_0, VAR_1, VAR_5, VAR_6, VAR_3, VAR_7);
}
