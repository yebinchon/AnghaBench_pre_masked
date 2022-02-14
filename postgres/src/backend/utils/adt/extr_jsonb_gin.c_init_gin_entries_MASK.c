
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allocated; scalar_t__ count; int * buf; } ;
typedef TYPE_1__ GinEntries ;
typedef int Datum ;


 int * FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(GinEntries *VAR_0, int VAR_1)
{
 VAR_0->allocated = VAR_1;
 VAR_0->buf = VAR_1 ? FUNC_0(sizeof(Datum) * VAR_1) : ((void*)0);
 VAR_0->count = 0;
}
