
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static char_u *
FUNC_2()
{
    int VAR_4;

    if (*VAR_3 == VAR_0)
 VAR_1 = -1;
    else
    {
 VAR_4 = FUNC_0(VAR_3);
 if (FUNC_1(VAR_4))
     return VAR_2;
 VAR_1 = VAR_4;
    }
    return ((void*)0);
}
