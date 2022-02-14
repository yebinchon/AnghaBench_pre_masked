
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_sh_state {int dummy; } ;
struct ip_vs_sh_bucket {int dummy; } ;
struct ip_vs_service {struct ip_vs_sh_state* sched_data; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ip_vs_sh_state*) ;
 int FUNC_2 (struct ip_vs_sh_state*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct ip_vs_service *VAR_2)
{
 struct ip_vs_sh_state *VAR_3 = VAR_2->sched_data;


 FUNC_1(VAR_3);


 FUNC_2(VAR_3, VAR_1);
 FUNC_0(6, "SH hash table (memory=%zdbytes) released\n",
    sizeof(struct ip_vs_sh_bucket)*VAR_0);
}
