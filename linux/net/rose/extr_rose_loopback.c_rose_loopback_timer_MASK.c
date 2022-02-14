
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; int* data; } ;
struct net_device {int dummy; } ;
typedef int rose_address ;


 unsigned short VAR_0 ;
 size_t VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct net_device* FUNC_2 (int *) ;
 struct sock* FUNC_3 (unsigned int,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct net_device*,int ,unsigned int) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_12)
{
 struct sk_buff *VAR_13;
 struct net_device *VAR_14;
 rose_address *VAR_15;
 struct sock *VAR_16;
 unsigned short VAR_17;
 unsigned int VAR_18, VAR_19;
 int VAR_20;

 for (VAR_20 = 0; VAR_20 < VAR_6; VAR_20++) {
  VAR_13 = FUNC_6(&VAR_9);
  if (!VAR_13)
   return;
  if (VAR_13->len < VAR_7) {
   FUNC_0(VAR_13);
   continue;
  }
  VAR_18 = ((VAR_13->data[0] << 8) & 0xF00) + ((VAR_13->data[1] << 0) & 0x0FF);
  VAR_17 = VAR_13->data[2];
  if (VAR_17 == VAR_0 &&
      (VAR_13->len <= VAR_4 ||
       VAR_13->data[VAR_1] !=
       VAR_2)) {
   FUNC_0(VAR_13);
   continue;
  }
  VAR_15 = (rose_address *)(VAR_13->data + VAR_3);
  VAR_19 = VAR_5 + 1 - VAR_18;

  FUNC_8(VAR_13);

  VAR_16 = FUNC_3(VAR_19, VAR_11);
  if (VAR_16) {
   if (FUNC_4(VAR_16, VAR_13) == 0)
    FUNC_0(VAR_13);
   continue;
  }

  if (VAR_17 == VAR_0) {
   if ((VAR_14 = FUNC_2(VAR_15)) != ((void*)0)) {
    if (FUNC_5(VAR_13, VAR_14, VAR_11, VAR_19) == 0)
     FUNC_0(VAR_13);
   } else {
    FUNC_0(VAR_13);
   }
  } else {
   FUNC_0(VAR_13);
  }
 }
 if (!FUNC_7(&VAR_9))
  FUNC_1(&VAR_10, VAR_8 + 1);
}
