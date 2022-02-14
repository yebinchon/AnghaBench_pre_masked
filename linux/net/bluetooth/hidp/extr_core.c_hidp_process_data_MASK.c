
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__* data; int len; } ;
struct hidp_session {unsigned char waiting_report_type; scalar_t__ waiting_report_number; int report_queue; int flags; struct sk_buff* report_return; int hid; int input; } ;


 int FUNC_0 (char*,struct hidp_session*,struct sk_buff*,int ,unsigned char) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hidp_session*,struct sk_buff*) ;
 int FUNC_3 (struct hidp_session*,int ,scalar_t__*,int ,int ) ;
 int FUNC_4 (struct hidp_session*,int,int *,int ) ;
 int FUNC_5 (struct hidp_session*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct hidp_session *VAR_4, struct sk_buff *VAR_5,
    unsigned char VAR_6)
{
 int VAR_7 = 1;
 FUNC_0("session %p skb %p len %d param 0x%02x", VAR_4, VAR_5, VAR_5->len, VAR_6);

 switch (VAR_6) {
 case 130:
  FUNC_5(VAR_4);

  if (VAR_4->input)
   FUNC_2(VAR_4, VAR_5);

  if (VAR_4->hid)
   FUNC_3(VAR_4, VAR_3,
         VAR_5->data, VAR_5->len, 0);
  break;

 case 129:
 case 128:
 case 131:
  break;

 default:
  FUNC_4(VAR_4,
   VAR_1 | VAR_0, ((void*)0), 0);
 }

 if (FUNC_6(VAR_2, &VAR_4->flags) &&
    VAR_6 == VAR_4->waiting_report_type) {
  if (VAR_4->waiting_report_number < 0 ||
      VAR_4->waiting_report_number == VAR_5->data[0]) {

   VAR_4->report_return = VAR_5;
   VAR_7 = 0;
   FUNC_1(VAR_2, &VAR_4->flags);
   FUNC_7(&VAR_4->report_queue);
  }
 }

 return VAR_7;
}
