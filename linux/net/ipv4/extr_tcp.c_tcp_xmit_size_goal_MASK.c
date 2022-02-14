
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct tcp_sock {unsigned int gso_segs; } ;
struct sock {int sk_gso_max_size; int sk_gso_max_segs; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int ,unsigned int,int ) ;
 unsigned int FUNC_2 (struct tcp_sock*,unsigned int) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static unsigned int FUNC_5(struct sock *VAR_2, u32 VAR_3,
           int VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_3(VAR_2);
 u32 VAR_6, VAR_7;

 if (!VAR_4)
  return VAR_3;


 VAR_6 = VAR_2->sk_gso_max_size - 1 - VAR_0;
 VAR_6 = FUNC_2(VAR_5, VAR_6);


 VAR_7 = VAR_5->gso_segs * VAR_3;
 if (FUNC_4(VAR_6 < VAR_7 ||
       VAR_6 >= VAR_7 + VAR_3)) {
  VAR_5->gso_segs = FUNC_1(VAR_1, VAR_6 / VAR_3,
         VAR_2->sk_gso_max_segs);
  VAR_7 = VAR_5->gso_segs * VAR_3;
 }

 return FUNC_0(VAR_7, VAR_3);
}
