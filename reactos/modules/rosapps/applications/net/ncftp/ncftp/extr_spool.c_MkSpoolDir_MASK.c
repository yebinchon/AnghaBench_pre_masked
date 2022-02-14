
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char*,size_t,int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;

int
FUNC_4(char *VAR_2, size_t VAR_3)
{
 struct stat VAR_4;
 *VAR_2 = '\0';


 if (VAR_0[0] != '\0') {
  (void) FUNC_1(VAR_2, VAR_3, VAR_1);
  if ((FUNC_3(VAR_2, &VAR_4) < 0) && (FUNC_0(VAR_2, 00700) < 0)) {
   FUNC_2(VAR_2);
   return (-1);
  } else {
   return (0);
  }
 }
 return (-1);
}
