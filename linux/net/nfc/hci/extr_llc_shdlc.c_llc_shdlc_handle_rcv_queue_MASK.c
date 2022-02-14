
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int* data; } ;
struct TYPE_2__ {scalar_t__ qlen; } ;
struct llc_shdlc {void* state; TYPE_1__ rcv_q; } ;
typedef enum uframe_modifier { ____Placeholder_uframe_modifier } uframe_modifier ;
typedef enum sframe_type { ____Placeholder_sframe_type } sframe_type ;


 void* VAR_0 ;


 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct llc_shdlc*,struct sk_buff*,int,int) ;
 int FUNC_2 (struct llc_shdlc*,int,int) ;
 int FUNC_3 (struct llc_shdlc*,struct sk_buff*,int) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (char*,int) ;
 struct sk_buff* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_8(struct llc_shdlc *VAR_7)
{
 struct sk_buff *VAR_8;
 u8 VAR_9;
 int VAR_10;
 int VAR_11;
 enum sframe_type VAR_12;
 enum uframe_modifier VAR_13;

 if (VAR_7->rcv_q.qlen)
  FUNC_4("rcvQlen=%d\n", VAR_7->rcv_q.qlen);

 while ((VAR_8 = FUNC_6(&VAR_7->rcv_q)) != ((void*)0)) {
  VAR_9 = VAR_8->data[0];
  FUNC_7(VAR_8, 1);
  switch (VAR_9 & VAR_1) {
  case 131:
  case 130:
   if (VAR_7->state == VAR_6)
    VAR_7->state = VAR_0;

   VAR_11 = (VAR_9 & VAR_4) >> 3;
   VAR_10 = VAR_9 & VAR_3;
   FUNC_1(VAR_7, VAR_8, VAR_11, VAR_10);
   break;
  case 129:
   if (VAR_7->state == VAR_6)
    VAR_7->state = VAR_0;

   VAR_12 = (VAR_9 & VAR_5) >> 3;
   VAR_10 = VAR_9 & VAR_3;
   FUNC_2(VAR_7, VAR_12, VAR_10);
   FUNC_0(VAR_8);
   break;
  case 128:
   VAR_13 = VAR_9 & VAR_2;
   FUNC_3(VAR_7, VAR_8, VAR_13);
   break;
  default:
   FUNC_5("UNKNOWN Control=%d\n", VAR_9);
   FUNC_0(VAR_8);
   break;
  }
 }
}
