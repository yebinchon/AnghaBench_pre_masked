
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; } ;
struct TYPE_5__ {TYPE_1__ string; } ;
typedef TYPE_2__ stbds_hash_index ;
struct TYPE_6__ {int length; TYPE_2__* hash_table; } ;


 void* FUNC_0 (void*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (void*,int ,size_t) ;
 void* FUNC_2 (int ,size_t,int ,int) ;
 TYPE_3__* FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

void * FUNC_5(size_t VAR_1, int VAR_2)
{
  void *VAR_3 = FUNC_2(0, VAR_1, 0, 1);
  stbds_hash_index *VAR_4;
  FUNC_1(VAR_3, 0, VAR_1);
  FUNC_3(VAR_3)->length = 1;
  FUNC_3(VAR_3)->hash_table = VAR_4 = (stbds_hash_index *) FUNC_4(VAR_0, ((void*)0));
  VAR_4->string.mode = VAR_2;
  return FUNC_0(VAR_3,VAR_1);
}
