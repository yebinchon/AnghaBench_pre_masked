
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int delivered_ce; int delivered; int snd_una; } ;
struct sock {int dummy; } ;
struct dctcp {int old_delivered_ce; int dctcp_alpha; int old_delivered; int next_seq; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tcp_sock const*,struct dctcp*) ;
 int VAR_1 ;
 struct dctcp* FUNC_3 (struct sock*) ;
 int FUNC_4 (unsigned int,int) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int,int) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_2, u32 VAR_3)
{
 const struct tcp_sock *VAR_4 = FUNC_7(VAR_2);
 struct dctcp *VAR_5 = FUNC_3(VAR_2);


 if (!FUNC_1(VAR_4->snd_una, VAR_5->next_seq)) {
  u32 VAR_6 = VAR_4->delivered_ce - VAR_5->old_delivered_ce;
  u32 VAR_7 = VAR_5->dctcp_alpha;



  VAR_7 -= FUNC_6(VAR_7, VAR_7 >> VAR_1);
  if (VAR_6) {
   u32 VAR_8 = VAR_4->delivered - VAR_5->old_delivered;




   VAR_6 <<= (10 - VAR_1);
   VAR_6 /= FUNC_4(1U, VAR_8);

   VAR_7 = FUNC_5(VAR_7 + VAR_6, VAR_0);
  }




  FUNC_0(VAR_5->dctcp_alpha, VAR_7);
  FUNC_2(VAR_4, VAR_5);
 }
}
