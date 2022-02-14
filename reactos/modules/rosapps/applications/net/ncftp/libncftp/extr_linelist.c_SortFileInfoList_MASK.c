
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sortKey; int sortOrder; int nFileInfos; int * vec; } ;
typedef int * FileInfoVec ;
typedef int FileInfoPtr ;
typedef TYPE_1__* FileInfoListPtr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,size_t,int,int ) ;

void
FUNC_1(FileInfoListPtr VAR_7, int VAR_8, int VAR_9)
{
 FileInfoVec VAR_10;
 FileInfoPtr VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_10 = VAR_7->vec;
 if (VAR_10 == ((void*)0))
  return;

 if (VAR_7->sortKey == VAR_8) {
  if (VAR_7->sortOrder == VAR_9)
   return;


  VAR_14 = VAR_7->nFileInfos;
  if (VAR_14 > 1) {
   VAR_15 = VAR_14 / 2;
   for (VAR_12=0; VAR_12<VAR_15; VAR_12++) {
    VAR_13 = VAR_14 - VAR_12 - 1;
    VAR_11 = VAR_10[VAR_12];
    VAR_10[VAR_12] = VAR_10[VAR_13];
    VAR_10[VAR_13] = VAR_11;
   }
  }

  VAR_7->sortOrder = VAR_9;
 } else if ((VAR_8 == 'n') && (VAR_9 == 'a')) {
  FUNC_0(VAR_10, (size_t) VAR_7->nFileInfos, sizeof(FileInfoPtr),
   VAR_1);
  VAR_7->sortKey = VAR_8;
  VAR_7->sortOrder = VAR_9;
 } else if ((VAR_8 == 'n') && (VAR_9 == 'd')) {
  FUNC_0(VAR_10, (size_t) VAR_7->nFileInfos, sizeof(FileInfoPtr),
   VAR_2);
  VAR_7->sortKey = VAR_8;
  VAR_7->sortOrder = VAR_9;
 } else if ((VAR_8 == 't') && (VAR_9 == 'a')) {
  FUNC_0(VAR_10, (size_t) VAR_7->nFileInfos, sizeof(FileInfoPtr),
   VAR_6);
  VAR_7->sortKey = VAR_8;
  VAR_7->sortOrder = VAR_9;
 } else if ((VAR_8 == 't') && (VAR_9 == 'd')) {
  FUNC_0(VAR_10, (size_t) VAR_7->nFileInfos, sizeof(FileInfoPtr),
   VAR_4);
  VAR_7->sortKey = VAR_8;
  VAR_7->sortOrder = VAR_9;
 } else if ((VAR_8 == 's') && (VAR_9 == 'a')) {
  FUNC_0(VAR_10, (size_t) VAR_7->nFileInfos, sizeof(FileInfoPtr),
   VAR_5);
  VAR_7->sortKey = VAR_8;
  VAR_7->sortOrder = VAR_9;
 } else if ((VAR_8 == 's') && (VAR_9 == 'd')) {
  FUNC_0(VAR_10, (size_t) VAR_7->nFileInfos, sizeof(FileInfoPtr),
   VAR_3);
  VAR_7->sortKey = VAR_8;
  VAR_7->sortOrder = VAR_9;
 } else if (VAR_8 == 'b') {

  VAR_7->sortKey = VAR_8;
  VAR_7->sortOrder = VAR_9;
  FUNC_0(VAR_10, (size_t) VAR_7->nFileInfos, sizeof(FileInfoPtr),
   VAR_0);
 }
}
