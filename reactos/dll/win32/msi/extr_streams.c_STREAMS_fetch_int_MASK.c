
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_6__ {TYPE_2__* db; } ;
struct TYPE_5__ {int num_streams; TYPE_1__* streams; } ;
struct TYPE_4__ {int str_index; } ;
typedef TYPE_3__ MSISTREAMSVIEW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct tagMSIVIEW*,int,int,int*) ;

__attribute__((used)) static UINT FUNC_1(struct tagMSIVIEW *VAR_3, UINT VAR_4, UINT VAR_5, UINT *VAR_6)
{
    MSISTREAMSVIEW *VAR_7 = (MSISTREAMSVIEW *)VAR_3;

    FUNC_0("(%p, %d, %d, %p)\n", VAR_3, VAR_4, VAR_5, VAR_6);

    if (VAR_5 != 1)
        return VAR_0;

    if (VAR_4 >= VAR_7->db->num_streams)
        return VAR_1;

    *VAR_6 = VAR_7->db->streams[VAR_4].str_index;

    return VAR_2;
}
