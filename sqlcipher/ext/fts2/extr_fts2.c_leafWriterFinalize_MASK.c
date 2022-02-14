
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef int fulltext_vtab ;
struct TYPE_4__ {int iEndBlockid; int iStartBlockid; int idx; int iLevel; } ;
typedef TYPE_1__ LeafWriter ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,char**,int*,scalar_t__*) ;
 int FUNC_1 (int *,int ,int ,int ,int ,scalar_t__,char*,int) ;

__attribute__((used)) static int FUNC_2(fulltext_vtab *VAR_1, LeafWriter *VAR_2){
  sqlite_int64 VAR_3;
  char *VAR_4;
  int VAR_5, VAR_6;

  VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_4, &VAR_6, &VAR_3);
  if( VAR_5!=VAR_0 ) return VAR_5;


  if( VAR_3==0 && VAR_6==0 ) return VAR_0;

  return FUNC_1(VAR_1, VAR_2->iLevel, VAR_2->idx,
                    VAR_2->iStartBlockid, VAR_2->iEndBlockid,
                    VAR_3, VAR_4, VAR_6);
}
