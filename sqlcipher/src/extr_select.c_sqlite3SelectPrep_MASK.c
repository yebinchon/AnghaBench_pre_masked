
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* db; scalar_t__ nErr; } ;
struct TYPE_13__ {int selFlags; } ;
struct TYPE_12__ {scalar_t__ mallocFailed; } ;
typedef TYPE_2__ Select ;
typedef TYPE_3__ Parse ;
typedef int NameContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;

void FUNC_4(
  Parse *VAR_1,
  Select *VAR_2,
  NameContext *VAR_3
){
  FUNC_0( VAR_2!=0 || VAR_1->db->mallocFailed );
  if( VAR_1->db->mallocFailed ) return;
  if( VAR_2->selFlags & VAR_0 ) return;
  FUNC_3(VAR_1, VAR_2);
  if( VAR_1->nErr || VAR_1->db->mallocFailed ) return;
  FUNC_1(VAR_1, VAR_2, VAR_3);
  if( VAR_1->nErr || VAR_1->db->mallocFailed ) return;
  FUNC_2(VAR_1, VAR_2);
}
