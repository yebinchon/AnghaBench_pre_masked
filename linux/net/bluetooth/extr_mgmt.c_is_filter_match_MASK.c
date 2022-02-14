
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ rssi; scalar_t__ uuid_count; int uuids; } ;
struct hci_dev {TYPE_1__ discovery; int quirks; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (struct hci_dev*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct hci_dev *VAR_2, s8 VAR_3, u8 *VAR_4,
       u16 VAR_5, u8 *VAR_6, u8 VAR_7)
{
 if (VAR_2->discovery.rssi != VAR_1 &&
     (VAR_3 == VAR_1 ||
     (VAR_3 < VAR_2->discovery.rssi &&
      !FUNC_2(VAR_0, &VAR_2->quirks))))
  return 0;

 if (VAR_2->discovery.uuid_count != 0) {



  if (!FUNC_0(VAR_4, VAR_5, VAR_2->discovery.uuid_count,
       VAR_2->discovery.uuids) &&
      !FUNC_0(VAR_6, VAR_7,
       VAR_2->discovery.uuid_count,
       VAR_2->discovery.uuids))
   return 0;
 }




 if (FUNC_2(VAR_0, &VAR_2->quirks)) {
  FUNC_1(VAR_2);


  if (VAR_2->discovery.rssi != VAR_1 &&
      VAR_3 < VAR_2->discovery.rssi)
   return 0;
 }

 return 1;
}
