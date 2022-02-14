
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Level; } ;
typedef int MSIRECORD ;
typedef int MSIPACKAGE ;
typedef TYPE_1__ MSIFEATURE ;
typedef int * LPVOID ;
typedef int LPCWSTR ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int *,int ) ;

__attribute__((used)) static UINT FUNC_7(MSIRECORD *VAR_2, LPVOID VAR_3)
{
    MSIPACKAGE *VAR_4 = VAR_3;
    LPCWSTR VAR_5;
    MSIFEATURE *VAR_6;

    VAR_5 = FUNC_3( VAR_2, 1 );

    VAR_6 = FUNC_6( VAR_4, VAR_5 );
    if (!VAR_6)
        FUNC_0("FAILED to find loaded feature %s\n",FUNC_5(VAR_5));
    else
    {
        LPCWSTR VAR_7;
        VAR_7 = FUNC_3(VAR_2,3);

        if (FUNC_1(VAR_4,VAR_7) == VAR_1)
        {
            int VAR_8 = FUNC_2(VAR_2,2);
            FUNC_4("Resetting feature %s to level %i\n", FUNC_5(VAR_5), VAR_8);
            VAR_6->Level = VAR_8;
        }
    }
    return VAR_0;
}
