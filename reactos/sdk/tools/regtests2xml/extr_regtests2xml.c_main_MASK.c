
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int * VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;

int FUNC_8(int VAR_2, char **VAR_3)
{
  char *VAR_4;
  char *VAR_5;

  if (VAR_2 < 3)
    {
      FUNC_7(VAR_0);
      return 1;
    }

  VAR_4 = FUNC_0(VAR_3[1]);
  if (VAR_4[0] == 0)
    {
      FUNC_3(VAR_4);
      FUNC_6("Missing input-filename\n");
      return 1;
    }

  VAR_5 = FUNC_0(VAR_3[2]);
  if (VAR_5[0] == 0)
    {
      FUNC_3(VAR_5);
      FUNC_3(VAR_4);
      FUNC_6("Missing output-filename\n");
      return 1;
    }

  VAR_1 = FUNC_2(VAR_5, "wb");
  if (VAR_1 == ((void*)0))
    {
        FUNC_3(VAR_4);
        FUNC_3(VAR_5);
     FUNC_6("Cannot open output file");
     return 1;
     }

  FUNC_5(VAR_4);

  FUNC_4();

  FUNC_3(VAR_4);
  FUNC_3(VAR_5);
  FUNC_1(VAR_1);

  return 0;
}
