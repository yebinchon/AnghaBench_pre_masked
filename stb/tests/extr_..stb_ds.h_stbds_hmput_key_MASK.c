
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* stbds_temp ;
struct TYPE_10__ {int mode; } ;
struct TYPE_8__ {scalar_t__ used_count; scalar_t__ used_count_threshold; int slot_count; TYPE_3__ string; TYPE_2__* storage; int tombstone_count; int slot_count_log2; int seed; } ;
typedef TYPE_1__ stbds_hash_index ;
struct TYPE_9__ {size_t* hash; scalar_t__* index; } ;
typedef TYPE_2__ stbds_hash_bucket ;
typedef int ptrdiff_t ;
struct TYPE_11__ {int length; TYPE_1__* hash_table; } ;


 void* FUNC_0 (void*,size_t) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 void* FUNC_3 (void*,size_t) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;


 int FUNC_4 (int ) ;
 int FUNC_5 (void*,int ,size_t) ;
 size_t FUNC_6 (void*) ;
 void* FUNC_7 (void*,size_t,int,int) ;
 scalar_t__ FUNC_8 (void*) ;
 size_t FUNC_9 (void*,size_t,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_10 (char*,int ) ;
 TYPE_6__* FUNC_11 (void*) ;
 scalar_t__ FUNC_12 (void*,size_t,void*,size_t,int,scalar_t__) ;
 TYPE_1__* FUNC_13 (size_t,TYPE_1__*) ;
 size_t FUNC_14 (size_t,int,int ) ;
 char* FUNC_15 (TYPE_3__*,char*) ;
 char* FUNC_16 (char*) ;

void *FUNC_17(void *VAR_7, size_t VAR_8, void *VAR_9, size_t VAR_10, int VAR_11)
{
  void *VAR_12;
  stbds_hash_index *VAR_13;

  if (VAR_7 == ((void*)0)) {
    VAR_7 = FUNC_7(0, VAR_8, 0, 1);
    FUNC_5(VAR_7, 0, VAR_8);
    FUNC_11(VAR_7)->length += 1;

    VAR_7 = FUNC_0(VAR_7,VAR_8);
  }


  VAR_12 = VAR_7;
  VAR_7 = FUNC_3(VAR_7,VAR_8);

  VAR_13 = (stbds_hash_index *) FUNC_11(VAR_7)->hash_table;

  if (VAR_13 == ((void*)0) || VAR_13->used_count >= VAR_13->used_count_threshold) {
    stbds_hash_index *VAR_14;
    size_t VAR_15;

    VAR_15 = (VAR_13 == ((void*)0)) ? VAR_0 : VAR_13->slot_count*2;
    VAR_14 = FUNC_13(VAR_15, VAR_13);
    if (VAR_13) {
      FUNC_2(((void*)0), VAR_13);
    }
    FUNC_11(VAR_7)->hash_table = VAR_13 = VAR_14;
    FUNC_4(++VAR_5);
  }


  {
    size_t VAR_16 = VAR_11 >= VAR_3 ? FUNC_10((char*)VAR_9,VAR_13->seed) : FUNC_9(VAR_9, VAR_10,VAR_13->seed);
    size_t VAR_17 = VAR_0;
    size_t VAR_18,VAR_19;
    size_t VAR_20;
    ptrdiff_t VAR_21 = -1;
    stbds_hash_bucket *VAR_22;


    if (VAR_16 < 2) VAR_16 += 2;

    VAR_20 = FUNC_14(VAR_16, VAR_13->slot_count, VAR_13->slot_count_log2);

    for (;;) {
      FUNC_4(++VAR_6);
      VAR_22 = &VAR_13->storage[VAR_20 >> VAR_2];


      for (VAR_19=VAR_20 & VAR_1; VAR_19 < VAR_0; ++VAR_19) {
        if (VAR_22->hash[VAR_19] == VAR_16) {
          if (FUNC_12(VAR_12, VAR_8, VAR_9, VAR_10, VAR_11, VAR_22->index[VAR_19])) {
            stbds_temp(VAR_23) = VAR_22->index[VAR_19];
            return FUNC_0(VAR_23,VAR_8);
          }
        } else if (VAR_22->hash[VAR_19] == 0) {
          VAR_20 = (VAR_20 & ~VAR_1) + VAR_19;
          goto found_empty_slot;
        } else if (VAR_21 < 0) {
          if (VAR_22->index[VAR_19] == VAR_4)
            VAR_21 = (ptrdiff_t) ((VAR_20 & ~VAR_1) + VAR_19);
        }
      }


      VAR_18 = VAR_20 & VAR_1;
      for (VAR_19 = 0; VAR_19 < VAR_18; ++VAR_19) {
        if (VAR_22->hash[VAR_19] == VAR_16) {
          if (FUNC_12(VAR_12, VAR_8, VAR_9, VAR_10, VAR_11, VAR_22->index[VAR_19])) {
            stbds_temp(VAR_24) = VAR_22->index[VAR_19];
            return FUNC_0(VAR_24,VAR_8);
          }
        } else if (VAR_22->hash[VAR_19] == 0) {
          VAR_20 = (VAR_20 & ~VAR_1) + VAR_19;
          goto found_empty_slot;
        } else if (VAR_21 < 0) {
          if (VAR_22->index[VAR_19] == VAR_4)
            VAR_21 = (ptrdiff_t) ((VAR_20 & ~VAR_1) + VAR_19);
        }
      }


      VAR_20 += VAR_17;
      VAR_17 += VAR_0;
      VAR_20 &= (VAR_13->slot_count-1);
    }
   found_empty_slot:
    if (VAR_21 >= 0) {
      VAR_20 = VAR_21;
      --VAR_13->tombstone_count;
    }
    ++VAR_13->used_count;

    {
      ptrdiff_t VAR_25 = (ptrdiff_t) FUNC_8(VAR_7);

      if ((size_t) VAR_25+1 > FUNC_6(VAR_7))
        *(void **) &VAR_7 = FUNC_7(VAR_7, VAR_8, 1, 0);
      VAR_12 = FUNC_0(VAR_7,VAR_8);

      FUNC_1((size_t) VAR_25+1 <= FUNC_6(VAR_7));
      FUNC_11(VAR_7)->length = VAR_25+1;
      VAR_22 = &VAR_13->storage[VAR_20 >> VAR_2];
      VAR_22->hash[VAR_20 & VAR_1] = VAR_16;
      VAR_22->index[VAR_20 & VAR_1] = VAR_25-1;
      stbds_temp(VAR_26) = VAR_25-1;

      switch (VAR_13->string.mode) {
         case 128: *(char **) ((char *) VAR_26 + VAR_8*VAR_25) = FUNC_16((char*) VAR_9); break;
         case 129: *(char **) ((char *) VAR_26 + VAR_8*VAR_25) = FUNC_15(&VAR_13->string, (char*)VAR_9); break;
         default: *(char **) ((char *) VAR_26 + VAR_8*VAR_25) = (char *) VAR_9; break;
      }
    }
    return FUNC_0(VAR_7,VAR_8);
  }
}
