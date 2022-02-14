
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char***) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*,scalar_t__*,...) ;
 int * VAR_4 ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 scalar_t__* VAR_5 ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ,int ) ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_9 () ;

int
FUNC_10 (int VAR_8, char **VAR_9)
{
  int VAR_10;
  char * VAR_11;
  int VAR_12 = 0, VAR_13 = 0;






  VAR_5 = VAR_9[0];
  if (VAR_5 == ((void*)0) || VAR_5[0] == 0)
    VAR_5 = "rdjpgcom";


  for (VAR_10 = 1; VAR_10 < VAR_8; VAR_10++) {
    VAR_11 = VAR_9[VAR_10];
    if (VAR_11[0] != '-')
      break;
    VAR_11++;
    if (FUNC_6(VAR_11, "verbose", 1)) {
      VAR_12++;
    } else if (FUNC_6(VAR_11, "raw", 1)) {
      VAR_13 = 1;
    } else
      FUNC_9();
  }



  if (VAR_10 < VAR_8-1) {
    FUNC_5(VAR_6, "%s: only one input file\n", VAR_5);
    FUNC_9();
  }
  if (VAR_10 < VAR_8) {
    if ((VAR_4 = FUNC_4(VAR_9[VAR_10], VAR_3)) == ((void*)0)) {
      FUNC_5(VAR_6, "%s: can't open %s\n", VAR_5, VAR_9[VAR_10]);
      FUNC_1(VAR_0);
    }
  } else {
    VAR_4 = VAR_7;

  }


  (void) FUNC_7(VAR_12, VAR_13);


  FUNC_1(VAR_1);
  return 0;
}
