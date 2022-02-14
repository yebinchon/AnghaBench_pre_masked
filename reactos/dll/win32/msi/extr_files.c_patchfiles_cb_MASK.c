
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ Action; int Component; int Enabled; } ;
struct TYPE_13__ {int extracted; TYPE_1__* File; int path; int disk_id; } ;
struct TYPE_12__ {int db; } ;
struct TYPE_11__ {scalar_t__ Attributes; int File; TYPE_4__* Component; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_2__ MSIPACKAGE ;
typedef TYPE_3__ MSIFILEPATCH ;
typedef TYPE_4__ MSICOMPONENT ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static BOOL FUNC_7(MSIPACKAGE *VAR_5, LPCWSTR VAR_6, DWORD VAR_7,
                          LPWSTR *VAR_8, DWORD *VAR_9, PVOID VAR_10)
{
    MSIFILEPATCH *VAR_11 = *(MSIFILEPATCH **)VAR_10;

    if (VAR_7 == VAR_2)
    {
        MSICOMPONENT *VAR_12;

        if (FUNC_3( VAR_5, VAR_11->disk_id ) ||
            !(VAR_11 = FUNC_2( VAR_5, VAR_11->disk_id, VAR_6 ))) return VAR_0;

        VAR_12 = VAR_11->File->Component;
        VAR_12->Action = FUNC_5( VAR_5, VAR_12 );
        if (!VAR_12->Enabled || VAR_12->Action != VAR_1)
        {
            FUNC_0("file %s component %s not installed or disabled\n",
                  FUNC_1(VAR_11->File->File), FUNC_1(VAR_12->Component));
            return VAR_0;
        }

        VAR_11->path = FUNC_4( VAR_5->db );
        *VAR_8 = FUNC_6( VAR_11->path );
        *VAR_9 = VAR_11->File->Attributes;
        *(MSIFILEPATCH **)VAR_10 = VAR_11;
    }
    else if (VAR_7 == VAR_3)
    {
        VAR_11->extracted = VAR_4;
    }

    return VAR_4;
}
