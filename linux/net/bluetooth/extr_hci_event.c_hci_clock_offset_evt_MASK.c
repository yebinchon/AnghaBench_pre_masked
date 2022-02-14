
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int clock_offset; } ;
struct inquiry_entry {int timestamp; TYPE_1__ data; } ;
struct hci_ev_clock_offset {int clock_offset; int status; int handle; } ;
struct hci_dev {int name; } ;
struct hci_conn {int dst; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 struct inquiry_entry* FUNC_5 (struct hci_dev*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_ev_clock_offset *VAR_3 = (void *) VAR_2->data;
 struct hci_conn *VAR_4;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_3->status);

 FUNC_3(VAR_1);

 VAR_4 = FUNC_2(VAR_1, FUNC_1(VAR_3->handle));
 if (VAR_4 && !VAR_3->status) {
  struct inquiry_entry *VAR_5;

  VAR_5 = FUNC_5(VAR_1, &VAR_4->dst);
  if (VAR_5) {
   VAR_5->data.clock_offset = VAR_3->clock_offset;
   VAR_5->timestamp = VAR_0;
  }
 }

 FUNC_4(VAR_1);
}
