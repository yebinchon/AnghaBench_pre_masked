
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int LONGLONG ;
typedef int INT8 ;
typedef int INT64 ;
typedef int INT32 ;
typedef int INT16 ;
typedef int CIMTYPE ;




 int VAR_0 ;
 int FUNC_0 (char*,int) ;

UINT FUNC_1( CIMTYPE VAR_1 )
{
    if (VAR_1 & VAR_0) return sizeof(void *);

    switch (VAR_1)
    {
    case 138:
        return sizeof(int);
    case 133:
    case 128:
        return sizeof(INT8);
    case 136:
    case 131:
        return sizeof(INT16);
    case 135:
    case 130:
        return sizeof(INT32);
    case 134:
    case 129:
        return sizeof(INT64);
    case 137:
    case 132:
        return sizeof(WCHAR *);
    default:
        FUNC_0("unhandled type %u\n", VAR_1);
        break;
    }
    return sizeof(LONGLONG);
}
