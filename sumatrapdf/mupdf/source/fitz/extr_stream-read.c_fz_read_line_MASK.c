
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

char *
FUNC_2(fz_context *VAR_1, fz_stream *VAR_2, char *VAR_3, size_t VAR_4)
{
 char *VAR_5 = VAR_3;
 int VAR_6 = VAR_0;
 while (VAR_4 > 1)
 {
  VAR_6 = FUNC_1(VAR_1, VAR_2);
  if (VAR_6 == VAR_0)
   break;
  if (VAR_6 == '\r') {
   VAR_6 = FUNC_0(VAR_1, VAR_2);
   if (VAR_6 == '\n')
    FUNC_1(VAR_1, VAR_2);
   break;
  }
  if (VAR_6 == '\n')
   break;
  *VAR_5++ = VAR_6;
  VAR_4--;
 }
 if (VAR_4)
  *VAR_5 = '\0';
 return (VAR_5 == VAR_3 && VAR_6 == VAR_0) ? ((void*)0) : VAR_3;
}
