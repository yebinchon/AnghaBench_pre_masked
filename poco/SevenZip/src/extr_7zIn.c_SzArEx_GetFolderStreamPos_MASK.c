
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
typedef size_t UInt32 ;
struct TYPE_3__ {size_t* FolderStartPackStreamIndex; scalar_t__* PackStreamStartPositions; scalar_t__ dataPos; } ;
typedef TYPE_1__ CSzArEx ;



UInt64 FUNC_0(const CSzArEx *VAR_0, UInt32 VAR_1, UInt32 VAR_2)
{
  return VAR_0->dataPos +
    VAR_0->PackStreamStartPositions[VAR_0->FolderStartPackStreamIndex[VAR_1] + VAR_2];
}
