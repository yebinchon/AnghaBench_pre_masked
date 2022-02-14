
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_17__ {size_t propid; size_t dwOffset; } ;
struct TYPE_16__ {size_t cProperties; } ;
struct TYPE_11__ {int len; int str; } ;
struct TYPE_13__ {int i4; int i2; int ft; TYPE_1__ str; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_3__ u; } ;
struct TYPE_12__ {int lVal; int iVal; int filetime; scalar_t__* pszVal; } ;
struct TYPE_14__ {scalar_t__ vt; TYPE_2__ u; } ;
typedef TYPE_4__ PROPVARIANT ;
typedef TYPE_5__ PROPERTY_DATA ;
typedef TYPE_6__ PROPERTYSECTIONHEADER ;
typedef TYPE_7__ PROPERTYIDOFFSET ;
typedef scalar_t__* LPSTR ;
typedef int * LPBYTE ;
typedef int FILETIME ;
typedef size_t DWORD ;


 int FUNC_0 (char*,...) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 scalar_t__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*,scalar_t__) ;

__attribute__((used)) static void FUNC_5( PROPVARIANT *VAR_7, LPBYTE VAR_8, DWORD VAR_9 )
{
    UINT VAR_10;
    DWORD VAR_11, VAR_12;
    PROPERTY_DATA *VAR_13;
    PROPVARIANT VAR_14, *VAR_15;
    PROPVARIANT VAR_16;
    PROPERTYIDOFFSET *VAR_17;
    PROPERTYSECTIONHEADER *VAR_18;

    VAR_18 = (PROPERTYSECTIONHEADER*) &VAR_8[0];
    VAR_17 = (PROPERTYIDOFFSET*) &VAR_8[VAR_1];


    for( VAR_11 = 0; VAR_11 < VAR_18->cProperties; VAR_11++ )
    {
        if( VAR_17[VAR_11].propid >= VAR_0 )
        {
            FUNC_0("Unknown property ID %d\n", VAR_17[VAR_11].propid );
            break;
        }

        VAR_10 = FUNC_1( VAR_17[VAR_11].propid );
        if( VAR_10 == VAR_2 )
        {
            FUNC_0("propid %d has unknown type\n", VAR_17[VAR_11].propid);
            break;
        }

        VAR_13 = (PROPERTY_DATA*) &VAR_8[ VAR_17[VAR_11].dwOffset ];


        VAR_12 = VAR_9 - VAR_17[VAR_11].dwOffset - sizeof(DWORD);
        if( sizeof(DWORD) > VAR_12 ||
            ( VAR_13->type == VAR_3 && sizeof(FILETIME) > VAR_12 ) ||
            ( VAR_13->type == VAR_6 && (VAR_13->u.str.len + sizeof(DWORD)) > VAR_12 ) )
        {
            FUNC_0("not enough data\n");
            break;
        }

        VAR_14.vt = VAR_13->type;
        if( VAR_13->type == VAR_6 )
        {
            LPSTR VAR_19 = FUNC_3( VAR_13->u.str.len );
            FUNC_2( VAR_19, VAR_13->u.str.str, VAR_13->u.str.len );
            VAR_19[ VAR_13->u.str.len - 1 ] = 0;
            VAR_14.u.pszVal = VAR_19;
        }
        else if( VAR_13->type == VAR_3 )
            VAR_14.u.filetime = VAR_13->u.ft;
        else if( VAR_13->type == VAR_4 )
            VAR_14.u.iVal = VAR_13->u.i2;
        else if( VAR_13->type == VAR_5 )
            VAR_14.u.lVal = VAR_13->u.i4;


        if( VAR_10 != VAR_13->type )
        {
            FUNC_4(&VAR_16, &VAR_14, VAR_10);
            VAR_15 = &VAR_16;
        }
        else
            VAR_15 = &VAR_14;

        VAR_7[ VAR_17[VAR_11].propid ] = *VAR_15;
    }
}
