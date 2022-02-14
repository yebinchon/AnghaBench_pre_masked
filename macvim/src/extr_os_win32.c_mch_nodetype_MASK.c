
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;
typedef int WCHAR ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int *,char*,int) ;
 int VAR_9 ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;

int
FUNC_9(char_u *VAR_10)
{
    HANDLE VAR_11;
    int VAR_12;







    if (FUNC_6(VAR_10, "\\\\.\\", 4) == 0)
 return VAR_7;
 VAR_11 = FUNC_1(VAR_10,
      VAR_3,
      0,
      ((void*)0),
      VAR_8,
      0,
      ((void*)0));




    if (VAR_11 == VAR_4)
 return VAR_5;

    VAR_12 = FUNC_4(VAR_11);
    FUNC_0(VAR_11);
    if (VAR_12 == VAR_1)
 return VAR_7;
    if (VAR_12 == VAR_2)
 return VAR_5;
    return VAR_6;
}
