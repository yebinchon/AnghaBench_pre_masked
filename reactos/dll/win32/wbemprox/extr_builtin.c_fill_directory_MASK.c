
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct table {int data; int num_rows; } ;
struct record_directory {int name; int accessmask; } ;
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
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 () ;
 int VAR_6 ;
 int FUNC_5 (char*,int) ;
 struct dirstack* FUNC_6 (int) ;
 char* FUNC_7 (char*,int ,int*) ;
 char* FUNC_8 (char,char*,int) ;
 int FUNC_9 (char,char*) ;
 int FUNC_10 (struct dirstack*) ;
 int FUNC_11 (struct dirstack*) ;
 int FUNC_12 (struct table*,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct table*,int,struct expr const*,int*) ;
 int FUNC_15 (struct dirstack*) ;
 char* FUNC_16 (struct dirstack*,int*) ;
 int FUNC_17 (struct dirstack*,char*,int) ;
 int FUNC_18 (struct table*,int,int) ;
 int FUNC_19 (struct dirstack*,struct expr const*,char,int*) ;
 int FUNC_20 (int ,char const*) ;

__attribute__((used)) static enum fill_status FUNC_21( struct table *VAR_7, const struct expr *VAR_8 )
{
    static const WCHAR VAR_9[] = {'.',0}, VAR_10[] = {'.','.',0};
    struct record_directory *VAR_11;
    UINT VAR_12, VAR_13, VAR_14 = 0, VAR_15 = 0, VAR_16;
    WCHAR *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19, VAR_20[] = {'A',':','\\',0};
    DWORD VAR_21 = FUNC_4();
    WIN32_FIND_DATAW VAR_22;
    HANDLE VAR_23;
    struct dirstack *VAR_24;
    enum fill_status VAR_25 = VAR_5;

    if (!FUNC_18( VAR_7, 4, sizeof(*VAR_11) )) return VAR_3;

    VAR_24 = FUNC_6(2);

    for (VAR_12 = 0; VAR_12 < 26; VAR_12++)
    {
        if (!(VAR_21 & (1 << VAR_12))) continue;

        VAR_20[0] = 'A' + VAR_12;
        if (FUNC_3( VAR_20 ) != VAR_0) continue;

        VAR_16 = 0;
        if (!FUNC_19( VAR_24, VAR_8, VAR_20[0], &VAR_16 )) FUNC_10( VAR_24 );

        for (;;)
        {
            FUNC_13( VAR_17 );
            FUNC_13( VAR_18 );
            VAR_18 = FUNC_16( VAR_24, &VAR_13 );
            if (!(VAR_17 = FUNC_8( VAR_20[0], VAR_18, VAR_13 )))
            {
                VAR_25 = VAR_3;
                goto done;
            }
            if ((VAR_23 = FUNC_1( VAR_17, &VAR_22 )) != VAR_6)
            {
                do
                {
                    if (!FUNC_18( VAR_7, VAR_14 + 1, sizeof(*VAR_11) ))
                    {
                        FUNC_0( VAR_23 );
                        VAR_25 = VAR_3;
                        goto done;
                    }
                    if (!(VAR_22.dwFileAttributes & VAR_2) ||
                        !FUNC_20( VAR_22.cFileName, VAR_9 ) || !FUNC_20( VAR_22.cFileName, VAR_10 ))
                        continue;

                    VAR_19 = FUNC_7( VAR_18, VAR_22.cFileName, &VAR_13 );
                    if (!(FUNC_17( VAR_24, VAR_19, VAR_13 )))
                    {
                        FUNC_13( VAR_19 );
                        FUNC_0( VAR_23 );
                        VAR_25 = VAR_3;
                        goto done;
                    }
                    VAR_11 = (struct record_directory *)(VAR_7->data + VAR_15);
                    VAR_11->accessmask = VAR_1;
                    VAR_11->name = FUNC_9( VAR_20[0], VAR_19 );
                    if (!FUNC_14( VAR_7, VAR_14, VAR_8, &VAR_25 ))
                    {
                        FUNC_12( VAR_7, VAR_14 );
                        continue;
                    }
                    else if (VAR_16 && VAR_14 == VAR_16 - 1)
                    {
                        VAR_14++;
                        FUNC_0( VAR_23 );
                        VAR_25 = VAR_4;
                        goto done;
                    }
                    VAR_15 += sizeof(*VAR_11);
                    VAR_14++;
                }
                while (FUNC_2( VAR_23, &VAR_22 ));
                FUNC_0( VAR_23 );
            }
            if (!FUNC_15( VAR_24 )) break;
        }
    }

done:
    FUNC_11( VAR_24 );
    FUNC_13( VAR_17 );
    FUNC_13( VAR_18 );

    FUNC_5("created %u rows\n", VAR_14);
    VAR_7->num_rows = VAR_14;
    return VAR_25;
}
