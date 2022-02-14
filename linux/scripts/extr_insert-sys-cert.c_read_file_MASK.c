
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static char *FUNC_6(char *VAR_1, int *VAR_2)
{
 struct stat VAR_3;
 char *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_0);
 if (VAR_5 < 0) {
  FUNC_4(VAR_1);
  return ((void*)0);
 }
 if (FUNC_1(VAR_5, &VAR_3)) {
  FUNC_4("Could not determine file size");
  FUNC_0(VAR_5);
  return ((void*)0);
 }
 *VAR_2 = VAR_3.st_size;
 VAR_4 = FUNC_2(*VAR_2);
 if (!VAR_4) {
  FUNC_4("Allocating memory failed");
  FUNC_0(VAR_5);
  return ((void*)0);
 }
 if (FUNC_5(VAR_5, VAR_4, *VAR_2) != *VAR_2) {
  FUNC_4("File read failed");
  FUNC_0(VAR_5);
  return ((void*)0);
 }
 FUNC_0(VAR_5);
 return VAR_4;
}
