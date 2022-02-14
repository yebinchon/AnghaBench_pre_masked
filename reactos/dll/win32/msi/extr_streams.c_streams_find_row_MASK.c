
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {int view; TYPE_1__* db; } ;
struct TYPE_4__ {scalar_t__ num_streams; int strings; } ;
typedef TYPE_2__ MSISTREAMSVIEW ;
typedef int MSIRECORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int const*,int,scalar_t__*) ;

__attribute__((used)) static UINT FUNC_3( MSISTREAMSVIEW *VAR_2, MSIRECORD *VAR_3, UINT *VAR_4 )
{
    const WCHAR *VAR_5;
    UINT VAR_6, VAR_7, VAR_8, VAR_9;

    VAR_5 = FUNC_0( VAR_3, 1 );
    VAR_6 = FUNC_2( VAR_2->db->strings, VAR_5, -1, &VAR_8 );
    if (VAR_6 != VAR_1)
        return VAR_6;

    for (VAR_7 = 0; VAR_7 < VAR_2->db->num_streams; VAR_7++)
    {
        FUNC_1( &VAR_2->view, VAR_7, 1, &VAR_9 );

        if (VAR_9 == VAR_8)
        {
            if (VAR_4) *VAR_4 = VAR_7;
            return VAR_1;
        }
    }

    return VAR_0;
}
