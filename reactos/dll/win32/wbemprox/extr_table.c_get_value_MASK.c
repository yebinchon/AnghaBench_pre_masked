
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct table {TYPE_1__* columns; int * data; } ;
typedef int WCHAR ;
typedef int UINT8 ;
typedef int UINT64 ;
typedef int UINT32 ;
typedef int UINT16 ;
typedef int UINT ;
struct TYPE_2__ {int type; } ;
typedef int LONGLONG ;
typedef int INT_PTR ;
typedef int INT8 ;
typedef int INT64 ;
typedef int INT32 ;
typedef int INT16 ;
typedef int HRESULT ;
typedef int BYTE ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct table const*,int) ;
 int FUNC_2 (struct table const*) ;

HRESULT FUNC_3( const struct table *VAR_3, UINT VAR_4, UINT VAR_5, LONGLONG *VAR_6 )
{
    UINT VAR_7, VAR_8;
    const BYTE *VAR_9;

    VAR_7 = FUNC_1( VAR_3, VAR_5 );
    VAR_8 = FUNC_2( VAR_3 );
    VAR_9 = VAR_3->data + VAR_4 * VAR_8 + VAR_7;

    if (VAR_3->columns[VAR_5].type & VAR_0)
    {
        *VAR_6 = (INT_PTR)*(const void **)VAR_9;
        return VAR_2;
    }
    switch (VAR_3->columns[VAR_5].type & VAR_1)
    {
    case 138:
        *VAR_6 = *(const int *)VAR_9;
        break;
    case 137:
    case 132:
        *VAR_6 = (INT_PTR)*(const WCHAR **)VAR_9;
        break;
    case 133:
        *VAR_6 = *(const INT8 *)VAR_9;
        break;
    case 128:
        *VAR_6 = *(const UINT8 *)VAR_9;
        break;
    case 136:
        *VAR_6 = *(const INT16 *)VAR_9;
        break;
    case 131:
        *VAR_6 = *(const UINT16 *)VAR_9;
        break;
    case 135:
        *VAR_6 = *(const INT32 *)VAR_9;
        break;
    case 130:
        *VAR_6 = *(const UINT32 *)VAR_9;
        break;
    case 134:
        *VAR_6 = *(const INT64 *)VAR_9;
        break;
    case 129:
        *VAR_6 = *(const UINT64 *)VAR_9;
        break;
    default:
        FUNC_0("invalid column type %u\n", VAR_3->columns[VAR_5].type & VAR_1);
        *VAR_6 = 0;
        break;
    }
    return VAR_2;
}
