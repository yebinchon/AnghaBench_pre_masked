
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t ULONG ;
typedef int UINT ;
struct TYPE_17__ {int * property; } ;
struct TYPE_16__ {int cbSection; size_t cProperties; int propid; int dwOffset; } ;
struct TYPE_15__ {int wByteOrder; int dwOSVer; int reserved; int dwOffset; int fmtid; scalar_t__ wFormat; } ;
typedef TYPE_1__ PROPERTYSETHEADER ;
typedef TYPE_2__ PROPERTYSECTIONHEADER ;
typedef TYPE_2__ PROPERTYIDOFFSET ;
typedef TYPE_4__ MSISUMMARYINFO ;
typedef TYPE_1__* LPBYTE ;
typedef int IStream ;
typedef int HRESULT ;
typedef TYPE_1__ FORMATIDOFFSET ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*,size_t,size_t*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,size_t) ;
 TYPE_1__* FUNC_5 (size_t) ;
 int FUNC_6 (TYPE_1__*) ;
 size_t FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static UINT FUNC_8( const MSISUMMARYINFO * VAR_4, IStream *VAR_5 )
{
    UINT VAR_6 = VAR_0;
    PROPERTYSETHEADER VAR_7;
    FORMATIDOFFSET VAR_8;
    PROPERTYSECTIONHEADER VAR_9;
    PROPERTYIDOFFSET VAR_10[VAR_3];
    LPBYTE VAR_11 = ((void*)0);
    ULONG VAR_12, VAR_13;
    HRESULT VAR_14;
    int VAR_15;


    VAR_13 = sizeof VAR_7;
    FUNC_4( &VAR_7, 0, VAR_13 );
    VAR_7.wByteOrder = 0xfffe;
    VAR_7.wFormat = 0;
    VAR_7.dwOSVer = 0x00020005;

    VAR_7.reserved = 1;
    VAR_14 = FUNC_1( VAR_5, &VAR_7, VAR_13, &VAR_12 );
    if( FUNC_0(VAR_14) || VAR_12 != VAR_13 )
        return VAR_6;


    VAR_13 = sizeof VAR_8;
    VAR_8.fmtid = VAR_2;
    VAR_8.dwOffset = sizeof VAR_8 + sizeof VAR_7;
    VAR_14 = FUNC_1( VAR_5, &VAR_8, VAR_13, &VAR_12 );
    if( FUNC_0(VAR_14) || VAR_12 != VAR_13 )
        return VAR_6;


    VAR_9.cbSection = sizeof VAR_9;
    VAR_9.cbSection += (FUNC_2( VAR_4->property ) * sizeof VAR_10[0]);
    VAR_9.cProperties = 0;
    for( VAR_15 = 0; VAR_15 < VAR_3; VAR_15++ )
    {
        VAR_13 = FUNC_7( &VAR_4->property[VAR_15], ((void*)0) );
        if( !VAR_13 )
            continue;
        VAR_10[ VAR_9.cProperties ].propid = VAR_15;
        VAR_10[ VAR_9.cProperties ].dwOffset = VAR_9.cbSection;
        VAR_9.cProperties++;
        VAR_9.cbSection += VAR_13;
    }

    VAR_11 = FUNC_5( VAR_9.cbSection );

    VAR_13 = 0;
    FUNC_3( &VAR_11[VAR_13], &VAR_9, sizeof VAR_9 );
    VAR_13 += sizeof VAR_9;

    FUNC_3( &VAR_11[VAR_13], VAR_10, VAR_9.cProperties * sizeof VAR_10[0] );
    VAR_13 += VAR_9.cProperties * sizeof VAR_10[0];


    for( VAR_15 = 0; VAR_15 < VAR_3; VAR_15++ )
        VAR_13 += FUNC_7( &VAR_4->property[VAR_15], &VAR_11[VAR_13] );

    VAR_14 = FUNC_1( VAR_5, VAR_11, VAR_13, &VAR_12 );
    FUNC_6( VAR_11 );
    if( FUNC_0(VAR_14) || VAR_12 != VAR_13 )
        return VAR_6;

    return VAR_1;
}
