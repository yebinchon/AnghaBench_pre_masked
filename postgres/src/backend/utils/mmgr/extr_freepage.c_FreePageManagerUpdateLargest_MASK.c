
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int contiguous_pages_dirty; int contiguous_pages; } ;
typedef TYPE_1__ FreePageManager ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(FreePageManager *VAR_0)
{
 if (!VAR_0->contiguous_pages_dirty)
  return;

 VAR_0->contiguous_pages = FUNC_0(VAR_0);
 VAR_0->contiguous_pages_dirty = 0;
}
