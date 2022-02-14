
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ INT ;
typedef scalar_t__ DWORD ;
typedef int CHAR ;


 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int,char*,int const*) ;

__attribute__((used)) static void FUNC_5(CHAR *VAR_1,CHAR *VAR_2,
                        CHAR *VAR_3, INT VAR_4, const CHAR *VAR_5)
{
  CHAR VAR_6[VAR_0], *VAR_7;
  DWORD VAR_8,VAR_9,VAR_10;

  VAR_8=FUNC_1(VAR_2);
  VAR_9=FUNC_0(VAR_0,VAR_6);

  if(VAR_4) {
    VAR_7=(VAR_3==((void*)0)) ? VAR_2 : VAR_3;
    VAR_10=FUNC_3(VAR_7);
    FUNC_4(VAR_8,"%s: SetCurrentDirectoryA failed\n",VAR_5);
    FUNC_4(VAR_9==VAR_10,
       "%s: SetCurrentDirectory did not change the directory, though it passed\n",
       VAR_5);
    FUNC_4(FUNC_2(VAR_7,VAR_6)==0,
       "%s: SetCurrentDirectory did not change the directory, though it passed\n",
       VAR_5);
    FUNC_4(FUNC_1(VAR_1),
       "%s: Couldn't set directory to its original value\n",VAR_5);
  } else {

    VAR_10=FUNC_3(VAR_1);
    FUNC_4(VAR_8==0,
       "%s: SetCurrentDirectoryA passed when it should have failed\n",VAR_5);
    FUNC_4(VAR_9==VAR_10,
       "%s: SetCurrentDirectory changed the directory, though it failed\n",
       VAR_5);
    FUNC_4(FUNC_2(VAR_1,VAR_6)==0,
       "%s: SetCurrentDirectory changed the directory, though it failed\n",
       VAR_5);
  }
}
