
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t off_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 size_t FUNC_3 (char*,int,size_t,int *) ;
 int FUNC_4 (int *,size_t,int ) ;
 scalar_t__ FUNC_5 (int *) ;

size_t FUNC_6(FILE *VAR_2, char **VAR_3)
{
 size_t VAR_4 = 0;
 size_t VAR_5 = 0;

 *VAR_3 = ((void*)0);

 FUNC_4(VAR_2, 0, VAR_0);
 VAR_4 = (size_t)FUNC_5(VAR_2);

 if (VAR_4 > 0) {
  char VAR_6[3];
  char *VAR_7;
  off_t VAR_8;

  VAR_6[0] = 0;
  VAR_6[1] = 0;
  VAR_6[2] = 0;


  FUNC_4(VAR_2, 0, VAR_1);
  size_t VAR_9 = FUNC_3(VAR_6, 1, 3, VAR_2);
  (void)VAR_9;

  VAR_8 = (FUNC_0(VAR_6, "\xEF\xBB\xBF", 3) == 0) ? 3 : 0;

  VAR_4 -= VAR_8;
  if (VAR_4 == 0)
   return 0;

  VAR_7 = FUNC_2(VAR_4 + 1);
  FUNC_4(VAR_2, VAR_8, VAR_1);

  VAR_4 = FUNC_3(VAR_7, 1, VAR_4, VAR_2);
  if (VAR_4 == 0) {
   FUNC_1(VAR_7);
   return 0;
  }

  VAR_7[VAR_4] = 0;

  *VAR_3 = VAR_7;
 }

 return VAR_5;
}
