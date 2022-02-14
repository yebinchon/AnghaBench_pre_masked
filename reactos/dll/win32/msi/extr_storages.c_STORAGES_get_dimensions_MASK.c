
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_2__ {int num_rows; } ;
typedef TYPE_1__ MSISTORAGESVIEW ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct tagMSIVIEW*,int *,int *) ;

__attribute__((used)) static UINT FUNC_1(struct tagMSIVIEW *VAR_2, UINT *VAR_3, UINT *VAR_4)
{
    MSISTORAGESVIEW *VAR_5 = (MSISTORAGESVIEW *)VAR_2;

    FUNC_0("(%p, %p, %p)\n", VAR_2, VAR_3, VAR_4);

    if (VAR_4) *VAR_4 = VAR_1;
    if (VAR_3) *VAR_3 = VAR_5->num_rows;

    return VAR_0;
}
