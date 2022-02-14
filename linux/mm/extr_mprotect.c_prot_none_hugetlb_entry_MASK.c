
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_walk {scalar_t__ private; } ;
typedef int pte_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(pte_t *VAR_1, unsigned long VAR_2,
       unsigned long VAR_3, unsigned long VAR_4,
       struct mm_walk *VAR_5)
{
 return FUNC_0(FUNC_1(*VAR_1), *(pgprot_t *)(VAR_5->private)) ?
  0 : -VAR_0;
}
