
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_8__ {int strings; } ;
struct TYPE_7__ {int type; } ;
struct TYPE_6__ {int num_cols; TYPE_4__* db; TYPE_2__* columns; } ;
typedef TYPE_1__ MSITABLEVIEW ;
typedef int MSIRECORD ;
typedef TYPE_2__ MSICOLUMNINFO ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*,int ) ;
 int * FUNC_5 (int *,int,int*) ;
 int FUNC_6 (int ,int const*,int,int*) ;

__attribute__((used)) static UINT FUNC_7( MSITABLEVIEW *VAR_5, MSIRECORD *VAR_6, UINT VAR_7, UINT *VAR_8 )
{
    MSICOLUMNINFO VAR_9;
    UINT VAR_10;
    int VAR_11;

    if ( (VAR_7 <= 0) ||
         (VAR_7 > VAR_5->num_cols) ||
          FUNC_3( VAR_6, VAR_7 ) )
        return VAR_0;

    VAR_9 = VAR_5->columns[ VAR_7 - 1 ];

    if ( FUNC_1(VAR_9.type) )
    {
        *VAR_8 = 1;
    }
    else if ( VAR_9.type & VAR_4 )
    {
        int VAR_12;
        const WCHAR *VAR_13 = FUNC_5( VAR_6, VAR_7, &VAR_12 );
        if (VAR_13)
        {
            VAR_10 = FUNC_6( VAR_5->db->strings, VAR_13, VAR_12, VAR_8 );
            if (VAR_10 != VAR_2)
                return VAR_1;
        }
        else *VAR_8 = 0;
    }
    else if ( FUNC_4( VAR_5->db, &VAR_9, VAR_3 ) == 2 )
    {
        VAR_11 = FUNC_2( VAR_6, VAR_7 );
        if (VAR_11 == 0x80000000) *VAR_8 = 0x8000;
        else
        {
            *VAR_8 = 0x8000 + FUNC_2( VAR_6, VAR_7 );
            if (*VAR_8 & 0xffff0000)
            {
                FUNC_0("field %u value %d out of range\n", VAR_7, *VAR_8 - 0x8000);
                return VAR_0;
            }
        }
    }
    else
    {
        VAR_11 = FUNC_2( VAR_6, VAR_7 );
        *VAR_8 = VAR_11 ^ 0x80000000;
    }

    return VAR_2;
}
