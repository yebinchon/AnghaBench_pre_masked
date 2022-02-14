
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct task_desc {unsigned long nr_events; struct sched_atom** atoms; } ;
struct sched_atom {unsigned long nr; int timestamp; } ;


 int FUNC_0 (int) ;
 struct sched_atom** FUNC_1 (struct sched_atom**,size_t) ;
 struct sched_atom* FUNC_2 (int) ;

__attribute__((used)) static struct sched_atom *
FUNC_3(struct task_desc *VAR_0, u64 VAR_1)
{
 struct sched_atom *VAR_2 = FUNC_2(sizeof(*VAR_2));
 unsigned long VAR_3 = VAR_0->nr_events;
 size_t VAR_4;

 VAR_2->timestamp = VAR_1;
 VAR_2->nr = VAR_3;

 VAR_0->nr_events++;
 VAR_4 = sizeof(struct sched_atom *) * VAR_0->nr_events;
 VAR_0->atoms = FUNC_1(VAR_0->atoms, VAR_4);
 FUNC_0(!VAR_0->atoms);

 VAR_0->atoms[VAR_3] = VAR_2;

 return VAR_2;
}
