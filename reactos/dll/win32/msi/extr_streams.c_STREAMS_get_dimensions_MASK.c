
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_4__ {TYPE_1__* db; int num_cols; } ;
struct TYPE_3__ {int num_streams; } ;
typedef TYPE_2__ MSISTREAMSVIEW ;


 int VAR_0 ;
 int FUNC_0 (char*,struct tagMSIVIEW*,int *,int *) ;

__attribute__((used)) static UINT FUNC_1(struct tagMSIVIEW *VAR_1, UINT *VAR_2, UINT *VAR_3)
{
    MSISTREAMSVIEW *VAR_4 = (MSISTREAMSVIEW *)VAR_1;

    FUNC_0("(%p, %p, %p)\n", VAR_1, VAR_2, VAR_3);

    if (VAR_3) *VAR_3 = VAR_4->num_cols;
    if (VAR_2) *VAR_2 = VAR_4->db->num_streams;

    return VAR_0;
}
