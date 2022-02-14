
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,struct stat*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0)
{
 struct stat VAR_1;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, &VAR_1);
 if (VAR_2){
  FUNC_0("stat failed on %s", VAR_0);
  return -1;
 }

 return VAR_1.st_size;
}
