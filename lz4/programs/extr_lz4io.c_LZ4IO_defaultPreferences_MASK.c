
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int overwrite; int streamChecksum; int blockIndependence; int sparseFileSupport; scalar_t__ removeSrcFile; int * dictionaryFilename; scalar_t__ favorDecSpeed; scalar_t__ useDictionary; scalar_t__ contentSizeFlag; scalar_t__ blockChecksum; scalar_t__ blockSize; int blockSizeId; scalar_t__ testMode; scalar_t__ passThrough; } ;
typedef TYPE_1__ LZ4IO_prefs_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

LZ4IO_prefs_t* FUNC_2(void)
{
  LZ4IO_prefs_t* const VAR_1 = (LZ4IO_prefs_t*)FUNC_1(sizeof(LZ4IO_prefs_t));
  if (!VAR_1) FUNC_0(21, "Allocation error : not enough memory");
  VAR_1->passThrough = 0;
  VAR_1->overwrite = 1;
  VAR_1->testMode = 0;
  VAR_1->blockSizeId = VAR_0;
  VAR_1->blockSize = 0;
  VAR_1->blockChecksum = 0;
  VAR_1->streamChecksum = 1;
  VAR_1->blockIndependence = 1;
  VAR_1->sparseFileSupport = 1;
  VAR_1->contentSizeFlag = 0;
  VAR_1->useDictionary = 0;
  VAR_1->favorDecSpeed = 0;
  VAR_1->dictionaryFilename = ((void*)0);
  VAR_1->removeSrcFile = 0;
  return VAR_1;
}
