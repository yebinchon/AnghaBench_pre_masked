
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PULONG ;
typedef int LPSTR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_1 ;

BOOLEAN FUNC_1(LPSTR VAR_2,PULONG VAR_3,LPSTR* VAR_4)
{
    BOOLEAN VAR_5 = VAR_0;

    if(FUNC_0(VAR_2,VAR_3))
    {
        VAR_2 += 11;
        *VAR_4 += 11;
        VAR_5 = VAR_1;
    }

    return VAR_5;
}
