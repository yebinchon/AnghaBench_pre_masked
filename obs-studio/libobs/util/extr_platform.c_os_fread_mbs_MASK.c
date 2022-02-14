
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 size_t FUNC_2 (char*,int,size_t,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 size_t FUNC_5 (char*,size_t,char**) ;

size_t FUNC_6(FILE *VAR_2, char **VAR_3)
{
 size_t VAR_4 = 0;
 size_t VAR_5 = 0;

 FUNC_3(VAR_2, 0, VAR_0);
 VAR_4 = (size_t)FUNC_4(VAR_2);
 *VAR_3 = ((void*)0);

 if (VAR_4 > 0) {
  char *VAR_6 = FUNC_1(VAR_4 + 1);

  FUNC_3(VAR_2, 0, VAR_1);
  VAR_4 = FUNC_2(VAR_6, 1, VAR_4, VAR_2);
  if (VAR_4 == 0) {
   FUNC_0(VAR_6);
   return 0;
  }

  VAR_6[VAR_4] = 0;
  VAR_5 = FUNC_5(VAR_6, VAR_4, VAR_3);
  FUNC_0(VAR_6);
 }

 return VAR_5;
}
