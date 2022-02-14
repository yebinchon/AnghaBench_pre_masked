
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int ) ;

FILE *
FUNC_1(const unsigned int VAR_6)
{
    FILE *VAR_7 = VAR_5;
    if (!VAR_7)
    {
        VAR_7 = (VAR_6 & (VAR_0|VAR_1)) ? VAR_3 : VAR_4;
    }
    if (!VAR_7)
    {
        FUNC_0(VAR_2);
    }
    return VAR_7;
}
