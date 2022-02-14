
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ULONG ;
typedef scalar_t__ UCHAR ;
struct TYPE_6__ {size_t ReportIDsLength; TYPE_1__* ReportIDs; } ;
struct TYPE_5__ {scalar_t__ ReportID; } ;
typedef TYPE_1__* PHIDP_REPORT_IDS ;
typedef TYPE_2__* PHIDP_DEVICE_DESC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;

PHIDP_REPORT_IDS
FUNC_2(
    PHIDP_DEVICE_DESC VAR_1,
    UCHAR VAR_2)
{
    ULONG VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1->ReportIDsLength; VAR_3++)
    {
        if (VAR_1->ReportIDs[VAR_3].ReportID == VAR_2)
        {



            return &VAR_1->ReportIDs[VAR_3];
        }
    }




    FUNC_1("[HIDCLASS] GetReportDescriptionByReportID ReportID %x not found\n", VAR_2);
    FUNC_0(VAR_0);
    return ((void*)0);
}
