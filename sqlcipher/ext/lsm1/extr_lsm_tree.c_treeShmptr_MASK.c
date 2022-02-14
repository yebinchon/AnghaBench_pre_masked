
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* apShm; scalar_t__ nShm; } ;
typedef TYPE_1__ lsm_db ;


 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void *FUNC_2(lsm_db *VAR_0, u32 VAR_1){

  FUNC_0( (VAR_1>>15)<(u32)VAR_0->nShm );
  FUNC_0( VAR_0->apShm[VAR_1>>15] );

  return VAR_1 ? FUNC_1(VAR_0, VAR_1) : 0;
}
