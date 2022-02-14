
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int k_hash_funcs; int* bitset; } ;
typedef TYPE_1__ bloom_filter ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int*,unsigned char*,size_t) ;

bool
FUNC_1(bloom_filter *VAR_1, unsigned char *VAR_2, size_t VAR_3)
{
 uint32 VAR_4[VAR_0];
 int VAR_5;

 FUNC_0(VAR_1, VAR_4, VAR_2, VAR_3);


 for (VAR_5 = 0; VAR_5 < VAR_1->k_hash_funcs; VAR_5++)
 {
  if (!(VAR_1->bitset[VAR_4[VAR_5] >> 3] & (1 << (VAR_4[VAR_5] & 7))))
   return 1;
 }

 return 0;
}
