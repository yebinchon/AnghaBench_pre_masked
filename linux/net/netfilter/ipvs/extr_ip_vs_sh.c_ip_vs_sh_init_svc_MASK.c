
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_sh_state {int dummy; } ;
struct ip_vs_sh_bucket {int dummy; } ;
struct ip_vs_service {struct ip_vs_sh_state* sched_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct ip_vs_sh_state*,struct ip_vs_service*) ;
 struct ip_vs_sh_state* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct ip_vs_service *VAR_3)
{
 struct ip_vs_sh_state *VAR_4;


 VAR_4 = FUNC_2(sizeof(struct ip_vs_sh_state), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_3->sched_data = VAR_4;
 FUNC_0(6, "SH hash table (memory=%zdbytes) allocated for "
    "current service\n",
    sizeof(struct ip_vs_sh_bucket)*VAR_2);


 FUNC_1(VAR_4, VAR_3);

 return 0;
}
