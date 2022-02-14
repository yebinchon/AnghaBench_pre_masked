
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_3__ {int level; int lc; int lp; int pb; int algo; int fb; int btMode; int numHashBytes; int numThreads; scalar_t__ writeEndMark; scalar_t__ reduceSize; scalar_t__ mc; scalar_t__ dictSize; } ;
typedef scalar_t__ Int32 ;
typedef TYPE_1__ CLzmaEncProps ;



void FUNC_0(CLzmaEncProps *VAR_0)
{
  VAR_0->level = 5;
  VAR_0->dictSize = VAR_0->mc = 0;
  VAR_0->reduceSize = (UInt32)(Int32)-1;
  VAR_0->lc = VAR_0->lp = VAR_0->pb = VAR_0->algo = VAR_0->fb = VAR_0->btMode = VAR_0->numHashBytes = VAR_0->numThreads = -1;
  VAR_0->writeEndMark = 0;
}
