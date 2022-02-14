
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maps {int lock; void* names; void* entries; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct maps *VAR_1)
{
 VAR_1->entries = VAR_0;
 VAR_1->names = VAR_0;
 FUNC_0(&VAR_1->lock);
}
