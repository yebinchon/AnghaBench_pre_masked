
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rblist {scalar_t__ nr_entries; int entries; } ;


 int VAR_0 ;

void FUNC_0(struct rblist *VAR_1)
{
 if (VAR_1 != ((void*)0)) {
  VAR_1->entries = VAR_0;
  VAR_1->nr_entries = 0;
 }

 return;
}
