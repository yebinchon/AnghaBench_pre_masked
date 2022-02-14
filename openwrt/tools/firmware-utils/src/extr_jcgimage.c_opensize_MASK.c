
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char*,int ) ;

int
FUNC_3(char *VAR_1, size_t *VAR_2)
{
 struct stat VAR_3;
 int VAR_4 = FUNC_2(VAR_1, VAR_0);
 if (VAR_4 < 0)
  FUNC_0(1, "cannot open \"%s\"", VAR_1);

 if (FUNC_1(VAR_4, &VAR_3) == -1)
  FUNC_0(1, "cannot stat \"%s\"", VAR_1);

 *VAR_2 = VAR_3.st_size;
 return VAR_4;
}
