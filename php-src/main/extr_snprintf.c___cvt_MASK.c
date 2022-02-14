
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (double,int,int,int*,int*,char**) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static char * FUNC_5(double VAR_0, int VAR_1, int *VAR_2, int *VAR_3, int VAR_4, int VAR_5)
{
 register char *VAR_6 = ((void*)0);
 char *VAR_7, *VAR_8, VAR_9;
 size_t VAR_10;

 if (VAR_1 < 0) {
  VAR_10 = -VAR_1 + 1;
 } else {
  VAR_10 = VAR_1 + 1;
 }


 if (VAR_0 == 0.0) {
  *VAR_2 = 1 - VAR_4;
  *VAR_3 = 0;
  if ((VAR_8 = VAR_6 = (char *)FUNC_0(VAR_1?VAR_10:2)) == ((void*)0)) {
   return(((void*)0));
  }
  *VAR_8++ = '0';
  *VAR_8 = '\0';
  if (!VAR_1) {
   return(VAR_6);
  }
 } else {
  VAR_7 = FUNC_3(VAR_0, VAR_4 + 2, VAR_1, VAR_2, VAR_3, &VAR_8);
  if (*VAR_2 == 9999) {

   *VAR_2 = 0;
   VAR_9 = *VAR_7;
   FUNC_4(VAR_7);
   return FUNC_1((VAR_9 == 'I' ? "INF" : "NAN"));
  }

  if (VAR_5 && VAR_4) {
   VAR_10 += *VAR_2;
  }
  if ((VAR_6 = (char *)FUNC_0(VAR_10+1)) == ((void*)0)) {
   FUNC_4(VAR_7);
   return(((void*)0));
  }
  (void) FUNC_2(VAR_6, VAR_7, VAR_10);
  VAR_8 = VAR_6 + (VAR_8 - VAR_7);
  FUNC_4(VAR_7);
 }


 if (VAR_5) {
  VAR_10 -= VAR_8 - VAR_6;
  while (--VAR_10) {
   *VAR_8++ = '0';
  }
  *VAR_8 = '\0';
 }

 return(VAR_6);
}
