
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct stat*) ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (int,char*,int) ;

int FUNC_3(int VAR_1, size_t VAR_2)
{
 char VAR_3[VAR_0];
 struct stat VAR_4;
 int VAR_5;

 if (FUNC_0(VAR_1, &VAR_4))
  goto cleanup;

 VAR_2 += VAR_4.st_size;

 if (FUNC_1(VAR_1, VAR_2))
  goto cleanup;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5 += sizeof(VAR_3))
  FUNC_2(VAR_1, VAR_3, sizeof(VAR_3));

 return 0;

cleanup:
 return -1;
}
