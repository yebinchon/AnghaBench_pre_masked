
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_cp_auth_requested {int handle; } ;
struct hci_conn {scalar_t__ pending_sec_level; scalar_t__ sec_level; int auth_type; int flags; int hdev; int handle; } ;
typedef int cp ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,struct hci_cp_auth_requested*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hci_conn *VAR_6, __u8 VAR_7, __u8 VAR_8)
{
 FUNC_0("hcon %p", VAR_6);

 if (VAR_6->pending_sec_level > VAR_7)
  VAR_7 = VAR_6->pending_sec_level;

 if (VAR_7 > VAR_6->sec_level)
  VAR_6->pending_sec_level = VAR_7;
 else if (FUNC_5(VAR_0, &VAR_6->flags))
  return 1;


 VAR_8 |= (VAR_6->auth_type & 0x01);

 VAR_6->auth_type = VAR_8;

 if (!FUNC_4(VAR_1, &VAR_6->flags)) {
  struct hci_cp_auth_requested VAR_9;

  VAR_9.handle = FUNC_1(VAR_6->handle);
  FUNC_2(VAR_6->hdev, VAR_5,
        sizeof(VAR_9), &VAR_9);




  if (FUNC_5(VAR_2, &VAR_6->flags))
   FUNC_3(VAR_4, &VAR_6->flags);
  else
   FUNC_3(VAR_3, &VAR_6->flags);
 }

 return 0;
}
