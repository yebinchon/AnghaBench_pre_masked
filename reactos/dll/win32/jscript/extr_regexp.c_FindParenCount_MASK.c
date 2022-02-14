
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {int flags; scalar_t__ parenCount; TYPE_1__* classCache; scalar_t__ classBitmapsMem; scalar_t__ treeDepth; scalar_t__ progLength; scalar_t__ classCount; int cpbegin; int cp; } ;
struct TYPE_5__ {int * start; } ;
typedef TYPE_2__ CompilerState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static UINT
FUNC_1(CompilerState *VAR_4)
{
    CompilerState VAR_5;
    int VAR_6;

    if (VAR_4->flags & VAR_1)
        return VAR_3;







    VAR_5 = *VAR_4;
    VAR_5.flags |= VAR_1;
    VAR_5.cp = VAR_5.cpbegin;
    VAR_5.parenCount = 0;
    VAR_5.classCount = 0;
    VAR_5.progLength = 0;
    VAR_5.treeDepth = 0;
    VAR_5.classBitmapsMem = 0;
    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
        VAR_5.classCache[VAR_6].start = ((void*)0);

    if (!FUNC_0(&VAR_5)) {
        VAR_4->flags |= VAR_2;
        return VAR_3;
    }
    return VAR_5.parenCount;
}
