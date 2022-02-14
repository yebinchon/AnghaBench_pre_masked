
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nHeight; scalar_t__ iRoot; } ;
struct TYPE_6__ {TYPE_3__ root; } ;
struct TYPE_7__ {TYPE_1__ treehdr; } ;
typedef TYPE_2__ lsm_db ;
typedef TYPE_3__ TreeRoot ;


 int FUNC_0 (TYPE_2__*,scalar_t__,char*,int,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int VAR_0 ;

void FUNC_3(lsm_db *VAR_1, const char *VAR_2){
  char VAR_3[64];
  TreeRoot *VAR_4 = &VAR_1->treehdr.root;
  FUNC_2("\n%s\n", VAR_2);
  VAR_3[0] = '/';
  if( VAR_4->iRoot ){
    FUNC_0(VAR_1, VAR_4->iRoot, VAR_3, 1, VAR_4->nHeight-1);
  }
  FUNC_1(VAR_0);
}
