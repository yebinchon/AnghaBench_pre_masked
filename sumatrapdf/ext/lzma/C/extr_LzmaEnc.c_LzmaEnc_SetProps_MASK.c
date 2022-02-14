
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_6__ {int numHashBytes; int cutValue; scalar_t__ btMode; } ;
struct TYPE_8__ {int dictSize; unsigned int numFastBytes; scalar_t__ lc; scalar_t__ lp; scalar_t__ pb; int fastMode; int multiThread; int writeEndMark; TYPE_1__ matchFinderBase; } ;
struct TYPE_7__ {scalar_t__ lc; scalar_t__ lp; scalar_t__ pb; int dictSize; unsigned int fb; scalar_t__ algo; int numHashBytes; int numThreads; int writeEndMark; int mc; scalar_t__ btMode; } ;
typedef int SRes ;
typedef TYPE_2__ CLzmaEncProps ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_3__ CLzmaEnc ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

SRes FUNC_1(CLzmaEncHandle VAR_7, const CLzmaEncProps *VAR_8)
{
  CLzmaEnc *VAR_9 = (CLzmaEnc *)VAR_7;
  CLzmaEncProps VAR_10 = *VAR_8;
  FUNC_0(&VAR_10);

  if (VAR_10.lc > VAR_0 || VAR_10.lp > VAR_1 || VAR_10.pb > VAR_3 ||
      VAR_10.dictSize > ((UInt32)1 << VAR_6) || VAR_10.dictSize > ((UInt32)1 << 30))
    return VAR_4;
  VAR_9->dictSize = VAR_10.dictSize;
  {
    unsigned VAR_11 = VAR_10.fb;
    if (VAR_11 < 5)
      VAR_11 = 5;
    if (VAR_11 > VAR_2)
      VAR_11 = VAR_2;
    VAR_9->numFastBytes = VAR_11;
  }
  VAR_9->lc = VAR_10.lc;
  VAR_9->lp = VAR_10.lp;
  VAR_9->pb = VAR_10.pb;
  VAR_9->fastMode = (VAR_10.algo == 0);
  VAR_9->matchFinderBase.btMode = VAR_10.btMode;
  {
    UInt32 VAR_12 = 4;
    if (VAR_10.btMode)
    {
      if (VAR_10.numHashBytes < 2)
        VAR_12 = 2;
      else if (VAR_10.numHashBytes < 4)
        VAR_12 = VAR_10.numHashBytes;
    }
    VAR_9->matchFinderBase.numHashBytes = VAR_12;
  }

  VAR_9->matchFinderBase.cutValue = VAR_10.mc;

  VAR_9->writeEndMark = VAR_10.writeEndMark;
  VAR_9->multiThread = (VAR_10.numThreads > 1);


  return VAR_5;
}
