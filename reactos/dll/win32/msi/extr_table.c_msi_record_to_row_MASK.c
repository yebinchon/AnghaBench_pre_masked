
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_7__ {int num_cols; TYPE_2__* columns; TYPE_1__* db; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_5__ {int strings; } ;
typedef TYPE_3__ MSITABLEVIEW ;
typedef int MSIRECORD ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_1 (int *,size_t) ;
 size_t* FUNC_2 (int) ;
 int FUNC_3 (size_t*) ;
 int * FUNC_4 (int *,size_t,int*) ;
 size_t FUNC_5 (int ,int const*,int,size_t*) ;

__attribute__((used)) static UINT* FUNC_6( const MSITABLEVIEW *VAR_4, MSIRECORD *VAR_5 )
{
    UINT VAR_6, VAR_7, *VAR_8;

    VAR_8 = FUNC_2( VAR_4->num_cols *sizeof (UINT) );
    for( VAR_6=0; VAR_6<VAR_4->num_cols; VAR_6++ )
    {
        VAR_8[VAR_6] = 0;

        if ( ~VAR_4->columns[VAR_6].type & VAR_1 )
            continue;


        if ( ( VAR_4->columns[VAR_6].type & VAR_2 ) &&
             ! FUNC_0(VAR_4->columns[VAR_6].type) )
        {
            int VAR_9;
            const WCHAR *VAR_10 = FUNC_4( VAR_5, VAR_6+1, &VAR_9 );
            if (VAR_10)
            {
                VAR_7 = FUNC_5( VAR_4->db->strings, VAR_10, VAR_9, &VAR_8[VAR_6] );



                if (VAR_7 != VAR_0)
                {
                    FUNC_3( VAR_8 );
                    return ((void*)0);
                }
            }
            else VAR_8[VAR_6] = 0;
        }
        else
        {
            VAR_8[VAR_6] = FUNC_1( VAR_5, VAR_6+1 );

            if (VAR_8[VAR_6] == VAR_3)
                VAR_8[VAR_6] = 0;
            else if ((VAR_4->columns[VAR_6].type&0xff) == 2)
                VAR_8[VAR_6] += 0x8000;
            else
                VAR_8[VAR_6] += 0x80000000;
        }
    }
    return VAR_8;
}
