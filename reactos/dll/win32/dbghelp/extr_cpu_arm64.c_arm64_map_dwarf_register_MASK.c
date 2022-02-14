
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(unsigned VAR_5, BOOL VAR_6)
{
    if (VAR_5 <= 28) return VAR_4 + VAR_5;
    if (VAR_5 == 29) return VAR_0;
    if (VAR_5 == 30) return VAR_1;
    if (VAR_5 == 31) return VAR_3;

    FUNC_0("Don't know how to map register %d\n", VAR_5);
    return VAR_2;
}
