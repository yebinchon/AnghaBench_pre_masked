
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;

__attribute__((used)) static char *FUNC_6(char *VAR_0, int *VAR_1)
{
 FILE *VAR_2;
 char *VAR_3;
 struct stat VAR_4;

 if (FUNC_5(VAR_0,&VAR_4)!=0)
  return ((void*)0);

 if ((VAR_2=FUNC_1(VAR_0,"r"))==((void*)0))
  return ((void*)0);

 VAR_3=((void*)0);
 for (;;)
 {
  if ((VAR_3=(char *)FUNC_4(VAR_4.st_size+1))==((void*)0))
   break;

  if (FUNC_2(VAR_3,1,VAR_4.st_size,VAR_2)!=VAR_4.st_size)
  {
   FUNC_3(VAR_3);
   VAR_3=((void*)0);
   break;
  }

  VAR_3[VAR_4.st_size]='\0';
  if(VAR_1) *VAR_1 = VAR_4.st_size;

  break;
 }

 (void)FUNC_0(VAR_2);

 return VAR_3;
}
