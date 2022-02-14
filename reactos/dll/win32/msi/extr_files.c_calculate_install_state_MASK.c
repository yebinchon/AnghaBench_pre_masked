
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int msi_file_state ;
struct TYPE_22__ {int dwFileVersionLS; int dwFileVersionMS; } ;
typedef TYPE_3__ WCHAR ;
typedef TYPE_3__ VS_FIXEDFILEINFO ;
struct TYPE_24__ {scalar_t__ Action; TYPE_1__* assembly; int Enabled; } ;
struct TYPE_21__ {scalar_t__ dwFileHashInfoSize; } ;
struct TYPE_23__ {TYPE_3__* File; TYPE_2__ hash; int FileSize; int TargetPath; TYPE_3__* Version; TYPE_6__* Component; } ;
struct TYPE_20__ {scalar_t__ installed; } ;
typedef int MSIPACKAGE ;
typedef TYPE_5__ MSIFILE ;
typedef TYPE_6__ MSICOMPONENT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_5__*) ;
 TYPE_3__* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (int *,TYPE_6__*) ;
 int FUNC_12 (int ) ;
 TYPE_3__* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (TYPE_6__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static msi_file_state FUNC_15( MSIPACKAGE *VAR_7, MSIFILE *VAR_8 )
{
    MSICOMPONENT *VAR_9 = VAR_8->Component;
    VS_FIXEDFILEINFO *VAR_10;
    WCHAR *VAR_11;
    msi_file_state VAR_12;
    DWORD VAR_13;

    VAR_9->Action = FUNC_11( VAR_7, VAR_9 );
    if (!VAR_9->Enabled || VAR_9->Action != VAR_0 || (VAR_9->assembly && VAR_9->assembly->installed))
    {
        FUNC_3("skipping %s (not scheduled for install)\n", FUNC_4(VAR_8->File));
        return VAR_6;
    }
    if (FUNC_5( VAR_7, VAR_8 ))
    {
        FUNC_3("skipping %s (obsoleted by patch)\n", FUNC_4(VAR_8->File));
        return VAR_6;
    }
    if ((FUNC_14( VAR_9 ) && !VAR_9->assembly->installed) ||
        FUNC_0( VAR_8->TargetPath ) == VAR_1)
    {
        FUNC_3("installing %s (missing)\n", FUNC_4(VAR_8->File));
        return VAR_3;
    }
    if (VAR_8->Version)
    {
        if ((VAR_10 = FUNC_13( VAR_8->TargetPath )))
        {
            if (FUNC_6( VAR_10, VAR_8->Version ) < 0)
            {
                FUNC_3("overwriting %s (new version %s old version %u.%u.%u.%u)\n",
                      FUNC_4(VAR_8->File), FUNC_4(VAR_8->Version),
                      FUNC_1(VAR_10->dwFileVersionMS), FUNC_2(VAR_10->dwFileVersionMS),
                      FUNC_1(VAR_10->dwFileVersionLS), FUNC_2(VAR_10->dwFileVersionLS));
                VAR_12 = VAR_4;
            }
            else
            {
                FUNC_3("keeping %s (new version %s old version %u.%u.%u.%u)\n",
                      FUNC_4(VAR_8->File), FUNC_4(VAR_8->Version),
                      FUNC_1(VAR_10->dwFileVersionMS), FUNC_2(VAR_10->dwFileVersionMS),
                      FUNC_1(VAR_10->dwFileVersionLS), FUNC_2(VAR_10->dwFileVersionLS));
                VAR_12 = VAR_5;
            }
            FUNC_10( VAR_10 );
            return VAR_12;
        }
        else if ((VAR_11 = FUNC_9( VAR_8->TargetPath )))
        {
            if (FUNC_7( VAR_11, VAR_8->Version ) < 0)
            {
                FUNC_3("overwriting %s (new version %s old version %s)\n",
                      FUNC_4(VAR_8->File), FUNC_4(VAR_8->Version), FUNC_4(VAR_11));
                VAR_12 = VAR_4;
            }
            else
            {
                FUNC_3("keeping %s (new version %s old version %s)\n",
                      FUNC_4(VAR_8->File), FUNC_4(VAR_8->Version), FUNC_4(VAR_11));
                VAR_12 = VAR_5;
            }
            FUNC_10( VAR_11 );
            return VAR_12;
        }
    }
    if ((VAR_13 = FUNC_12( VAR_8->TargetPath )) != VAR_8->FileSize)
    {
        FUNC_3("overwriting %s (old size %u new size %u)\n", FUNC_4(VAR_8->File), VAR_13, VAR_8->FileSize);
        return VAR_4;
    }
    if (VAR_8->hash.dwFileHashInfoSize)
    {
        if (FUNC_8( VAR_8 ))
        {
            FUNC_3("keeping %s (hash match)\n", FUNC_4(VAR_8->File));
            return VAR_2;
        }
        else
        {
            FUNC_3("overwriting %s (hash mismatch)\n", FUNC_4(VAR_8->File));
            return VAR_4;
        }
    }

    FUNC_3("keeping %s\n", FUNC_4(VAR_8->File));
    return VAR_5;
}
