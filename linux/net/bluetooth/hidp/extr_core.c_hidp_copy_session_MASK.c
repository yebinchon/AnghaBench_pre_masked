
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct hidp_session {int flags; TYPE_3__* hid; TYPE_2__* input; int bdaddr; } ;
struct hidp_conninfo {int flags; int name; int version; int product; int vendor; int state; int bdaddr; } ;
struct TYPE_6__ {char* name; int version; int product; int vendor; } ;
struct TYPE_4__ {int version; int product; int vendor; } ;
struct TYPE_5__ {char* name; TYPE_1__ id; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct hidp_conninfo*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct hidp_session *VAR_1, struct hidp_conninfo *VAR_2)
{
 u32 VAR_3 = 0;
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 FUNC_0(&VAR_2->bdaddr, &VAR_1->bdaddr);

 VAR_2->flags = VAR_1->flags & VAR_3;
 VAR_2->state = VAR_0;

 if (VAR_1->input) {
  VAR_2->vendor = VAR_1->input->id.vendor;
  VAR_2->product = VAR_1->input->id.product;
  VAR_2->version = VAR_1->input->id.version;
  if (VAR_1->input->name)
   FUNC_2(VAR_2->name, VAR_1->input->name, 128);
  else
   FUNC_2(VAR_2->name, "HID Boot Device", 128);
 } else if (VAR_1->hid) {
  VAR_2->vendor = VAR_1->hid->vendor;
  VAR_2->product = VAR_1->hid->product;
  VAR_2->version = VAR_1->hid->version;
  FUNC_2(VAR_2->name, VAR_1->hid->name, 128);
 }
}
