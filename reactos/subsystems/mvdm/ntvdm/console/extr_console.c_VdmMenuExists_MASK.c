
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ INT ;
typedef int HMENU ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static BOOL
FUNC_2(HMENU VAR_4)
{
    INT VAR_5, VAR_6;
    VAR_5 = FUNC_0(VAR_4);


    for (VAR_6 = 0; VAR_6 <= VAR_5; VAR_6++)
    {
        if (FUNC_1(VAR_4, VAR_6) == VAR_1)
        {

            VAR_3 = VAR_6 - 1;
            return VAR_2;
        }
    }
    return VAR_0;
}
