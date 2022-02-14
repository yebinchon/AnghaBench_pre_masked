
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (char*,int,int,int *) ;
 int FUNC_5 (int,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
  FILE *VAR_1;
  char VAR_2[513], VAR_3[513];
  int VAR_4, VAR_5;
  for (VAR_4 = 0; VAR_4 < 511; VAR_4++)
    {
      VAR_5 = (VAR_4%('~' - ' ')+ ' ');
      VAR_2[VAR_4] = VAR_5;
    }
  VAR_2[511] = '\n';
  VAR_2[512] =0;
  VAR_1 = FUNC_2("boundary.tst", "wt");
  FUNC_4(VAR_2, 512,1,VAR_1);
  FUNC_0(VAR_1);
  VAR_1 = FUNC_2("boundary.tst", "rt");
  for(VAR_4=0; VAR_4<512; VAR_4++)
    {
      FUNC_3(VAR_1,0 , VAR_0);
      VAR_3[VAR_4] = FUNC_1(VAR_1);
    }
  VAR_3[512] =0;
  FUNC_0(VAR_1);
  FUNC_7("boundary.tst");

  FUNC_5(FUNC_6(VAR_2, VAR_3) == 0,"CRLF on buffer boundary failure\n");
  }
