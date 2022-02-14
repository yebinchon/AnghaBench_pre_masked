
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_type; } ;
struct ip6_ra_chain {int sel; struct ip6_ra_chain* next; struct sock* sk; } ;
struct TYPE_2__ {scalar_t__ inet_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 struct ip6_ra_chain* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ip6_ra_chain*) ;
 struct ip6_ra_chain* FUNC_2 (int,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct sock *VAR_9, int VAR_10)
{
 struct ip6_ra_chain *VAR_11, *VAR_12, **VAR_13;


 if (VAR_9->sk_type != VAR_6 || FUNC_0(VAR_9)->inet_num != VAR_5)
  return -VAR_3;

 VAR_12 = (VAR_10 >= 0) ? FUNC_2(sizeof(*VAR_12), VAR_4) : ((void*)0);
 if (VAR_10 >= 0 && !VAR_12)
  return -VAR_2;

 FUNC_5(&VAR_8);
 for (VAR_13 = &VAR_7; (VAR_11 = *VAR_13) != ((void*)0); VAR_13 = &VAR_11->next) {
  if (VAR_11->sk == VAR_9) {
   if (VAR_10 >= 0) {
    FUNC_6(&VAR_8);
    FUNC_1(VAR_12);
    return -VAR_0;
   }

   *VAR_13 = VAR_11->next;
   FUNC_6(&VAR_8);

   FUNC_4(VAR_9);
   FUNC_1(VAR_11);
   return 0;
  }
 }
 if (!VAR_12) {
  FUNC_6(&VAR_8);
  return -VAR_1;
 }
 VAR_12->sk = VAR_9;
 VAR_12->sel = VAR_10;
 VAR_12->next = VAR_11;
 *VAR_13 = VAR_12;
 FUNC_3(VAR_9);
 FUNC_6(&VAR_8);
 return 0;
}
