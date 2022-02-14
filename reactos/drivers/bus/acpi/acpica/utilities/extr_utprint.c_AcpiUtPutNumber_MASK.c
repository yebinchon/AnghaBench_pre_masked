
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ BOOLEAN ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static char *
FUNC_1 (
    char *VAR_2,
    UINT64 VAR_3,
    UINT8 VAR_4,
    BOOLEAN VAR_5)
{
    const char *VAR_6;
    UINT64 VAR_7;
    char *VAR_8;


    VAR_8 = VAR_2;
    VAR_6 = VAR_5 ? VAR_1 : VAR_0;

    if (VAR_3 == 0)
    {
        *(VAR_8++) = '0';
    }
    else
    {
        while (VAR_3)
        {
            (void) FUNC_0 (VAR_3, VAR_4, &VAR_3, &VAR_7);
            *(VAR_8++) = VAR_6[VAR_7];
        }
    }


    return (VAR_8);
}
