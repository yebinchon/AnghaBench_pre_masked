
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 void* FUNC_2 (int *,int,int,int ,int,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void *FUNC_5(char *VAR_5, int *VAR_6)
{
 struct stat VAR_7;
 void *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_5, VAR_2);
 if (VAR_9 < 0) {
  FUNC_4(VAR_5);
  return ((void*)0);
 }
 if (FUNC_1(VAR_9, &VAR_7)) {
  FUNC_4("Could not determine file size");
  FUNC_0(VAR_9);
  return ((void*)0);
 }
 *VAR_6 = VAR_7.st_size;
 VAR_8 = FUNC_2(((void*)0), *VAR_6, VAR_3|VAR_4, VAR_1, VAR_9, 0);
 if (VAR_8 == VAR_0) {
  FUNC_4("Mapping to memory failed");
  FUNC_0(VAR_9);
  return ((void*)0);
 }
 FUNC_0(VAR_9);
 return VAR_8;
}
