
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t num; size_t numAllocated; int * streams; } ;
struct TYPE_7__ {int (* Free ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ ISzAlloc ;
typedef TYPE_2__ CXzs ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;

void FUNC_2(CXzs *VAR_0, ISzAlloc *VAR_1)
{
  size_t VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->num; VAR_2++)
    FUNC_0(&VAR_0->streams[VAR_2], VAR_1);
  VAR_1->Free(VAR_1, VAR_0->streams);
  VAR_0->num = VAR_0->numAllocated = 0;
  VAR_0->streams = 0;
}
