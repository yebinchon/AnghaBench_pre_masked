
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dwFileVersionMS; scalar_t__ dwFileVersionLS; } ;
typedef TYPE_1__ VS_FIXEDFILEINFO ;
typedef int UINT ;
struct TYPE_5__ {scalar_t__ MinVersionMS; scalar_t__ MinVersionLS; scalar_t__ MaxVersionMS; scalar_t__ MaxVersionLS; int Languages; } ;
typedef TYPE_2__ MSISIGNATURE ;
typedef int LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,void*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ,...) ;
 int VAR_3 ;
 int FUNC_5 (void*,int ,void**,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int ) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (void*) ;
 int VAR_4 ;

__attribute__((used)) static UINT FUNC_10(const MSISIGNATURE *VAR_5, LPCWSTR VAR_6,
 BOOL *VAR_7)
{
    UINT VAR_8;
    void *VAR_9;
    VS_FIXEDFILEINFO *VAR_10 = ((void*)0);
    DWORD VAR_11, VAR_12 = FUNC_0( VAR_6, &VAR_11 );

    *VAR_7 = VAR_2;

    if (!VAR_12) return VAR_1;
    if (!(VAR_9 = FUNC_8( VAR_12 ))) return VAR_0;

    if (FUNC_1( VAR_6, 0, VAR_12, VAR_9 ))
        FUNC_5( VAR_9, VAR_4, (void **)&VAR_10, &VAR_8 );

    if (VAR_10)
    {
        FUNC_4("comparing file version %d.%d.%d.%d:\n",
              FUNC_2(VAR_10->dwFileVersionMS),
              FUNC_3(VAR_10->dwFileVersionMS),
              FUNC_2(VAR_10->dwFileVersionLS),
              FUNC_3(VAR_10->dwFileVersionLS));
        if (VAR_10->dwFileVersionMS < VAR_5->MinVersionMS
            || (VAR_10->dwFileVersionMS == VAR_5->MinVersionMS &&
                VAR_10->dwFileVersionLS < VAR_5->MinVersionLS))
        {
            FUNC_4("less than minimum version %d.%d.%d.%d\n",
                   FUNC_2(VAR_5->MinVersionMS),
                   FUNC_3(VAR_5->MinVersionMS),
                   FUNC_2(VAR_5->MinVersionLS),
                   FUNC_3(VAR_5->MinVersionLS));
        }
        else if ((VAR_5->MaxVersionMS || VAR_5->MaxVersionLS) &&
                 (VAR_10->dwFileVersionMS > VAR_5->MaxVersionMS ||
                  (VAR_10->dwFileVersionMS == VAR_5->MaxVersionMS &&
                   VAR_10->dwFileVersionLS > VAR_5->MaxVersionLS)))
        {
            FUNC_4("greater than maximum version %d.%d.%d.%d\n",
                   FUNC_2(VAR_5->MaxVersionMS),
                   FUNC_3(VAR_5->MaxVersionMS),
                   FUNC_2(VAR_5->MaxVersionLS),
                   FUNC_3(VAR_5->MaxVersionLS));
        }
        else if (!FUNC_7( VAR_9, VAR_5->Languages ))
        {
            FUNC_4("languages %s not supported\n", FUNC_6( VAR_5->Languages ));
        }
        else *VAR_7 = VAR_3;
    }
    FUNC_9( VAR_9 );
    return VAR_1;
}
