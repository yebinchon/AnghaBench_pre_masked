
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** vec; TYPE_1__* first; scalar_t__ nFileInfos; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__** FileInfoVec ;
typedef TYPE_1__* FileInfoPtr ;
typedef TYPE_3__* FileInfoListPtr ;


 scalar_t__ FUNC_0 (size_t,int) ;

void
FUNC_1(FileInfoListPtr VAR_0)
{
 FileInfoVec VAR_1;
 FileInfoPtr VAR_2;
 int VAR_3;

 VAR_1 = (FileInfoVec) FUNC_0((size_t) (VAR_0->nFileInfos + 1), sizeof(FileInfoPtr));
 if (VAR_1 != (FileInfoVec) 0) {
  for (VAR_3 = 0, VAR_2 = VAR_0->first; VAR_2 != ((void*)0); VAR_2 = VAR_2->next, VAR_3++)
   VAR_1[VAR_3] = VAR_2;
  VAR_0->vec = VAR_1;
 }
}
