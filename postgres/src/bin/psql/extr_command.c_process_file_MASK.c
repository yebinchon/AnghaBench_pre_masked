
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int relpath ;
struct TYPE_2__ {char* inputfile; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int ) ;
 TYPE_1__ VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*,int) ;

int
FUNC_12(char *VAR_6, bool VAR_7)
{
 FILE *VAR_8;
 int VAR_9;
 char *VAR_10;
 char VAR_11[VAR_1];

 if (!VAR_6)
 {
  VAR_8 = VAR_5;
  VAR_6 = ((void*)0);
 }
 else if (FUNC_10(VAR_6, "-") != 0)
 {
  FUNC_1(VAR_6);







  if (VAR_7 && VAR_4.inputfile &&
   !FUNC_6(VAR_6) && !FUNC_5(VAR_6))
  {
   FUNC_11(VAR_11, VAR_4.inputfile, sizeof(VAR_11));
   FUNC_4(VAR_11);
   FUNC_7(VAR_11, VAR_11, VAR_6);
   FUNC_1(VAR_11);

   VAR_6 = VAR_11;
  }

  VAR_8 = FUNC_3(VAR_6, VAR_2);

  if (!VAR_8)
  {
   FUNC_8("%s: %m", VAR_6);
   return VAR_0;
  }
 }
 else
 {
  VAR_8 = VAR_5;
  VAR_6 = "<stdin>";
 }

 VAR_10 = VAR_4.inputfile;
 VAR_4.inputfile = VAR_6;

 FUNC_9(VAR_4.inputfile ? 0 : VAR_3);

 VAR_9 = FUNC_0(VAR_8);

 if (VAR_8 != VAR_5)
  FUNC_2(VAR_8);

 VAR_4.inputfile = VAR_10;

 FUNC_9(VAR_4.inputfile ? 0 : VAR_3);

 return VAR_9;
}
