
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_cp_set_scan_params {int window; int interval; } ;
struct hci_request {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct hci_dev {int le_scan_interval; int le_scan_window; TYPE_1__ discovery; int id; int name; } ;
typedef int __u16 ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_request*) ;
 int FUNC_6 (struct hci_request*) ;
 int FUNC_7 (struct hci_request*,struct hci_dev*) ;
 int FUNC_8 (struct hci_request*,int *) ;
 int FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (struct sock*,int ,int ,int ,int *,int ) ;
 int FUNC_11 (struct sock*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct sock *VAR_5, struct hci_dev *VAR_6,
      void *VAR_7, u16 VAR_8)
{
 struct mgmt_cp_set_scan_params *VAR_9 = VAR_7;
 __u16 VAR_10, VAR_11;
 int VAR_12;

 FUNC_0("%s", VAR_6->name);

 if (!FUNC_9(VAR_6))
  return FUNC_11(VAR_5, VAR_6->id, VAR_2,
           VAR_4);

 VAR_10 = FUNC_1(VAR_9->interval);

 if (VAR_10 < 0x0004 || VAR_10 > 0x4000)
  return FUNC_11(VAR_5, VAR_6->id, VAR_2,
           VAR_3);

 VAR_11 = FUNC_1(VAR_9->window);

 if (VAR_11 < 0x0004 || VAR_11 > 0x4000)
  return FUNC_11(VAR_5, VAR_6->id, VAR_2,
           VAR_3);

 if (VAR_11 > VAR_10)
  return FUNC_11(VAR_5, VAR_6->id, VAR_2,
           VAR_3);

 FUNC_2(VAR_6);

 VAR_6->le_scan_interval = VAR_10;
 VAR_6->le_scan_window = VAR_11;

 VAR_12 = FUNC_10(VAR_5, VAR_6->id, VAR_2, 0,
    ((void*)0), 0);




 if (FUNC_3(VAR_6, VAR_1) &&
     VAR_6->discovery.state == VAR_0) {
  struct hci_request VAR_13;

  FUNC_7(&VAR_13, VAR_6);

  FUNC_6(&VAR_13);
  FUNC_5(&VAR_13);

  FUNC_8(&VAR_13, ((void*)0));
 }

 FUNC_4(VAR_6);

 return VAR_12;
}
