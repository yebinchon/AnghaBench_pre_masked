
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_9__ {scalar_t__ szLeaf; scalar_t__ nn; } ;
struct TYPE_8__ {int rc; } ;
typedef TYPE_1__ Fts5Index ;
typedef TYPE_2__ Fts5Data ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static Fts5Data *FUNC_2(Fts5Index *VAR_1, i64 VAR_2){
  Fts5Data *VAR_3 = FUNC_0(VAR_1, VAR_2);
  if( VAR_3 ){
    if( VAR_3->szLeaf>VAR_3->nn ){
      VAR_1->rc = VAR_0;
      FUNC_1(VAR_3);
      VAR_3 = 0;
    }
  }
  return VAR_3;
}
