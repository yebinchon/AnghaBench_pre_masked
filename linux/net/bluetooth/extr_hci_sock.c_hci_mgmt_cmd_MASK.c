
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int dummy; } ;
struct mgmt_hdr {int len; int index; int opcode; } ;
struct hci_mgmt_handler {int (* func ) (struct sock*,struct hci_dev*,int *,size_t) ;int flags; size_t data_len; } ;
struct hci_mgmt_chan {scalar_t__ channel; size_t handler_count; int (* hdev_init ) (struct sock*,struct hci_dev*) ;struct hci_mgmt_handler* handlers; } ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (char*,size_t) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 size_t FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct sock*,size_t,size_t,size_t,void*) ;
 struct hci_dev* FUNC_3 (size_t) ;
 int FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (int ,struct sk_buff*,int ,int *) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct sk_buff*) ;
 void* FUNC_10 (size_t,int ) ;
 scalar_t__ FUNC_11 (void*,struct msghdr*,size_t) ;
 int FUNC_12 (struct sock*,size_t,size_t,int ) ;
 int FUNC_13 (struct sock*,struct hci_dev*) ;
 int FUNC_14 (struct sock*,struct hci_dev*,int *,size_t) ;

__attribute__((used)) static int FUNC_15(struct hci_mgmt_chan *VAR_20, struct sock *VAR_21,
   struct msghdr *VAR_22, size_t VAR_23)
{
 void *VAR_24;
 u8 *VAR_25;
 struct mgmt_hdr *VAR_26;
 u16 VAR_27, VAR_28, VAR_29;
 struct hci_dev *VAR_30 = ((void*)0);
 const struct hci_mgmt_handler *VAR_31;
 bool VAR_32, VAR_33;
 int VAR_34;

 FUNC_0("got %zu bytes", VAR_23);

 if (VAR_23 < sizeof(*VAR_26))
  return -VAR_1;

 VAR_24 = FUNC_10(VAR_23, VAR_3);
 if (!VAR_24)
  return -VAR_2;

 if (FUNC_11(VAR_24, VAR_22, VAR_23)) {
  VAR_34 = -VAR_0;
  goto done;
 }

 VAR_26 = VAR_24;
 VAR_27 = FUNC_1(VAR_26->opcode);
 VAR_28 = FUNC_1(VAR_26->index);
 VAR_29 = FUNC_1(VAR_26->len);

 if (VAR_29 != VAR_23 - sizeof(*VAR_26)) {
  VAR_34 = -VAR_1;
  goto done;
 }

 if (VAR_20->channel == VAR_4) {
  struct sk_buff *VAR_35;


  VAR_35 = FUNC_2(VAR_21, VAR_28, VAR_27, VAR_29,
        VAR_24 + sizeof(*VAR_26));
  if (VAR_35) {
   FUNC_6(VAR_5, VAR_35,
         VAR_12, ((void*)0));
   FUNC_9(VAR_35);
  }
 }

 if (VAR_27 >= VAR_20->handler_count ||
     VAR_20->handlers[VAR_27].func == ((void*)0)) {
  FUNC_0("Unknown op %u", VAR_27);
  VAR_34 = FUNC_12(VAR_21, VAR_28, VAR_27,
          VAR_19);
  goto done;
 }

 VAR_31 = &VAR_20->handlers[VAR_27];

 if (!FUNC_7(VAR_21, VAR_12) &&
     !(VAR_31->flags & VAR_9)) {
  VAR_34 = FUNC_12(VAR_21, VAR_28, VAR_27,
          VAR_18);
  goto done;
 }

 if (VAR_28 != VAR_15) {
  VAR_30 = FUNC_3(VAR_28);
  if (!VAR_30) {
   VAR_34 = FUNC_12(VAR_21, VAR_28, VAR_27,
           VAR_16);
   goto done;
  }

  if (FUNC_5(VAR_30, VAR_11) ||
      FUNC_5(VAR_30, VAR_6) ||
      FUNC_5(VAR_30, VAR_14)) {
   VAR_34 = FUNC_12(VAR_21, VAR_28, VAR_27,
           VAR_16);
   goto done;
  }

  if (FUNC_5(VAR_30, VAR_13) &&
      !(VAR_31->flags & VAR_8)) {
   VAR_34 = FUNC_12(VAR_21, VAR_28, VAR_27,
           VAR_16);
   goto done;
  }
 }

 VAR_33 = (VAR_31->flags & VAR_7);
 if (VAR_33 != !VAR_30) {
  VAR_34 = FUNC_12(VAR_21, VAR_28, VAR_27,
          VAR_16);
  goto done;
 }

 VAR_32 = (VAR_31->flags & VAR_10);
 if ((VAR_32 && VAR_29 < VAR_31->data_len) ||
     (!VAR_32 && VAR_29 != VAR_31->data_len)) {
  VAR_34 = FUNC_12(VAR_21, VAR_28, VAR_27,
          VAR_17);
  goto done;
 }

 if (VAR_30 && VAR_20->hdev_init)
  VAR_20->hdev_init(VAR_21, VAR_30);

 VAR_25 = VAR_24 + sizeof(*VAR_26);

 VAR_34 = VAR_31->func(VAR_21, VAR_30, VAR_25, VAR_29);
 if (VAR_34 < 0)
  goto done;

 VAR_34 = VAR_23;

done:
 if (VAR_30)
  FUNC_4(VAR_30);

 FUNC_8(VAR_24);
 return VAR_34;
}
