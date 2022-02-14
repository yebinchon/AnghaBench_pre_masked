
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ num_streams; int * streams; } ;
struct TYPE_4__ {int num_cols; TYPE_2__* db; } ;
typedef TYPE_1__ MSISTREAMSVIEW ;
typedef int MSIRECORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct tagMSIVIEW*,scalar_t__,int *,int) ;
 int FUNC_1 (char*,struct tagMSIVIEW*,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static UINT FUNC_4(struct tagMSIVIEW *VAR_2, MSIRECORD *VAR_3, UINT VAR_4, BOOL VAR_5)
{
    MSISTREAMSVIEW *VAR_6 = (MSISTREAMSVIEW *)VAR_2;
    UINT VAR_7, VAR_8, VAR_9 = VAR_6->db->num_streams + 1;

    FUNC_1("(%p, %p, %d, %d)\n", VAR_2, VAR_3, VAR_4, VAR_5);

    VAR_8 = FUNC_2( VAR_6, VAR_3, ((void*)0) );
    if (VAR_8 == VAR_1)
        return VAR_0;

    if (!FUNC_3( VAR_6->db, VAR_9 ))
        return VAR_0;

    if (VAR_4 == -1)
        VAR_4 = VAR_9 - 1;


    for (VAR_7 = VAR_9 - 1; VAR_7 > VAR_4; VAR_7--)
    {
        VAR_6->db->streams[VAR_7] = VAR_6->db->streams[VAR_7 - 1];
    }

    VAR_8 = FUNC_0( VAR_2, VAR_4, VAR_3, (1 << VAR_6->num_cols) - 1 );
    if (VAR_8 == VAR_1)
        VAR_6->db->num_streams = VAR_9;

    return VAR_8;
}
