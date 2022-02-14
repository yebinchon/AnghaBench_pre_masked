
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int dummy; } ;
struct list_head {int next; } ;
struct buffer_page {struct list_head list; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct ring_buffer_per_cpu *VAR_2,
       struct buffer_page *VAR_3,
       struct buffer_page *VAR_4,
       int VAR_5, int VAR_6)
{
 struct list_head *VAR_7;
 unsigned long VAR_8 = (unsigned long)&VAR_3->list;
 unsigned long VAR_9;

 VAR_7 = &VAR_4->list;

 VAR_8 &= ~VAR_0;

 VAR_9 = FUNC_0((unsigned long *)&VAR_7->next,
        VAR_8 | VAR_5, VAR_8 | VAR_6);


 if ((VAR_9 & ~VAR_0) != VAR_8)
  return VAR_1;

 return VAR_9 & VAR_0;
}
