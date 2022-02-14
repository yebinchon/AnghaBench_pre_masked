
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char VAR_1 ;
 char* VAR_2 ;
 char* FUNC_1 (char*,unsigned char) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static
int FUNC_2(int VAR_6, char *VAR_7[], char *VAR_8)
{
 unsigned char VAR_9;
 char *VAR_10;

 if (VAR_1 == 0) {
  VAR_1 = '/';
 }

 if (VAR_6 > VAR_5) {
  if (VAR_2 == ((void*)0)) {
   if ((VAR_2 = VAR_7[VAR_5]) == ((void*)0) ||
    *(VAR_2++) != VAR_1) goto gopEOF;
   if (*VAR_2 == VAR_1) {
    VAR_5++; goto gopEOF;
   }
  }
  if (0 == (VAR_9 = *(VAR_2++))) {
   VAR_5++; goto gopEOF;
  }
  if (':' == VAR_9 || (VAR_10 = FUNC_1(VAR_8, VAR_9)) == ((void*)0))
   goto gopError;
  if (':' == *(++VAR_10)) {
   VAR_5++;
   if (0 == *VAR_2) {
    if (VAR_6 <= VAR_5) goto gopError;
    VAR_2 = VAR_7[VAR_5++];
   }
   VAR_3 = VAR_2;
   VAR_2 = ((void*)0);
  } else {
   if (0 == *VAR_2) {
    VAR_5++;
    VAR_2 = ((void*)0);
   }
   VAR_3 = ((void*)0);
  }
  return VAR_9;
 }
gopEOF:
 VAR_3 = VAR_2 = ((void*)0);
 return VAR_0;

gopError:
 VAR_3 = ((void*)0);
 if (VAR_4)
  FUNC_0 ("get command line option");
 return ('?');
}
