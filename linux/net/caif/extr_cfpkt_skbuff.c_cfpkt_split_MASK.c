
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int priority; int * data; } ;
struct cfpkt {int dummy; } ;


 int FUNC_0 (struct cfpkt*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cfpkt* FUNC_1 (int,int) ;
 int FUNC_2 (struct cfpkt*) ;
 struct sk_buff* FUNC_3 (struct cfpkt*) ;
 int FUNC_4 (struct sk_buff*,int *,int) ;
 int * FUNC_5 (struct sk_buff*) ;
 struct cfpkt* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (int ) ;

struct cfpkt *FUNC_9(struct cfpkt *VAR_2, u16 VAR_3)
{
 struct sk_buff *VAR_4;
 struct sk_buff *VAR_5 = FUNC_3(VAR_2);
 struct cfpkt *VAR_6;
 u8 *VAR_7 = VAR_5->data + VAR_3;
 u16 VAR_8 = FUNC_5(VAR_5) - VAR_7;

 if (FUNC_8(FUNC_2(VAR_2)))
  return ((void*)0);

 if (VAR_5->data + VAR_3 > FUNC_5(VAR_5)) {
  FUNC_0(VAR_2, "trying to split beyond end of packet\n");
  return ((void*)0);
 }


 VAR_6 = FUNC_1(VAR_8 + VAR_1 + VAR_0,
      VAR_1);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_4 = FUNC_3(VAR_6);


 if (VAR_4 == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_4, VAR_7, VAR_8);


 FUNC_7(VAR_5, VAR_3);

 VAR_4->priority = VAR_5->priority;
 return FUNC_6(VAR_4);
}
