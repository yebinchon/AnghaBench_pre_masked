
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UInt32 ;
struct TYPE_6__ {size_t mNumberBuffers; TYPE_1__* mBuffers; } ;
struct TYPE_5__ {TYPE_2__* mData; } ;
typedef TYPE_2__ AudioBufferList ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(AudioBufferList *VAR_0)
{
 if (VAR_0) {
  for (UInt32 VAR_1 = 0; VAR_1 < VAR_0->mNumberBuffers; VAR_1++)
   FUNC_0(VAR_0->mBuffers[VAR_1].mData);

  FUNC_0(VAR_0);
 }
}
