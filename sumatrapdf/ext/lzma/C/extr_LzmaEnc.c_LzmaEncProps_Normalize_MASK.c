
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int UInt32 ;
struct TYPE_3__ {int level; int dictSize; int reduceSize; int lc; scalar_t__ lp; int pb; int algo; int fb; int btMode; int numHashBytes; int mc; int numThreads; } ;
typedef TYPE_1__ CLzmaEncProps ;



void FUNC_0(CLzmaEncProps *VAR_0)
{
  int VAR_1 = VAR_0->level;
  if (VAR_1 < 0) VAR_1 = 5;
  VAR_0->level = VAR_1;
  if (VAR_0->dictSize == 0) VAR_0->dictSize = (VAR_1 <= 5 ? (1 << (VAR_1 * 2 + 14)) : (VAR_1 == 6 ? (1 << 25) : (1 << 26)));
  if (VAR_0->dictSize > VAR_0->reduceSize)
  {
    unsigned VAR_2;
    for (VAR_2 = 15; VAR_2 <= 30; VAR_2++)
    {
      if (VAR_0->reduceSize <= ((UInt32)2 << VAR_2)) { VAR_0->dictSize = ((UInt32)2 << VAR_2); break; }
      if (VAR_0->reduceSize <= ((UInt32)3 << VAR_2)) { VAR_0->dictSize = ((UInt32)3 << VAR_2); break; }
    }
  }
  if (VAR_0->lc < 0) VAR_0->lc = 3;
  if (VAR_0->lp < 0) VAR_0->lp = 0;
  if (VAR_0->pb < 0) VAR_0->pb = 2;
  if (VAR_0->algo < 0) VAR_0->algo = (VAR_1 < 5 ? 0 : 1);
  if (VAR_0->fb < 0) VAR_0->fb = (VAR_1 < 7 ? 32 : 64);
  if (VAR_0->btMode < 0) VAR_0->btMode = (VAR_0->algo == 0 ? 0 : 1);
  if (VAR_0->numHashBytes < 0) VAR_0->numHashBytes = 4;
  if (VAR_0->mc == 0) VAR_0->mc = (16 + (VAR_0->fb >> 1)) >> (VAR_0->btMode ? 0 : 1);
  if (VAR_0->numThreads < 0)
    VAR_0->numThreads =

      ((VAR_0->btMode && VAR_0->algo) ? 2 : 1);



}
