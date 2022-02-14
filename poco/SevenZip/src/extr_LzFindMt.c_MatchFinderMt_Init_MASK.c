
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cutValue; int cyclicBufferSize; int cyclicBufferPos; int buffer; int pos; int numHashBytes; int matchMaxLen; int son; int crc; int fixedHashSize; int hash; } ;
struct TYPE_6__ {int cutValue; int cyclicBufferSize; int cyclicBufferPos; int buffer; int pos; int numHashBytes; int matchMaxLen; int son; int crc; int fixedHashSize; int hash; scalar_t__ historySize; scalar_t__ lzPos; scalar_t__ btNumAvailBytes; int pointerToCurPos; scalar_t__ hashBufPosLimit; scalar_t__ hashBufPos; scalar_t__ btBufPosLimit; scalar_t__ btBufPos; TYPE_2__* MatchFinder; } ;
typedef TYPE_1__ CMatchFinderMt ;
typedef TYPE_2__ CMatchFinder ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(CMatchFinderMt *VAR_0)
{
  CMatchFinder *VAR_1 = VAR_0->MatchFinder;
  VAR_0->btBufPos = VAR_0->btBufPosLimit = 0;
  VAR_0->hashBufPos = VAR_0->hashBufPosLimit = 0;
  FUNC_1(VAR_1);
  VAR_0->pointerToCurPos = FUNC_0(VAR_1);
  VAR_0->btNumAvailBytes = 0;
  VAR_0->lzPos = VAR_0->historySize + 1;

  VAR_0->hash = VAR_1->hash;
  VAR_0->fixedHashSize = VAR_1->fixedHashSize;
  VAR_0->crc = VAR_1->crc;

  VAR_0->son = VAR_1->son;
  VAR_0->matchMaxLen = VAR_1->matchMaxLen;
  VAR_0->numHashBytes = VAR_1->numHashBytes;
  VAR_0->pos = VAR_1->pos;
  VAR_0->buffer = VAR_1->buffer;
  VAR_0->cyclicBufferPos = VAR_1->cyclicBufferPos;
  VAR_0->cyclicBufferSize = VAR_1->cyclicBufferSize;
  VAR_0->cutValue = VAR_1->cutValue;
}
