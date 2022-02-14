
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* opad; void* ipad; } ;
struct TYPE_5__ {int init; int free; int finish; int update; int reset; int block_size; int result_size; int * md; TYPE_1__ p; } ;
typedef int PX_MD ;
typedef TYPE_2__ PX_HMAC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (char const*,int **) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(const char *VAR_8, PX_HMAC **VAR_9)
{
 int VAR_10;
 PX_MD *VAR_11;
 PX_HMAC *VAR_12;
 unsigned VAR_13;

 VAR_10 = FUNC_1(VAR_8, &VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_13 = FUNC_2(VAR_11);
 if (VAR_13 < 2)
 {
  FUNC_3(VAR_11);
  return VAR_0;
 }

 VAR_12 = FUNC_0(sizeof(*VAR_12));
 VAR_12->p.ipad = FUNC_0(VAR_13);
 VAR_12->p.opad = FUNC_0(VAR_13);
 VAR_12->md = VAR_11;

 VAR_12->result_size = VAR_6;
 VAR_12->block_size = VAR_1;
 VAR_12->reset = VAR_5;
 VAR_12->update = VAR_7;
 VAR_12->finish = VAR_2;
 VAR_12->free = VAR_3;
 VAR_12->init = VAR_4;

 *VAR_9 = VAR_12;

 return 0;
}
