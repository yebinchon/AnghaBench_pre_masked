
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline INT FUNC_0(INT VAR_5, INT VAR_6, BOOL VAR_7)
{
    INT VAR_8;

    VAR_5 /= (VAR_7 ? VAR_1 : 2);
    VAR_5 += VAR_5/VAR_6;

    for(VAR_8=0; VAR_5>((VAR_0-VAR_4)*VAR_3)/2; VAR_8+=VAR_0)
        VAR_5 /= VAR_0-VAR_4;
    return VAR_8+((VAR_0-VAR_4+1)*VAR_5)/(VAR_5+VAR_2);
}
