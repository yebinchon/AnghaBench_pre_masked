
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct SrcList_item {scalar_t__ pSchema; char* zDatabase; int zName; } ;
typedef int Table ;
struct TYPE_8__ {TYPE_1__* aDb; } ;
struct TYPE_7__ {TYPE_3__* db; } ;
struct TYPE_6__ {char* zDbSName; } ;
typedef TYPE_2__ Parse ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_2__*,int ,int ,char const*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;

Table *FUNC_3(
  Parse *VAR_0,
  u32 VAR_1,
  struct SrcList_item *VAR_2
){
  const char *VAR_3;
  FUNC_0( VAR_2->pSchema==0 || VAR_2->zDatabase==0 );
  if( VAR_2->pSchema ){
    int VAR_4 = FUNC_2(VAR_0->db, VAR_2->pSchema);
    VAR_3 = VAR_0->db->aDb[VAR_4].zDbSName;
  }else{
    VAR_3 = VAR_2->zDatabase;
  }
  return FUNC_1(VAR_0, VAR_1, VAR_2->zName, VAR_3);
}
