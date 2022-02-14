
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ num_cols; TYPE_2__* db; } ;
struct TYPE_5__ {scalar_t__ num_streams; TYPE_1__* streams; } ;
struct TYPE_4__ {scalar_t__ str_index; } ;
typedef TYPE_3__ MSISTREAMSVIEW ;
typedef int MSIITERHANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,struct tagMSIVIEW*,scalar_t__,scalar_t__,scalar_t__*,int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static UINT FUNC_3(struct tagMSIVIEW *VAR_3, UINT VAR_4,
                                       UINT VAR_5, UINT *VAR_6, MSIITERHANDLE *VAR_7)
{
    MSISTREAMSVIEW *VAR_8 = (MSISTREAMSVIEW *)VAR_3;
    UINT VAR_9 = FUNC_0(*VAR_7);

    FUNC_1("(%p, %d, %d, %p, %p)\n", VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

    if (!VAR_4 || VAR_4 > VAR_8->num_cols)
        return VAR_0;

    while (VAR_9 < VAR_8->db->num_streams)
    {
        if (VAR_8->db->streams[VAR_9].str_index == VAR_5)
        {
            *VAR_6 = VAR_9;
            break;
        }
        VAR_9++;
    }

    *VAR_7 = FUNC_2(++VAR_9);

    if (VAR_9 > VAR_8->db->num_streams)
        return VAR_1;

    return VAR_2;
}
