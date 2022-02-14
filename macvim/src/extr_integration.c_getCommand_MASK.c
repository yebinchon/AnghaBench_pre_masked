
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,...) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int VAR_1 ;
 int FUNC_4 () ;

__attribute__((used)) static char *
FUNC_5(void)
{
 int VAR_2;
 char VAR_3[7];
 char *VAR_4;
 static char *VAR_5;
 static int VAR_6;

 if ((VAR_2 = FUNC_2(VAR_1, &VAR_3, 6)) == 6) {
  VAR_3[6] = 0;
  VAR_2 = FUNC_1(VAR_3);
  if (VAR_6 < (VAR_2 + 1)) {
   VAR_4 = (char *) FUNC_3(VAR_5,
       FUNC_0((VAR_2 + 256), VAR_0));
   if (VAR_4 != ((void*)0)) {
    VAR_5 = VAR_4;
    VAR_6 = FUNC_0((VAR_2 + 256), VAR_0);
   }
  }
  if (VAR_6 >= VAR_2 && (VAR_2 = FUNC_2(VAR_1, VAR_5, VAR_2)) > 0) {
   VAR_5[VAR_2] = 0;
   return VAR_5;
  } else {
   return ((void*)0);
  }
 } else {
  if (VAR_2 == 0) {
   FUNC_4();
  }
  return ((void*)0);
 }

}
