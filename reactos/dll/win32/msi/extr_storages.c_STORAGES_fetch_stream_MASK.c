
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_2__ {scalar_t__ num_rows; } ;
typedef TYPE_1__ MSISTORAGESVIEW ;
typedef int IStream ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct tagMSIVIEW*,scalar_t__,scalar_t__,int **) ;

__attribute__((used)) static UINT FUNC_1(struct tagMSIVIEW *VAR_2, UINT VAR_3, UINT VAR_4, IStream **VAR_5)
{
    MSISTORAGESVIEW *VAR_6 = (MSISTORAGESVIEW *)VAR_2;

    FUNC_0("(%p, %d, %d, %p)\n", VAR_2, VAR_3, VAR_4, VAR_5);

    if (VAR_3 >= VAR_6->num_rows)
        return VAR_0;

    return VAR_1;
}
