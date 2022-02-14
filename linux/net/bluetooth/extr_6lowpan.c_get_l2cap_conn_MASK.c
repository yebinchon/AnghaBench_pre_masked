
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct l2cap_conn {int dummy; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {int dst_type; int dst; scalar_t__ l2cap_data; } ;
struct TYPE_5__ {int * b; } ;
typedef TYPE_1__ bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct l2cap_conn*,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct hci_conn* FUNC_1 (struct hci_dev*,TYPE_1__*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 struct hci_dev* FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (char*,char*,int *,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_6(char *VAR_4, bdaddr_t *VAR_5, u8 *VAR_6,
     struct l2cap_conn **VAR_7)
{
 struct hci_conn *VAR_8;
 struct hci_dev *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5(VAR_4, "%hhx:%hhx:%hhx:%hhx:%hhx:%hhx %hhu",
     &VAR_5->b[5], &VAR_5->b[4], &VAR_5->b[3],
     &VAR_5->b[2], &VAR_5->b[1], &VAR_5->b[0],
     VAR_6);

 if (VAR_10 < 7)
  return -VAR_2;


 VAR_9 = FUNC_4(VAR_5, VAR_0, VAR_1);
 if (!VAR_9)
  return -VAR_3;

 FUNC_2(VAR_9);
 VAR_8 = FUNC_1(VAR_9, VAR_5, *VAR_6);
 FUNC_3(VAR_9);

 if (!VAR_8)
  return -VAR_3;

 *VAR_7 = (struct l2cap_conn *)VAR_8->l2cap_data;

 FUNC_0("conn %p dst %pMR type %d", *VAR_7, &VAR_8->dst, VAR_8->dst_type);

 return 0;
}
