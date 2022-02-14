
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int stb_hash_func ;
struct TYPE_3__ {int size_log2; int hash_size; void*** hash_table; int * dupes; scalar_t__ population; scalar_t__ hash_shift; void* ineq; void* eq; int hash; } ;
typedef TYPE_1__ stb_dupe ;
typedef void* stb_compare_func ;


 scalar_t__ FUNC_0 (int) ;

stb_dupe *FUNC_1(stb_hash_func VAR_0, stb_compare_func VAR_1, int VAR_2,
                                              stb_compare_func VAR_3)
{
   int VAR_4, VAR_5;
   stb_dupe *VAR_6 = (stb_dupe *) FUNC_0(sizeof(*VAR_6));

   VAR_6->size_log2 = 4;
   VAR_5 = 1 << VAR_6->size_log2;
   while (VAR_5 * VAR_5 < VAR_2) {
      ++VAR_6->size_log2;
      VAR_5 *= 2;
   }

   VAR_6->hash = VAR_0;
   VAR_6->eq = VAR_1;
   VAR_6->ineq = VAR_3;
   VAR_6->hash_shift = 0;

   VAR_6->population = 0;
   VAR_6->hash_size = VAR_5;
   VAR_6->hash_table = (void ***) FUNC_0(sizeof(*VAR_6->hash_table) * VAR_5);
   for (VAR_4=0; VAR_4 < VAR_5; ++VAR_4)
      VAR_6->hash_table[VAR_4] = ((void*)0);

   VAR_6->dupes = ((void*)0);

   return VAR_6;
}
