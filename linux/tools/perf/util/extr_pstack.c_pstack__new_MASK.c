
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstack {unsigned short max_nr_entries; } ;


 struct pstack* FUNC_0 (int) ;

struct pstack *FUNC_1(unsigned short VAR_0)
{
 struct pstack *VAR_1 = FUNC_0((sizeof(*VAR_1) +
           VAR_0 * sizeof(void *)));
 if (VAR_1 != ((void*)0))
  VAR_1->max_nr_entries = VAR_0;
 return VAR_1;
}
