
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int PCIDLIST_ABSOLUTE ;
typedef int * LPWSTR ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

void FUNC_10(PCIDLIST_ABSOLUTE VAR_1,
                               LPWSTR VAR_2, LPWSTR VAR_3)
{
  WCHAR VAR_4[VAR_0];


  if (!FUNC_0(VAR_1, VAR_3))
  {

    FUNC_1(VAR_0, VAR_3);
  }
  FUNC_2(VAR_3);

  FUNC_6("current directory=%s, file=%s\n", FUNC_7(VAR_3), FUNC_7(VAR_2));


  if(FUNC_5(VAR_2))
  {
    FUNC_8(VAR_3, VAR_2);
  }
  else
  {

    if (FUNC_4(VAR_2) == -1)
      FUNC_9(VAR_3+2, VAR_2);
    else
      FUNC_9(VAR_3, VAR_2);
  }


  FUNC_3(VAR_4, VAR_3 );
  FUNC_9(VAR_3, VAR_4);
  FUNC_6("canon=%s\n", FUNC_7(VAR_3));
}
