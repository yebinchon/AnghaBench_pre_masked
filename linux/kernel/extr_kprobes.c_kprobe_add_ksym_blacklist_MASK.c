
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe_blacklist_entry {unsigned long start_addr; unsigned long end_addr; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long,unsigned long*,unsigned long*) ;
 int FUNC_2 (unsigned long) ;
 struct kprobe_blacklist_entry* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(unsigned long VAR_4)
{
 struct kprobe_blacklist_entry *VAR_5;
 unsigned long VAR_6 = 0, VAR_7 = 0;

 if (!FUNC_2(VAR_4) ||
     !FUNC_1(VAR_4, &VAR_7, &VAR_6))
  return -VAR_0;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;
 VAR_5->start_addr = VAR_4;
 VAR_5->end_addr = VAR_4 + VAR_7;
 FUNC_0(&VAR_5->list);
 FUNC_4(&VAR_5->list, &VAR_3);

 return (int)VAR_7;
}
