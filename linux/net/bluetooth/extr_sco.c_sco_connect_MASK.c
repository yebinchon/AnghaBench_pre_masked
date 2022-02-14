
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_sndtimeo; scalar_t__ sk_state; } ;
struct sco_conn {int dummy; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {scalar_t__ state; int src; } ;
struct TYPE_2__ {scalar_t__ setting; int src; int dst; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int *,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct hci_conn*) ;
 int FUNC_2 (struct hci_conn*) ;
 int VAR_8 ;
 int FUNC_3 (int *,int *) ;
 int VAR_9 ;
 int FUNC_4 (struct hci_conn*) ;
 struct hci_conn* FUNC_5 (struct hci_dev*,int,int *,scalar_t__) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*) ;
 struct hci_dev* FUNC_9 (int *,int *,int ) ;
 scalar_t__ FUNC_10 (struct hci_dev*) ;
 int FUNC_11 (struct hci_dev*) ;
 int FUNC_12 (struct sco_conn*,struct sock*,int *) ;
 struct sco_conn* FUNC_13 (struct hci_conn*) ;
 TYPE_1__* FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_17(struct sock *VAR_10)
{
 struct sco_conn *VAR_11;
 struct hci_conn *VAR_12;
 struct hci_dev *VAR_13;
 int VAR_14, VAR_15;

 FUNC_0("%pMR -> %pMR", &FUNC_14(VAR_10)->src, &FUNC_14(VAR_10)->dst);

 VAR_13 = FUNC_9(&FUNC_14(VAR_10)->dst, &FUNC_14(VAR_10)->src, VAR_0);
 if (!VAR_13)
  return -VAR_4;

 FUNC_6(VAR_13);

 if (FUNC_10(VAR_13) && !VAR_9)
  VAR_15 = VAR_7;
 else
  VAR_15 = VAR_8;

 if (FUNC_14(VAR_10)->setting == VAR_3 &&
     (!FUNC_11(VAR_13) || !FUNC_10(VAR_13))) {
  VAR_14 = -VAR_6;
  goto done;
 }

 VAR_12 = FUNC_5(VAR_13, VAR_15, &FUNC_14(VAR_10)->dst,
          FUNC_14(VAR_10)->setting);
 if (FUNC_1(VAR_12)) {
  VAR_14 = FUNC_2(VAR_12);
  goto done;
 }

 VAR_11 = FUNC_13(VAR_12);
 if (!VAR_11) {
  FUNC_4(VAR_12);
  VAR_14 = -VAR_5;
  goto done;
 }


 FUNC_3(&FUNC_14(VAR_10)->src, &VAR_12->src);

 VAR_14 = FUNC_12(VAR_11, VAR_10, ((void*)0));
 if (VAR_14)
  goto done;

 if (VAR_12->state == VAR_2) {
  FUNC_15(VAR_10);
  VAR_10->sk_state = VAR_2;
 } else {
  VAR_10->sk_state = VAR_1;
  FUNC_16(VAR_10, VAR_10->sk_sndtimeo);
 }

done:
 FUNC_8(VAR_13);
 FUNC_7(VAR_13);
 return VAR_14;
}
