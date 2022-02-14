
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int* VAR_9 ;
 int FUNC_1 () ;
 int* VAR_10 ;

__attribute__((used)) static inline DWORD FUNC_2(DWORD VAR_11)
{
    DWORD VAR_12 = FUNC_0(VAR_11 - FUNC_1());
    DWORD VAR_13 = ((VAR_9[VAR_1] & VAR_2) && (VAR_12 & (1 << 15)))
                      ? VAR_9[VAR_4]
                      : VAR_9[VAR_3];


    if (VAR_10[VAR_8] & VAR_7)
    {

        VAR_12 &= ~3;
    }
    else if (VAR_9[VAR_6] & VAR_5)
    {

        VAR_12 &= ~1;
    }

    if (VAR_13)
    {

        VAR_12 += VAR_13 << ((VAR_9[VAR_1] & VAR_0) ? 14 : 12);
    }


    return VAR_12;
}
