
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* prev; struct TYPE_4__* next; } ;
typedef TYPE_1__ TocEntry ;
typedef int ArchiveHandle ;



__attribute__((used)) static void
FUNC_0(ArchiveHandle *VAR_0, TocEntry *VAR_1, TocEntry *VAR_2)
{

 VAR_2->prev->next = VAR_2->next;
 VAR_2->next->prev = VAR_2->prev;


 VAR_2->prev = VAR_1->prev;
 VAR_2->next = VAR_1;
 VAR_1->prev->next = VAR_2;
 VAR_1->prev = VAR_2;
}
