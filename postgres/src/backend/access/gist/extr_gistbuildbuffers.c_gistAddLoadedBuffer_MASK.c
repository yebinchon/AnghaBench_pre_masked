
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t loadedBuffersCount; size_t loadedBuffersLen; TYPE_1__** loadedBuffers; } ;
struct TYPE_6__ {scalar_t__ isTemp; } ;
typedef TYPE_1__ GISTNodeBuffer ;
typedef TYPE_2__ GISTBuildBuffers ;


 scalar_t__ FUNC_0 (TYPE_1__**,int) ;

__attribute__((used)) static void
FUNC_1(GISTBuildBuffers *VAR_0, GISTNodeBuffer *VAR_1)
{

 if (VAR_1->isTemp)
  return;


 if (VAR_0->loadedBuffersCount >= VAR_0->loadedBuffersLen)
 {
  VAR_0->loadedBuffersLen *= 2;
  VAR_0->loadedBuffers = (GISTNodeBuffer **)
   FUNC_0(VAR_0->loadedBuffers,
      VAR_0->loadedBuffersLen * sizeof(GISTNodeBuffer *));
 }

 VAR_0->loadedBuffers[VAR_0->loadedBuffersCount] = VAR_1;
 VAR_0->loadedBuffersCount++;
}
