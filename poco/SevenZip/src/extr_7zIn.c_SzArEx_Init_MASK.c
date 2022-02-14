
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int FileNames; scalar_t__ FileNameOffsets; scalar_t__ FileIndexToFolderIndexMap; scalar_t__ FolderStartFileIndex; scalar_t__ PackStreamStartPositions; scalar_t__ FolderStartPackStreamIndex; int db; } ;
typedef TYPE_1__ CSzArEx ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(CSzArEx *VAR_0)
{
  FUNC_1(&VAR_0->db);
  VAR_0->FolderStartPackStreamIndex = 0;
  VAR_0->PackStreamStartPositions = 0;
  VAR_0->FolderStartFileIndex = 0;
  VAR_0->FileIndexToFolderIndexMap = 0;
  VAR_0->FileNameOffsets = 0;
  FUNC_0(&VAR_0->FileNames);
}
