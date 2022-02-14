
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int stbds_temp ;
struct TYPE_4__ {TYPE_2__* storage; } ;
typedef TYPE_1__ stbds_hash_index ;
struct TYPE_5__ {int* index; } ;
typedef TYPE_2__ stbds_hash_bucket ;
typedef size_t ptrdiff_t ;
struct TYPE_6__ {int length; scalar_t__ hash_table; } ;


 void* FUNC_0 (int,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_1 (void*,size_t) ;
 int VAR_2 ;
 int FUNC_2 (void*,int ,size_t) ;
 void* FUNC_3 (int ,size_t,int ,int) ;
 TYPE_3__* FUNC_4 (void*) ;
 size_t FUNC_5 (void*,size_t,void*,size_t,int) ;

void * FUNC_6(void *VAR_3, size_t VAR_4, void *VAR_5, size_t VAR_6, int VAR_7)
{
  if (VAR_3 == ((void*)0)) {

    VAR_3 = FUNC_3(0, VAR_4, 0, 1);
    FUNC_4(VAR_3)->length += 1;
    FUNC_2(VAR_3, 0, VAR_4);
    stbds_temp(VAR_8) = VAR_2;

    return FUNC_0(VAR_8,VAR_4);
  } else {
    stbds_hash_index *VAR_9;
    void *VAR_10 = FUNC_1(VAR_3,VAR_4);

    VAR_9 = (stbds_hash_index *) FUNC_4(VAR_10)->hash_table;
    if (VAR_9 == 0) {
      stbds_temp(VAR_11) = -1;
    } else {
      ptrdiff_t VAR_12 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
      if (VAR_12 < 0) {
        stbds_temp(VAR_13) = VAR_2;
      } else {
        stbds_hash_bucket *VAR_14 = &VAR_9->storage[VAR_12 >> VAR_1];
        stbds_temp(VAR_15) = VAR_14->index[VAR_12 & VAR_0];
      }
    }
    return VAR_3;
  }
}
