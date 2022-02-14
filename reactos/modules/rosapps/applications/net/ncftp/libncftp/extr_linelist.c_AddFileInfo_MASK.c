
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int nFileInfos; TYPE_1__* last; TYPE_1__* first; } ;
struct TYPE_8__ {struct TYPE_8__* next; struct TYPE_8__* prev; } ;
typedef TYPE_1__* FileInfoPtr ;
typedef TYPE_2__* FileInfoListPtr ;
typedef int FileInfo ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;

FileInfoPtr
FUNC_2(FileInfoListPtr VAR_0, FileInfoPtr VAR_1)
{
 FileInfoPtr VAR_2;

 VAR_2 = (FileInfoPtr) FUNC_0(sizeof(FileInfo));
 if (VAR_2 != ((void*)0)) {
  (void) FUNC_1(VAR_2, VAR_1, sizeof(FileInfo));
  VAR_2->next = ((void*)0);
  if (VAR_0->first == ((void*)0)) {
   VAR_0->first = VAR_0->last = VAR_2;
   VAR_2->prev = ((void*)0);
   VAR_0->nFileInfos = 1;
  } else {
   VAR_2->prev = VAR_0->last;
   VAR_0->last->next = VAR_2;
   VAR_0->last = VAR_2;
   VAR_0->nFileInfos++;
  }
 }
 return VAR_2;
}
