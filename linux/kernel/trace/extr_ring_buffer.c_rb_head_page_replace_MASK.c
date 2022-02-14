
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* prev; } ;
struct buffer_page {TYPE_2__ list; } ;
struct TYPE_3__ {int next; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct buffer_page *VAR_2,
    struct buffer_page *VAR_3)
{
 unsigned long *VAR_4 = (unsigned long *)&VAR_2->list.prev->next;
 unsigned long VAR_5;
 unsigned long VAR_6;

 VAR_5 = *VAR_4 & ~VAR_0;
 VAR_5 |= VAR_1;

 VAR_6 = FUNC_0(VAR_4, VAR_5, (unsigned long)&VAR_3->list);

 return VAR_6 == VAR_5;
}
