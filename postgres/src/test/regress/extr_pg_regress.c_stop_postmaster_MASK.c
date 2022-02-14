
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 char* VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*,int) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_4 (char*,int,char*,char*,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_6(void)
{
 if (VAR_2)
 {

  char VAR_7[VAR_0 * 2];
  int VAR_8;


  FUNC_2(VAR_5);
  FUNC_2(VAR_4);

  FUNC_4(VAR_7, sizeof(VAR_7),
     "\"%s%spg_ctl\" stop -D \"%s/data\" -s",
     VAR_1 ? VAR_1 : "",
     VAR_1 ? "/" : "",
     VAR_6);
  VAR_8 = FUNC_5(VAR_7);
  if (VAR_8 != 0)
  {
   FUNC_3(VAR_4, FUNC_0("\n%s: could not stop postmaster: exit code was %d\n"),
     VAR_3, VAR_8);
   FUNC_1(2);
  }

  VAR_2 = 0;
 }
}
