
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
typedef int UINT ;
struct TYPE_4__ {int QuadPart; } ;
struct TYPE_5__ {TYPE_1__ cbSize; } ;
typedef TYPE_2__ STATSTG ;
typedef int * LPWSTR ;
typedef int * LPCWSTR ;
typedef int IStream ;
typedef int IStorage ;
typedef int HRESULT ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,int,int ,int **) ;
 int FUNC_2 (int *,int *,int,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,int *) ;
 int * FUNC_9 (int) ;
 int FUNC_10 (int *) ;

UINT FUNC_11( IStorage *VAR_6, LPCWSTR VAR_7, BOOL VAR_8,
                       BYTE **VAR_9, UINT *VAR_10 )
{
    HRESULT VAR_11;
    UINT VAR_12 = VAR_0;
    VOID *VAR_13;
    ULONG VAR_14, VAR_15;
    IStream *VAR_16 = ((void*)0);
    STATSTG VAR_17;
    LPWSTR VAR_18;

    VAR_18 = FUNC_8(VAR_8, VAR_7);

    FUNC_5("%s -> %s\n",FUNC_7(VAR_7),FUNC_7(VAR_18));

    VAR_11 = FUNC_1(VAR_6, VAR_18, ((void*)0),
            VAR_4 | VAR_5, 0, &VAR_16);
    FUNC_10( VAR_18 );
    if( FUNC_0( VAR_11 ) )
    {
        FUNC_6("open stream failed r = %08x - empty table?\n", VAR_11);
        return VAR_12;
    }

    VAR_11 = FUNC_4(VAR_16, &VAR_17, VAR_3 );
    if( FUNC_0( VAR_11 ) )
    {
        FUNC_6("open stream failed r = %08x!\n", VAR_11);
        goto end;
    }

    if( VAR_17.cbSize.QuadPart >> 32 )
    {
        FUNC_6("Too big!\n");
        goto end;
    }

    VAR_14 = VAR_17.cbSize.QuadPart;
    VAR_13 = FUNC_9( VAR_14 );
    if( !VAR_13 )
    {
        FUNC_6("couldn't allocate memory r=%08x!\n", VAR_11);
        VAR_12 = VAR_1;
        goto end;
    }

    VAR_11 = FUNC_2(VAR_16, VAR_13, VAR_14, &VAR_15 );
    if( FUNC_0( VAR_11 ) || ( VAR_15 != VAR_14 ) )
    {
        FUNC_10( VAR_13 );
        FUNC_6("read stream failed r = %08x!\n", VAR_11);
        goto end;
    }

    *VAR_9 = VAR_13;
    *VAR_10 = VAR_14;
    VAR_12 = VAR_2;

end:
    FUNC_3( VAR_16 );

    return VAR_12;
}
