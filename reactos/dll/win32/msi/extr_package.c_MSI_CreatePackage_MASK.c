
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_16__ {int path; int hdr; } ;
struct TYPE_15__ {int WordCount; int ui_level; int log_file; int hdr; TYPE_2__* db; int ProductCode; void* BaseURL; void* PackagePath; int LastActionResult; int * LastActionTemplate; int * LastAction; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSIDATABASE ;
typedef int LPCWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,int ,char*,int) ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*,char const*,int) ;
 void* FUNC_13 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

MSIPACKAGE *FUNC_14( MSIDATABASE *VAR_8, LPCWSTR VAR_9 )
{
    static const WCHAR VAR_10[] = {'%','u',0};
    MSIPACKAGE *VAR_11;
    WCHAR VAR_12[11];
    int VAR_13;
    UINT VAR_14;

    FUNC_0("%p\n", VAR_8);

    VAR_11 = FUNC_3();
    if (VAR_11)
    {
        FUNC_9( &VAR_8->hdr );
        VAR_11->db = VAR_8;

        VAR_11->LastAction = ((void*)0);
        VAR_11->LastActionTemplate = ((void*)0);
        VAR_11->LastActionResult = VAR_3;
        VAR_11->WordCount = 0;
        VAR_11->PackagePath = FUNC_13( VAR_8->path );
        VAR_11->BaseURL = FUNC_13( VAR_9 );

        FUNC_1( VAR_11 );
        FUNC_4( VAR_11->db );
        FUNC_2( VAR_11 );

        VAR_11->ProductCode = FUNC_5( VAR_11->db, VAR_6 );

        FUNC_11( VAR_11 );

        VAR_11->ui_level = VAR_4;
        VAR_13 = FUNC_12( VAR_12, VAR_10, VAR_4 & VAR_1 );
        FUNC_8( VAR_11->db, VAR_7, VAR_12, VAR_13 );

        VAR_14 = FUNC_7( VAR_11 );
        if (VAR_14 != VAR_0)
        {
            FUNC_10( &VAR_11->hdr );
            return ((void*)0);
        }

        if (VAR_11->WordCount & VAR_5)
            FUNC_6( VAR_11 );

        VAR_11->log_file = VAR_2;
    }
    return VAR_11;
}
