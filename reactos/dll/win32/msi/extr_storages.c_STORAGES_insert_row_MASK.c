
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_3__ {int num_rows; } ;
typedef TYPE_1__ MSISTORAGESVIEW ;
typedef int MSIRECORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (struct tagMSIVIEW*,int,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static UINT FUNC_2(struct tagMSIVIEW *VAR_1, MSIRECORD *VAR_2, UINT VAR_3, BOOL VAR_4)
{
    MSISTORAGESVIEW *VAR_5 = (MSISTORAGESVIEW *)VAR_1;

    if (!FUNC_1(VAR_5, ++VAR_5->num_rows))
        return VAR_0;

    if (VAR_3 == -1)
        VAR_3 = VAR_5->num_rows - 1;



    return FUNC_0(VAR_1, VAR_3, VAR_2, 0);
}
