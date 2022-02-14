
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_8__ {TYPE_2__* pSorter; } ;
struct TYPE_7__ {TYPE_1__* pKeyInfo; } ;
struct TYPE_6__ {int nKeyField; scalar_t__* aSortOrder; } ;
typedef TYPE_3__ SortSubtask ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (size_t const*,int) ;
 int FUNC_2 (size_t const* const,size_t const* const,int) ;
 int FUNC_3 (TYPE_3__*,int*,void const*,int,void const*,int) ;

__attribute__((used)) static int FUNC_4(
  SortSubtask *VAR_0,
  int *VAR_1,
  const void *VAR_2, int VAR_3,
  const void *VAR_4, int VAR_5
){
  const u8 * const VAR_6 = (const u8 * const)VAR_2;
  const u8 * const VAR_7 = (const u8 * const)VAR_4;
  const u8 * const VAR_8 = &VAR_6[ VAR_6[0] ];
  const u8 * const VAR_9 = &VAR_7[ VAR_7[0] ];

  int VAR_10;
  int VAR_11;
  int VAR_12;

  FUNC_1(&VAR_6[1], VAR_10);
  FUNC_1(&VAR_7[1], VAR_11);
  VAR_12 = FUNC_2(VAR_8, VAR_9, (FUNC_0(VAR_10, VAR_11) - 13)/2);
  if( VAR_12==0 ){
    VAR_12 = VAR_10 - VAR_11;
  }

  if( VAR_12==0 ){
    if( VAR_0->pSorter->pKeyInfo->nKeyField>1 ){
      VAR_12 = FUNC_3(
          VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5
      );
    }
  }else{
    if( VAR_0->pSorter->pKeyInfo->aSortOrder[0] ){
      VAR_12 = VAR_12 * -1;
    }
  }

  return VAR_12;
}
