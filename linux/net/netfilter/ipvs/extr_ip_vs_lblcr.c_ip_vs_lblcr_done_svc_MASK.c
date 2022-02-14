
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_service {struct ip_vs_lblcr_table* sched_data; } ;
struct ip_vs_lblcr_table {int periodic_timer; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ip_vs_service*) ;
 int FUNC_3 (struct ip_vs_lblcr_table*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct ip_vs_service *VAR_1)
{
 struct ip_vs_lblcr_table *VAR_2 = VAR_1->sched_data;


 FUNC_1(&VAR_2->periodic_timer);


 FUNC_2(VAR_1);


 FUNC_3(VAR_2, VAR_0);
 FUNC_0(6, "LBLCR hash table (memory=%zdbytes) released\n",
    sizeof(*VAR_2));
}
