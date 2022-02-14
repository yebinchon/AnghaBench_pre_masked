
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rc; int zErr; } ;
struct TYPE_5__ {int db; } ;
typedef TYPE_1__ Sqlite ;
typedef TYPE_2__ Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(
  Error *VAR_1,
  Sqlite *VAR_2,
  const char *VAR_3
){
  if( VAR_1->rc==VAR_0 ){
    VAR_1->rc = FUNC_0(VAR_2->db, VAR_3, 0, 0, &VAR_1->zErr);
  }
}
