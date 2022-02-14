
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pg_sha256_ctx ;
struct TYPE_6__ {int * ptr; } ;
struct TYPE_7__ {int (* reset ) (TYPE_2__*) ;int free; int finish; int update; int block_size; int result_size; TYPE_1__ p; } ;
typedef TYPE_2__ PX_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4(PX_MD *VAR_5)
{
 pg_sha256_ctx *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6));
 FUNC_1(VAR_6, 0, sizeof(*VAR_6));

 VAR_5->p.ptr = VAR_6;

 VAR_5->result_size = VAR_3;
 VAR_5->block_size = VAR_0;
 VAR_5->reset = FUNC_0;
 VAR_5->update = VAR_4;
 VAR_5->finish = VAR_1;
 VAR_5->free = VAR_2;

 VAR_5->reset(VAR_5);
}
