
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int type; unsigned long scan_duration; int scan_start; scalar_t__ result_filtering; } ;
struct hci_dev {int le_scan_disable; int req_workqueue; TYPE_1__ discovery; int quirks; int name; int discov_interleaved_timeout; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*,int ,int,int ,scalar_t__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct hci_dev *VAR_12, u8 *VAR_13)
{
 unsigned long VAR_14;

 FUNC_0("%s type %u", VAR_12->name, VAR_12->discovery.type);

 switch (VAR_12->discovery.type) {
 case 130:
  if (!FUNC_1(VAR_12, VAR_5))
   FUNC_2(VAR_12, VAR_9,
         VAR_0, VAR_3,
         VAR_13);
  return;
 case 129:
  if (FUNC_6(VAR_6,
        &VAR_12->quirks)) {
   VAR_14 = FUNC_4(VAR_2);




   FUNC_2(VAR_12, VAR_10,
         VAR_1 * 2, VAR_3,
         VAR_13);
   break;
  }

  VAR_14 = FUNC_4(VAR_12->discov_interleaved_timeout);
  FUNC_2(VAR_12, VAR_8, VAR_1,
        VAR_3, VAR_13);
  break;
 case 128:
  VAR_14 = FUNC_4(VAR_2);
  FUNC_2(VAR_12, VAR_8, VAR_1,
        VAR_3, VAR_13);
  break;
 default:
  *VAR_13 = VAR_4;
  return;
 }

 if (*VAR_13)
  return;

 FUNC_0("%s timeout %u ms", VAR_12->name, FUNC_3(VAR_14));






 if (FUNC_6(VAR_7, &VAR_12->quirks) &&
       VAR_12->discovery.result_filtering) {
  VAR_12->discovery.scan_start = VAR_11;
  VAR_12->discovery.scan_duration = VAR_14;
 }

 FUNC_5(VAR_12->req_workqueue, &VAR_12->le_scan_disable,
      VAR_14);
}
