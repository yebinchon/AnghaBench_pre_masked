
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int slot_count; TYPE_2__* storage; int slot_count_log2; int seed; } ;
typedef TYPE_1__ stbds_hash_index ;
struct TYPE_5__ {size_t* hash; int * index; } ;
typedef TYPE_2__ stbds_hash_bucket ;
typedef size_t ptrdiff_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* FUNC_0 (void*,size_t) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (void*,size_t,int ) ;
 int VAR_5 ;
 size_t FUNC_3 (char*,int ) ;
 TYPE_1__* FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*,size_t,void*,size_t,int,int ) ;
 size_t FUNC_6 (size_t,int,int ) ;

__attribute__((used)) static ptrdiff_t FUNC_7(void *VAR_6, size_t VAR_7, void *VAR_8, size_t VAR_9, int VAR_10)
{
  void *VAR_11 = FUNC_0(VAR_6,VAR_7);
  stbds_hash_index *VAR_12 = FUNC_4(VAR_11);
  size_t VAR_13 = VAR_10 >= VAR_4 ? FUNC_3((char*)VAR_8,VAR_12->seed) : FUNC_2(VAR_8, VAR_9,VAR_12->seed);
  size_t VAR_14 = VAR_0;
  size_t VAR_15,VAR_16;
  size_t VAR_17;
  stbds_hash_bucket *VAR_18;

  if (VAR_13 < 2) VAR_13 += 2;

  VAR_17 = FUNC_6(VAR_13, VAR_12->slot_count, VAR_12->slot_count_log2);

  for (;;) {
    FUNC_1(++VAR_5);
    VAR_18 = &VAR_12->storage[VAR_17 >> VAR_2];


    for (VAR_16=VAR_17 & VAR_1; VAR_16 < VAR_0; ++VAR_16) {
      if (VAR_18->hash[VAR_16] == VAR_13) {
        if (FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_18->index[VAR_16])) {
          return (VAR_17 & ~VAR_1)+VAR_16;
        }
      } else if (VAR_18->hash[VAR_16] == VAR_3) {
        return -1;
      }
    }


    VAR_15 = VAR_17 & VAR_1;
    for (VAR_16 = 0; VAR_16 < VAR_15; ++VAR_16) {
      if (VAR_18->hash[VAR_16] == VAR_13) {
        if (FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_18->index[VAR_16])) {
          return (VAR_17 & ~VAR_1)+VAR_16;
        }
      } else if (VAR_18->hash[VAR_16] == VAR_3) {
        return -1;
      }
    }


    VAR_17 += VAR_14;
    VAR_14 += VAR_0;
    VAR_17 &= (VAR_12->slot_count-1);
  }

  return -1;
}
