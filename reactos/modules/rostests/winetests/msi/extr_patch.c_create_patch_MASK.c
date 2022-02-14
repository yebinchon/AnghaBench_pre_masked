
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int member_0; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_5__ {int member_0; TYPE_1__ member_3; int member_2; int member_1; } ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef TYPE_2__ CLSID ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int const,int ,int ,int **) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__ const*) ;
 int FUNC_6 (int ,int ,char const*,int,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_7 (int *,int const,int ,int **) ;
 int FUNC_8 (int,char*,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_10( const char *VAR_14 )
{
    IStorage *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    WCHAR *VAR_18;
    HRESULT VAR_19;
    int VAR_20;
    const DWORD VAR_21 = VAR_4|VAR_6|VAR_5|VAR_7;

    const CLSID VAR_22 = {0xc1086, 0, 0, {0xc0, 0, 0, 0, 0, 0, 0, 0x46}};
    const CLSID VAR_23 = {0xc1082, 0, 0, {0xc0, 0, 0, 0, 0, 0, 0, 0x46}};

    VAR_20 = FUNC_6( VAR_0, 0, VAR_14, -1, ((void*)0), 0 );
    VAR_18 = FUNC_1( FUNC_0(), 0, VAR_20 * sizeof(WCHAR) );
    FUNC_6( VAR_0, 0, VAR_14, -1, VAR_18, VAR_20 );

    VAR_19 = FUNC_7( VAR_18, VAR_21, 0, &VAR_15 );
    FUNC_2( FUNC_0(), 0, VAR_18 );
    FUNC_8( VAR_19 == VAR_8, "failed to create storage 0x%08x\n", VAR_19 );
    if (!VAR_15)
        return;

    VAR_19 = FUNC_5( VAR_15, &VAR_22 );
    FUNC_8( VAR_19 == VAR_8, "failed to set storage type 0x%08x\n", VAR_19 );

    FUNC_9( VAR_15, VAR_11, VAR_1 );

    VAR_19 = FUNC_3( VAR_15, VAR_9, VAR_21, 0, 0, &VAR_16 );
    FUNC_8( VAR_19 == VAR_8, "failed to create substorage 0x%08x\n", VAR_19 );

    VAR_19 = FUNC_5( VAR_16, &VAR_23 );
    FUNC_8( VAR_19 == VAR_8, "failed to set storage type 0x%08x\n", VAR_19 );

    FUNC_9( VAR_16, VAR_12, VAR_2 );
    FUNC_4( VAR_16 );

    VAR_19 = FUNC_3( VAR_15, VAR_10, VAR_21, 0, 0, &VAR_17 );
    FUNC_8( VAR_19 == VAR_8, "failed to create substorage 0x%08x\n", VAR_19 );

    VAR_19 = FUNC_5( VAR_17, &VAR_23 );
    FUNC_8( VAR_19 == VAR_8, "failed to set storage type 0x%08x\n", VAR_19 );

    FUNC_9( VAR_17, VAR_13, VAR_3 );
    FUNC_4( VAR_17 );
    FUNC_4( VAR_15 );
}
