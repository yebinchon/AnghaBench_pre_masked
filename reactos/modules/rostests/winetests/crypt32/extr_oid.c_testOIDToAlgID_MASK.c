
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* oid; scalar_t__ algID; scalar_t__ altAlgID; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_1;
    DWORD VAR_2;


    VAR_2 = FUNC_1("1.2.3");
    FUNC_2(!VAR_2, "Expected failure, got %d\n", VAR_2);

    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++)
    {
        VAR_2 = FUNC_1(VAR_0[VAR_1].oid);
        FUNC_2(VAR_2 == VAR_0[VAR_1].algID || (VAR_0[VAR_1].altAlgID && VAR_2 == VAR_0[VAR_1].altAlgID),
         "Expected %d, got %d\n", VAR_0[VAR_1].algID, VAR_2);
    }
}
