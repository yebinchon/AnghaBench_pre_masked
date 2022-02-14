
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;

void
FUNC_4(char *VAR_7, off_t VAR_8, size_t VAR_9)
{
 int VAR_10;
 char *VAR_11;


 VAR_6 += VAR_9;
 FUNC_2(0);

 if (VAR_2)
  return;

 if (FUNC_0(VAR_3, VAR_8, VAR_1) == -1)
  FUNC_1("could not seek in target file \"%s\": %m",
     VAR_4);

 VAR_10 = VAR_9;
 VAR_11 = VAR_7;
 while (VAR_10 > 0)
 {
  int VAR_12;

  VAR_5 = 0;
  VAR_12 = FUNC_3(VAR_3, VAR_11, VAR_10);
  if (VAR_12 < 0)
  {

   if (VAR_5 == 0)
    VAR_5 = VAR_0;
   FUNC_1("could not write file \"%s\": %m",
      VAR_4);
  }

  VAR_11 += VAR_12;
  VAR_10 -= VAR_12;
 }


}
