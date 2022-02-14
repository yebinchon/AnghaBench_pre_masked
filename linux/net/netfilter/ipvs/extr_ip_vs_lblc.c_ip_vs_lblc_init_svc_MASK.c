
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_service {struct ip_vs_lblc_table* sched_data; } ;
struct ip_vs_lblc_table {int max_size; int counter; int dead; int periodic_timer; int entries; struct ip_vs_service* svc; scalar_t__ rover; int * bucket; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct ip_vs_lblc_table* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ip_vs_service *VAR_6)
{
 int VAR_7;
 struct ip_vs_lblc_table *VAR_8;




 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 VAR_6->sched_data = VAR_8;
 FUNC_1(6, "LBLC hash table (memory=%zdbytes) allocated for "
    "current service\n", sizeof(*VAR_8));




 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  FUNC_0(&VAR_8->bucket[VAR_7]);
 }
 VAR_8->max_size = VAR_3*16;
 VAR_8->rover = 0;
 VAR_8->counter = 1;
 VAR_8->dead = 0;
 VAR_8->svc = VAR_6;
 FUNC_2(&VAR_8->entries, 0);




 FUNC_5(&VAR_8->periodic_timer, VAR_4, 0);
 FUNC_4(&VAR_8->periodic_timer, VAR_5 + VAR_0);

 return 0;
}
