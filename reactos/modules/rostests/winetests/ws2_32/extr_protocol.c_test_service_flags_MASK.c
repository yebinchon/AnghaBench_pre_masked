
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(int VAR_9, int VAR_10, int VAR_11, int VAR_12, DWORD VAR_13)
{
    DWORD VAR_14 = 0;
    if (VAR_11 == VAR_5 && VAR_12 == VAR_2)
        VAR_14 = VAR_6;
    if (VAR_11 == VAR_4 && VAR_12 == VAR_3)
        VAR_14 = VAR_7;


    if ((VAR_9 == VAR_0 || VAR_9 == VAR_1) && VAR_10 == 2 && VAR_14)
    {

        VAR_13 &= ~VAR_8;
        FUNC_0(VAR_14 == VAR_13,
           "Incorrect flags, expected 0x%x, received 0x%x\n",
           VAR_14, VAR_13);
    }
}
