
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_walk {int private; int vma; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long,int ,int ) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_0, unsigned long VAR_1,
       struct mm_walk *VAR_2)
{
 VAR_2->private += FUNC_0(VAR_0, VAR_1,
        VAR_2->vma, VAR_2->private);
 return 0;
}
