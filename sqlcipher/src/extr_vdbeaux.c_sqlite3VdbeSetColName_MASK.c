
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nResColumn; TYPE_3__* aColName; TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_8__ {int flags; } ;
struct TYPE_6__ {scalar_t__ mallocFailed; } ;
typedef TYPE_3__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 void FUNC_0 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,char const*,int,int ,void (*) (void*)) ;

int FUNC_3(
  Vdbe *VAR_4,
  int VAR_5,
  int VAR_6,
  const char *VAR_7,
  void (*VAR_8)(void*)
){
  int VAR_9;
  Mem *VAR_10;
  FUNC_1( VAR_5<VAR_4->nResColumn );
  FUNC_1( VAR_6<VAR_0 );
  if( VAR_4->db->mallocFailed ){
    FUNC_1( !VAR_7 || VAR_8!=FUNC_0 );
    return VAR_2;
  }
  FUNC_1( VAR_4->aColName!=0 );
  VAR_10 = &(VAR_4->aColName[VAR_5+VAR_6*VAR_4->nResColumn]);
  VAR_9 = FUNC_2(VAR_10, VAR_7, -1, VAR_3, VAR_8);
  FUNC_1( VAR_9!=0 || !VAR_7 || (VAR_10->flags&VAR_1)!=0 );
  return VAR_9;
}
