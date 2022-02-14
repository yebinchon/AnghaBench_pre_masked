
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zend_bool ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (char const* const) ;

char *
FUNC_3(const char * const VAR_3)
{
 char * VAR_4 = ((void*)0);
 if (VAR_3) {
  zend_bool VAR_5 = VAR_1;
  const char * VAR_6 = VAR_3;
  char * VAR_7;
  VAR_7 = VAR_4 = FUNC_0(FUNC_2(VAR_3) + 1 + 2 + 2 + 1);
  *VAR_7++ = ' ';
  *VAR_7++ = '/';
  *VAR_7++ = '*';
  while (1) {
   register char VAR_8 = *VAR_6;
   if (VAR_8 == 0) {
    break;
   }
   if ((VAR_8 >= '0' && VAR_8 <= '9') ||
    (VAR_8 >= 'a' && VAR_8 <= 'z') ||
    (VAR_8 >= 'A' && VAR_8 <= 'Z') ||
    VAR_8 == '-' ||
    VAR_8 == '_' ||
    VAR_8 == ' ' ||
    VAR_8 == '=')
   {
    *VAR_7++ = VAR_8;
   } else if (VAR_5 == VAR_1) {
    FUNC_1(((void*)0), VAR_0, "Transaction name truncated. Must be only [0-9A-Za-z\\-_=]+");
    VAR_5 = VAR_2;
   }
   ++VAR_6;
  }
  *VAR_7++ = '*';
  *VAR_7++ = '/';
  *VAR_7++ = 0;
 }
 return VAR_4;
}
