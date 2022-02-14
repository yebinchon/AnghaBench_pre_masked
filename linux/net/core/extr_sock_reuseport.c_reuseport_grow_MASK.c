
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct sock_reuseport {unsigned int max_socks; int num_socks; TYPE_1__** socks; int synq_overflow_ts; int bind_inany; int reuseport_id; int prog; } ;
struct sock {int dummy; } ;
struct TYPE_3__ {int sk_reuseport_cb; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 struct sock_reuseport* FUNC_1 (size_t) ;
 int FUNC_2 (struct sock_reuseport*,int ) ;
 int FUNC_3 (TYPE_1__**,TYPE_1__**,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,struct sock_reuseport*) ;

__attribute__((used)) static struct sock_reuseport *FUNC_5(struct sock_reuseport *VAR_2)
{
 struct sock_reuseport *VAR_3;
 u32 VAR_4, VAR_5;

 VAR_4 = VAR_2->max_socks * 2U;
 if (VAR_4 > VAR_0)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_4);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->max_socks = VAR_4;
 VAR_3->num_socks = VAR_2->num_socks;
 VAR_3->prog = VAR_2->prog;
 VAR_3->reuseport_id = VAR_2->reuseport_id;
 VAR_3->bind_inany = VAR_2->bind_inany;

 FUNC_3(VAR_3->socks, VAR_2->socks,
        VAR_2->num_socks * sizeof(struct sock *));
 VAR_3->synq_overflow_ts = FUNC_0(VAR_2->synq_overflow_ts);

 for (VAR_5 = 0; VAR_5 < VAR_2->num_socks; ++VAR_5)
  FUNC_4(VAR_2->socks[VAR_5]->sk_reuseport_cb,
       VAR_3);





 FUNC_2(VAR_2, VAR_1);
 return VAR_3;
}
