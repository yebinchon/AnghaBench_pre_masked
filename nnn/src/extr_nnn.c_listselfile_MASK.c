
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_0 (int ,int ,char*,char*) ;
 int FUNC_1 (int ,int ,int *,int *,int) ;
 int FUNC_2 (char*,struct stat*) ;
 int * VAR_8 ;

__attribute__((used)) static bool FUNC_3(void)
{
 struct stat VAR_9;

 if (FUNC_2(VAR_7, &VAR_9) == -1)
  return VAR_1;


 if (!VAR_9.st_size)
  return VAR_1;

 FUNC_0(VAR_6, VAR_0, "cat %s | tr \'\\0\' \'\\n\'", VAR_7);
 FUNC_1(VAR_8[VAR_4], VAR_6, ((void*)0), ((void*)0), VAR_2 | VAR_3);

 return VAR_5;
}
