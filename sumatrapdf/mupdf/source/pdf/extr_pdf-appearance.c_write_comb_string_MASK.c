
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_font ;
typedef int fz_context ;
typedef int fz_buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int,int ) ;
 int FUNC_1 (int *,int *,char) ;
 int FUNC_2 (int *,int *,char*,float) ;
 int FUNC_3 (int *,int *,char*) ;
 int FUNC_4 (int*,char const*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_1, fz_buffer *VAR_2, const char *VAR_3, const char *VAR_4, fz_font *VAR_5, float VAR_6)
{
 float VAR_7, VAR_8, VAR_9 = 0;
 FUNC_1(VAR_1, VAR_2, '[');
 while (VAR_3 < VAR_4)
 {
  int VAR_10, VAR_11;

  VAR_3 += FUNC_4(&VAR_10, VAR_3);
  VAR_10 = FUNC_6(VAR_10);
  if (VAR_10 < 0) VAR_10 = VAR_0;

  VAR_11 = FUNC_5(VAR_1, VAR_5, VAR_10);
  VAR_7 = FUNC_0(VAR_1, VAR_5, VAR_11, 0) * 1000;
  VAR_8 = (VAR_6 - VAR_7) / 2;
  FUNC_2(VAR_1, VAR_2, "%g", -(VAR_9 + VAR_8));
  VAR_9 = VAR_8;

  FUNC_1(VAR_1, VAR_2, '(');
  if (VAR_10 == '(' || VAR_10 == ')' || VAR_10 == '\\')
   FUNC_1(VAR_1, VAR_2, '\\');
  FUNC_1(VAR_1, VAR_2, VAR_10);
  FUNC_1(VAR_1, VAR_2, ')');
 }
 FUNC_3(VAR_1, VAR_2, "] TJ\n");
}
