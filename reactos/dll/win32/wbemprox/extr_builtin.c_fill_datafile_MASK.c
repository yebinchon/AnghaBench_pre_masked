
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct table {int data; int num_rows; } ;
struct record_datafile {int name; int version; } ;
struct expr {int dummy; } ;
struct dirstack {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
struct TYPE_4__ {int dwFileAttributes; int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef char WCHAR ;
typedef int UINT ;
typedef int HANDLE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (char*,int) ;
 struct dirstack* FUNC_6 (int) ;
 char* FUNC_7 (char*,int ,int*) ;
 char* FUNC_8 (char,char*,int) ;
 int FUNC_9 (char,char*) ;
 int FUNC_10 (struct dirstack*) ;
 int FUNC_11 (struct dirstack*) ;
 int FUNC_12 (struct table*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (struct table*,int,struct expr const*,int*) ;
 int FUNC_16 (struct dirstack*) ;
 char* FUNC_17 (struct dirstack*,int*) ;
 scalar_t__ FUNC_18 (struct dirstack*,char*,int) ;
 int FUNC_19 (struct table*,int,int) ;
 int FUNC_20 (struct dirstack*,struct expr const*,char,int*) ;
 int FUNC_21 (int ,char const*) ;

__attribute__((used)) static enum fill_status FUNC_22( struct table *VAR_6, const struct expr *VAR_7 )
{
    static const WCHAR VAR_8[] = {'.',0}, VAR_9[] = {'.','.',0};
    struct record_datafile *VAR_10;
    UINT VAR_11, VAR_12, VAR_13 = 0, VAR_14 = 0, VAR_15;
    WCHAR *VAR_16 = ((void*)0), *VAR_17 = ((void*)0), *VAR_18, VAR_19[] = {'A',':','\\',0};
    DWORD VAR_20 = FUNC_4();
    WIN32_FIND_DATAW VAR_21;
    HANDLE VAR_22;
    struct dirstack *VAR_23;
    enum fill_status VAR_24 = VAR_4;

    if (!FUNC_19( VAR_6, 8, sizeof(*VAR_10) )) return VAR_2;

    VAR_23 = FUNC_6(2);

    for (VAR_11 = 0; VAR_11 < 26; VAR_11++)
    {
        if (!(VAR_20 & (1 << VAR_11))) continue;

        VAR_19[0] = 'A' + VAR_11;
        if (FUNC_3( VAR_19 ) != VAR_0) continue;

        VAR_15 = 0;
        if (!FUNC_20( VAR_23, VAR_7, VAR_19[0], &VAR_15 )) FUNC_10( VAR_23 );

        for (;;)
        {
            FUNC_14( VAR_16 );
            FUNC_14( VAR_17 );
            VAR_17 = FUNC_17( VAR_23, &VAR_12 );
            if (!(VAR_16 = FUNC_8( VAR_19[0], VAR_17, VAR_12 )))
            {
                VAR_24 = VAR_2;
                goto done;
            }
            if ((VAR_22 = FUNC_1( VAR_16, &VAR_21 )) != VAR_5)
            {
                do
                {
                    if (!FUNC_19( VAR_6, VAR_13 + 1, sizeof(*VAR_10) ))
                    {
                        VAR_24 = VAR_2;
                        FUNC_0( VAR_22 );
                        goto done;
                    }
                    if (!FUNC_21( VAR_21.cFileName, VAR_8 ) || !FUNC_21( VAR_21.cFileName, VAR_9 )) continue;
                    VAR_18 = FUNC_7( VAR_17, VAR_21.cFileName, &VAR_12 );

                    if (VAR_21.dwFileAttributes & VAR_1)
                    {
                        if (FUNC_18( VAR_23, VAR_18, VAR_12 )) continue;
                        FUNC_14( VAR_18 );
                        FUNC_0( VAR_22 );
                        VAR_24 = VAR_2;
                        goto done;
                    }
                    VAR_10 = (struct record_datafile *)(VAR_6->data + VAR_14);
                    VAR_10->name = FUNC_9( VAR_19[0], VAR_18 );
                    VAR_10->version = FUNC_13( VAR_10->name );
                    if (!FUNC_15( VAR_6, VAR_13, VAR_7, &VAR_24 ))
                    {
                        FUNC_12( VAR_6, VAR_13 );
                        continue;
                    }
                    else if (VAR_15 && VAR_13 == VAR_15 - 1)
                    {
                        VAR_13++;
                        FUNC_0( VAR_22 );
                        VAR_24 = VAR_3;
                        goto done;
                    }
                    VAR_14 += sizeof(*VAR_10);
                    VAR_13++;
                }
                while (FUNC_2( VAR_22, &VAR_21 ));
                FUNC_0( VAR_22 );
            }
            if (!FUNC_16( VAR_23 )) break;
        }
    }

done:
    FUNC_11( VAR_23 );
    FUNC_14( VAR_16 );
    FUNC_14( VAR_17 );

    FUNC_5("created %u rows\n", VAR_13);
    VAR_6->num_rows = VAR_13;
    return VAR_24;
}
