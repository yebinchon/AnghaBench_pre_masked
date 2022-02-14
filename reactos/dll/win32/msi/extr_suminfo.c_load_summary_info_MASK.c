
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef size_t ULONG ;
typedef int UINT ;
struct TYPE_18__ {int QuadPart; } ;
struct TYPE_17__ {int property; } ;
struct TYPE_16__ {int wByteOrder; size_t cbSection; int cProperties; int dwOffset; int fmtid; } ;
typedef TYPE_1__ PROPERTYSETHEADER ;
typedef TYPE_1__ PROPERTYSECTIONHEADER ;
typedef TYPE_3__ MSISUMMARYINFO ;
typedef TYPE_1__* LPBYTE ;
typedef TYPE_5__ LARGE_INTEGER ;
typedef int IStream ;
typedef int HRESULT ;
typedef TYPE_1__ FORMATIDOFFSET ;


 int FUNC_0 (char*,size_t,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_1__*,size_t,size_t*) ;
 int FUNC_3 (int *,TYPE_5__,int ,int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,size_t) ;
 TYPE_1__* FUNC_8 (size_t) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,TYPE_1__*,size_t) ;

__attribute__((used)) static UINT FUNC_11( MSISUMMARYINFO *VAR_6, IStream *VAR_7 )
{
    PROPERTYSETHEADER VAR_8;
    FORMATIDOFFSET VAR_9;
    PROPERTYSECTIONHEADER VAR_10;
    LPBYTE VAR_11 = ((void*)0);
    LARGE_INTEGER VAR_12;
    ULONG VAR_13, VAR_14;
    HRESULT VAR_15;

    FUNC_6("%p %p\n", VAR_6, VAR_7);


    VAR_14 = sizeof VAR_8;
    VAR_15 = FUNC_2( VAR_7, &VAR_8, VAR_14, &VAR_13 );
    if( FUNC_1(VAR_15) || VAR_13 != VAR_14 )
        return VAR_0;

    if( VAR_8.wByteOrder != 0xfffe )
    {
        FUNC_0("property set not big-endian %04X\n", VAR_8.wByteOrder);
        return VAR_0;
    }

    VAR_14 = sizeof VAR_9;
    VAR_15 = FUNC_2( VAR_7, &VAR_9, VAR_14, &VAR_13 );
    if( FUNC_1(VAR_15) || VAR_13 != VAR_14 )
        return VAR_0;


    if( !FUNC_4( &VAR_2, &VAR_9.fmtid ) )
        return VAR_0;


    VAR_12.QuadPart = VAR_9.dwOffset;
    VAR_15 = FUNC_3( VAR_7, VAR_12, VAR_5, ((void*)0) );
    if( FUNC_1(VAR_15) )
        return VAR_0;


    VAR_14 = VAR_4;
    VAR_15 = FUNC_2( VAR_7, &VAR_10, VAR_14, &VAR_13 );
    if( FUNC_1(VAR_15) || VAR_13 != VAR_14 )
        return VAR_0;

    if( VAR_10.cProperties > VAR_3 )
    {
        FUNC_0("too many properties %d\n", VAR_10.cProperties);
        return VAR_0;
    }

    VAR_11 = FUNC_8( VAR_10.cbSection);
    if( !VAR_11 )
        return VAR_0;

    FUNC_7( VAR_11, &VAR_10, VAR_4 );


    VAR_14 = VAR_10.cbSection - VAR_4;
    VAR_15 = FUNC_2( VAR_7, &VAR_11[ VAR_4 ], VAR_14, &VAR_13 );
    if( FUNC_5(VAR_15) && VAR_13 == VAR_14 )
        FUNC_10( VAR_6->property, VAR_11, VAR_14 + VAR_4 );
    else
        FUNC_0("failed to read properties %d %d\n", VAR_13, VAR_14);

    FUNC_9( VAR_11 );
    return VAR_1;
}
