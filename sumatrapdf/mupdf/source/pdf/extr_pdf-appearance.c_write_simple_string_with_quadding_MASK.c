
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_font ;
typedef int fz_context ;
typedef int fz_buffer ;


 float FUNC_0 (int *,int *,float,char const*,char const**,float) ;
 int FUNC_1 (int *,int *,char*,float,float) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int *,int *,char const*,char const*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_buffer *VAR_1, fz_font *VAR_2, float VAR_3,
 const char *VAR_4, float VAR_5, int VAR_6)
{
 const char *VAR_7;
 float VAR_8 = 0, VAR_9 = 0, VAR_10;
 while (*VAR_4)
 {
  VAR_10 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4, &VAR_7, VAR_5);
  if (VAR_7 > VAR_4)
  {
   if (VAR_6 > 0)
   {
    if (VAR_6 == 1)
     VAR_9 = (VAR_5 - VAR_10) / 2;
    else
     VAR_9 = (VAR_5 - VAR_10);
    FUNC_1(VAR_0, VAR_1, "%g %g Td ", VAR_9 - VAR_8, -VAR_3);
   }
   if (VAR_7[-1] == '\n' || VAR_7[-1] == '\r')
    FUNC_3(VAR_0, VAR_1, VAR_4, VAR_7-1);
   else
    FUNC_3(VAR_0, VAR_1, VAR_4, VAR_7);
   VAR_4 = VAR_7;
   VAR_8 = VAR_9;
   FUNC_2(VAR_0, VAR_1, (VAR_6 > 0) ? "Tj\n" : "'\n");
  }
 }
}
