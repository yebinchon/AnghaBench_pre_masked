
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
typedef size_t UInt32 ;
struct TYPE_5__ {scalar_t__* PackSizes; TYPE_2__* Folders; } ;
struct TYPE_7__ {size_t* FolderStartPackStreamIndex; TYPE_1__ db; } ;
struct TYPE_6__ {size_t NumPackStreams; } ;
typedef TYPE_2__ CSzFolder ;
typedef TYPE_3__ CSzArEx ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(const CSzArEx *VAR_2, UInt32 VAR_3, UInt64 *VAR_4)
{
  UInt32 VAR_5 = VAR_2->FolderStartPackStreamIndex[VAR_3];
  CSzFolder *VAR_6 = VAR_2->db.Folders + VAR_3;
  UInt64 VAR_7 = 0;
  UInt32 VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_6->NumPackStreams; VAR_8++)
  {
    UInt64 VAR_9 = VAR_7 + VAR_2->db.PackSizes[VAR_5 + VAR_8];
    if (VAR_9 < VAR_7)
      return VAR_0;
    VAR_7 = VAR_9;
  }
  *VAR_4 = VAR_7;
  return VAR_1;
}
