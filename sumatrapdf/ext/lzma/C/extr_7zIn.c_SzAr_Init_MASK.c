
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ NumFiles; scalar_t__ NumFolders; scalar_t__ NumPackStreams; scalar_t__ Files; scalar_t__ Folders; scalar_t__ PackCRCs; scalar_t__ PackCRCsDefined; scalar_t__ PackSizes; } ;
typedef TYPE_1__ CSzAr ;



void FUNC_0(CSzAr *VAR_0)
{
  VAR_0->PackSizes = 0;
  VAR_0->PackCRCsDefined = 0;
  VAR_0->PackCRCs = 0;
  VAR_0->Folders = 0;
  VAR_0->Files = 0;
  VAR_0->NumPackStreams = 0;
  VAR_0->NumFolders = 0;
  VAR_0->NumFiles = 0;
}
