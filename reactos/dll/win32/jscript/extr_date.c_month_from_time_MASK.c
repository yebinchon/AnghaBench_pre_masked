
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DOUBLE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline DOUBLE FUNC_3(DOUBLE VAR_1)
{
    int VAR_2 = FUNC_1(VAR_1);
    int VAR_3 = FUNC_0(VAR_1);

    if(FUNC_2(VAR_1))
        return VAR_0;

    if(0<=VAR_3 && VAR_3<31) return 0;
    if(VAR_3 < 59+VAR_2) return 1;
    if(VAR_3 < 90+VAR_2) return 2;
    if(VAR_3 < 120+VAR_2) return 3;
    if(VAR_3 < 151+VAR_2) return 4;
    if(VAR_3 < 181+VAR_2) return 5;
    if(VAR_3 < 212+VAR_2) return 6;
    if(VAR_3 < 243+VAR_2) return 7;
    if(VAR_3 < 273+VAR_2) return 8;
    if(VAR_3 < 304+VAR_2) return 9;
    if(VAR_3 < 334+VAR_2) return 10;
    return 11;
}
