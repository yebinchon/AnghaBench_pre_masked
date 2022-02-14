
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,struct stat*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(char *VAR_2)
{

 struct stat VAR_3;
 int VAR_4;

 if (!FUNC_2(VAR_2, &VAR_3)) {
  FUNC_1(VAR_0,
   "Target path already exists, overwrite? [y|n] ");

  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 == '\n') {
   VAR_4 = FUNC_0(VAR_1);
  }

  if (VAR_4 != 'y' && VAR_4 != 'Y') {
   return (-1);
  }
 }


 return (0);
}
