
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_service {int num_dests; int port; int addr; int af; } ;
struct ip_vs_mh_state {int * dest_setup; } ;
struct ip_vs_mh_dest_setup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,char*,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct ip_vs_mh_state*,struct ip_vs_service*) ;
 int FUNC_3 (struct ip_vs_mh_state*,struct ip_vs_service*) ;
 int * FUNC_4 (int,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ip_vs_mh_state *VAR_4,
        struct ip_vs_service *VAR_5)
{
 int VAR_6;

 if (VAR_5->num_dests > VAR_3)
  return -VAR_0;

 if (VAR_5->num_dests >= 1) {
  VAR_4->dest_setup = FUNC_4(VAR_5->num_dests,
     sizeof(struct ip_vs_mh_dest_setup),
     VAR_2);
  if (!VAR_4->dest_setup)
   return -VAR_1;
 }

 FUNC_2(VAR_4, VAR_5);

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6 < 0)
  goto out;

 FUNC_1(6, "MH: reassign lookup table of %s:%u\n",
        FUNC_0(VAR_5->af, &VAR_5->addr),
        FUNC_6(VAR_5->port));

out:
 if (VAR_5->num_dests >= 1) {
  FUNC_5(VAR_4->dest_setup);
  VAR_4->dest_setup = ((void*)0);
 }
 return VAR_6;
}
