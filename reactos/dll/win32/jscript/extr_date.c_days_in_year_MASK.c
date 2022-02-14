
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DOUBLE ;


 int VAR_0 ;

__attribute__((used)) static inline DOUBLE FUNC_0(DOUBLE VAR_1)
{
    int VAR_2;

    if(VAR_1 != (int)VAR_1)
        return VAR_0;

    VAR_2 = VAR_1;
    if(VAR_2%4 != 0) return 365;
    if(VAR_2%100 != 0) return 366;
    if(VAR_2%400 != 0) return 365;
    return 366;
}
