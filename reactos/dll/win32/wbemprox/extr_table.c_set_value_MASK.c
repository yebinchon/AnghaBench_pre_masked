
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct table {TYPE_1__* columns; int * data; } ;
typedef int WCHAR ;
typedef void* UINT8 ;
typedef void* UINT64 ;
typedef void* UINT32 ;
typedef void* UINT16 ;
typedef size_t UINT ;
struct TYPE_2__ {int type; } ;
typedef void* LONGLONG ;
typedef scalar_t__ INT_PTR ;
typedef void* INT8 ;
typedef void* INT64 ;
typedef void* INT32 ;
typedef void* INT16 ;
typedef int HRESULT ;
typedef int CIMTYPE ;
typedef int BYTE ;
 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (struct table const*,size_t) ;
 size_t FUNC_2 (struct table const*) ;

HRESULT FUNC_3( const struct table *VAR_4, UINT VAR_5, UINT VAR_6, LONGLONG VAR_7,
                   CIMTYPE VAR_8 )
{
    UINT VAR_9, VAR_10;
    BYTE *VAR_11;

    if ((VAR_4->columns[VAR_6].type & VAR_0) != VAR_8) return VAR_3;

    VAR_9 = FUNC_1( VAR_4, VAR_6 );
    VAR_10 = FUNC_2( VAR_4 );
    VAR_11 = VAR_4->data + VAR_5 * VAR_10 + VAR_9;

    switch (VAR_4->columns[VAR_6].type & VAR_0)
    {
    case 137:
    case 132:
        *(WCHAR **)VAR_11 = (WCHAR *)(INT_PTR)VAR_7;
        break;
    case 133:
        *(INT8 *)VAR_11 = VAR_7;
        break;
    case 128:
        *(UINT8 *)VAR_11 = VAR_7;
        break;
    case 136:
        *(INT16 *)VAR_11 = VAR_7;
        break;
    case 131:
        *(UINT16 *)VAR_11 = VAR_7;
        break;
    case 135:
        *(INT32 *)VAR_11 = VAR_7;
        break;
    case 130:
        *(UINT32 *)VAR_11 = VAR_7;
        break;
    case 134:
        *(INT64 *)VAR_11 = VAR_7;
        break;
    case 129:
        *(UINT64 *)VAR_11 = VAR_7;
        break;
    default:
        FUNC_0("unhandled column type %u\n", VAR_8);
        return VAR_2;
    }
    return VAR_1;
}
