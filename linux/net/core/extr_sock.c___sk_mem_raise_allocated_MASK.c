
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u64 ;
struct sock {scalar_t__ sk_type; int sk_wmem_queued; scalar_t__ sk_forward_alloc; scalar_t__ sk_sndbuf; scalar_t__ sk_memcg; int sk_rmem_alloc; int sk_wmem_alloc; struct proto* sk_prot; } ;
struct proto {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*,struct proto*) ;
 int FUNC_6 (struct sock*,struct proto*) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 long FUNC_9 (scalar_t__) ;
 long FUNC_10 (struct sock*,int) ;
 int FUNC_11 (struct sock*,int) ;
 long FUNC_12 (struct sock*,int) ;
 long FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*,struct proto*,long,int) ;

int FUNC_17(struct sock *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct proto *VAR_8 = VAR_4->sk_prot;
 long VAR_9 = FUNC_10(VAR_4, VAR_6);
 bool VAR_10 = 1;

 if (VAR_3 && VAR_4->sk_memcg &&
     !(VAR_10 = FUNC_1(VAR_4->sk_memcg, VAR_6)))
  goto suppress_allocation;


 if (VAR_9 <= FUNC_12(VAR_4, 0)) {
  FUNC_8(VAR_4);
  return 1;
 }


 if (VAR_9 > FUNC_12(VAR_4, 1))
  FUNC_4(VAR_4);


 if (VAR_9 > FUNC_12(VAR_4, 2))
  goto suppress_allocation;


 if (VAR_7 == VAR_0) {
  if (FUNC_0(&VAR_4->sk_rmem_alloc) < FUNC_5(VAR_4, VAR_8))
   return 1;

 } else {
  int VAR_11 = FUNC_6(VAR_4, VAR_8);

  if (VAR_4->sk_type == VAR_2) {
   if (VAR_4->sk_wmem_queued < VAR_11)
    return 1;
  } else if (FUNC_3(&VAR_4->sk_wmem_alloc) < VAR_11) {
    return 1;
  }
 }

 if (FUNC_7(VAR_4)) {
  u64 VAR_12;

  if (!FUNC_15(VAR_4))
   return 1;
  VAR_12 = FUNC_13(VAR_4);
  if (FUNC_12(VAR_4, 2) > VAR_12 *
      FUNC_9(VAR_4->sk_wmem_queued +
     FUNC_0(&VAR_4->sk_rmem_alloc) +
     VAR_4->sk_forward_alloc))
   return 1;
 }

suppress_allocation:

 if (VAR_7 == VAR_1 && VAR_4->sk_type == VAR_2) {
  FUNC_14(VAR_4);




  if (VAR_4->sk_wmem_queued + VAR_5 >= VAR_4->sk_sndbuf)
   return 1;
 }

 if (VAR_7 == VAR_1 || (VAR_7 == VAR_0 && VAR_10))
  FUNC_16(VAR_4, VAR_8, VAR_9, VAR_7);

 FUNC_11(VAR_4, VAR_6);

 if (VAR_3 && VAR_4->sk_memcg)
  FUNC_2(VAR_4->sk_memcg, VAR_6);

 return 0;
}
