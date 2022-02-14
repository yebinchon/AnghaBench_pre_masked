
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* grub_dl_t ;
typedef TYPE_2__* grub_dl_segment_t ;
struct TYPE_5__ {scalar_t__ size; int addr; struct TYPE_5__* next; } ;
struct TYPE_4__ {TYPE_2__* segment; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (char*,char*,unsigned long,int ) ;

__attribute__((used)) static void
FUNC_2 (grub_dl_t VAR_0)
{
  grub_dl_segment_t VAR_1;

  for (VAR_1 = VAR_0->segment; VAR_1; VAR_1 = VAR_1->next) {
    if (VAR_1->size) {
      FUNC_1 ("modules", "flushing 0x%lx bytes at %p\n",
      (unsigned long) VAR_1->size, VAR_1->addr);
      FUNC_0 (VAR_1->addr, VAR_1->size);
    }
  }
}
