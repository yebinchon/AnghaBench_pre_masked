
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int db; int FileNames; int FileNameOffsets; int FileIndexToFolderIndexMap; int FolderStartFileIndex; int PackStreamStartPositions; int FolderStartPackStreamIndex; } ;
typedef int ISzAlloc ;
typedef TYPE_1__ CSzArEx ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(CSzArEx *VAR_0, ISzAlloc *VAR_1)
{
  FUNC_1(VAR_1, VAR_0->FolderStartPackStreamIndex);
  FUNC_1(VAR_1, VAR_0->PackStreamStartPositions);
  FUNC_1(VAR_1, VAR_0->FolderStartFileIndex);
  FUNC_1(VAR_1, VAR_0->FileIndexToFolderIndexMap);

  FUNC_1(VAR_1, VAR_0->FileNameOffsets);
  FUNC_0(&VAR_0->FileNames, VAR_1);

  FUNC_3(&VAR_0->db, VAR_1);
  FUNC_2(VAR_0);
}
