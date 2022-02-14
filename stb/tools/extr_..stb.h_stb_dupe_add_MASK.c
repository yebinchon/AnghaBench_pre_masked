
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int stb_uint32 ;
struct TYPE_3__ {int (* hash ) (void*,int ) ;int hash_size; int population; int * hash_table; int hash_shift; } ;
typedef TYPE_1__ stb_dupe ;


 int FUNC_0 (int ,void*) ;
 int FUNC_1 (void*,int ) ;

void FUNC_2(stb_dupe *VAR_0, void *VAR_1)
{
   stb_uint32 VAR_2 = VAR_0->hash(VAR_1, VAR_0->hash_shift);
   int VAR_3 = VAR_2 & (VAR_0->hash_size-1);
   FUNC_0(VAR_0->hash_table[VAR_3], VAR_1);
   ++VAR_0->population;
}
