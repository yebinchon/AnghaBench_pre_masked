
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int startup ;
typedef int classes ;
struct TYPE_7__ {int hThread; int hProcess; } ;
struct TYPE_6__ {int cb; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;

 int VAR_0 ;

 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,char*,char*,char const*) ;
 int FUNC_5 (char***) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void)
{
    char VAR_2[VAR_1];
    PROCESS_INFORMATION VAR_3;
    STARTUPINFOA VAR_4;
    char **VAR_5;
    int VAR_6;

    static const char *VAR_7[] =
    {
        146,
        135,
        145,
        134,
        144,
        133,
        132,
        143,
        131,
        130,
        142,
        141,
        140,
        "SysLink",
        129,
        139,
        138,
        137,
        128,
        136,
        "!Button",
        "!Edit",
        "!Static",
        "!Listbox",
        "!ComboBox",
        "!ComboLBox",
    };

    FUNC_5( &VAR_5 );
    for (VAR_6 = 0; VAR_6 < sizeof(VAR_7) / sizeof(VAR_7[0]); VAR_6++)
    {
        FUNC_2( &VAR_4, 0, sizeof(VAR_4) );
        VAR_4.cb = sizeof( VAR_4 );
        FUNC_4( VAR_2, "%s class %s", VAR_5[0], VAR_7[VAR_6] );
        FUNC_3( FUNC_1( ((void*)0), VAR_2, ((void*)0), ((void*)0), VAR_0, 0, ((void*)0), ((void*)0), &VAR_4, &VAR_3 ),
            "CreateProcess failed.\n" );
        FUNC_6( VAR_3.hProcess );
        FUNC_0( VAR_3.hProcess );
        FUNC_0( VAR_3.hThread );
    }
}
