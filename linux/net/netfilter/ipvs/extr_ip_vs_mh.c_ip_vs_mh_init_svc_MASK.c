
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_service {struct ip_vs_mh_state* sched_data; } ;
struct ip_vs_mh_state {int rcu_head; int gcd; int rshift; int hash2; int hash1; int lookup; } ;
struct ip_vs_mh_lookup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ip_vs_service*) ;
 int FUNC_3 (struct ip_vs_mh_state*,struct ip_vs_service*) ;
 int FUNC_4 (struct ip_vs_mh_state*) ;
 int FUNC_5 (struct ip_vs_service*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int,int ) ;
 int FUNC_8 (struct ip_vs_mh_state*) ;
 struct ip_vs_mh_state* FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct ip_vs_service *VAR_3)
{
 int VAR_4;
 struct ip_vs_mh_state *VAR_5;


 VAR_5 = FUNC_9(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->lookup = FUNC_7(VAR_2, sizeof(struct ip_vs_mh_lookup),
       VAR_1);
 if (!VAR_5->lookup) {
  FUNC_8(VAR_5);
  return -VAR_0;
 }

 FUNC_1(&VAR_5->hash1, &VAR_5->hash2);
 VAR_5->gcd = FUNC_2(VAR_3);
 VAR_5->rshift = FUNC_5(VAR_3, VAR_5->gcd);

 FUNC_0(6,
    "MH lookup table (memory=%zdbytes) allocated for current service\n",
    sizeof(struct ip_vs_mh_lookup) * VAR_2);


 VAR_4 = FUNC_3(VAR_5, VAR_3);
 if (VAR_4 < 0) {
  FUNC_4(VAR_5);
  FUNC_6(&VAR_5->rcu_head);
  return VAR_4;
 }


 VAR_3->sched_data = VAR_5;
 return 0;
}
