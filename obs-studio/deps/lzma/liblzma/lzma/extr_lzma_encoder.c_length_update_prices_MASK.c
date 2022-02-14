
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t table_size; size_t* counters; size_t** prices; int high; int * mid; int * low; int choice2; int choice; } ;
typedef TYPE_1__ lzma_length_encoder ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t const FUNC_0 (int ) ;
 size_t const FUNC_1 (int ) ;
 size_t const FUNC_2 (int ,int ,size_t) ;

__attribute__((used)) static void
FUNC_3(lzma_length_encoder *VAR_5, const uint32_t VAR_6)
{
 const uint32_t VAR_7 = VAR_5->table_size;
 VAR_5->counters[VAR_6] = VAR_7;

 const uint32_t VAR_8 = FUNC_0(VAR_5->choice);
 const uint32_t VAR_9 = FUNC_1(VAR_5->choice);
 const uint32_t VAR_10 = VAR_9 + FUNC_0(VAR_5->choice2);
 const uint32_t VAR_11 = VAR_9 + FUNC_1(VAR_5->choice2);
 uint32_t *const VAR_12 = VAR_5->prices[VAR_6];

 uint32_t VAR_13;
 for (VAR_13 = 0; VAR_13 < VAR_7 && VAR_13 < VAR_2; ++VAR_13)
  VAR_12[VAR_13] = VAR_8 + FUNC_2(VAR_5->low[VAR_6],
    VAR_1, VAR_13);

 for (; VAR_13 < VAR_7 && VAR_13 < VAR_2 + VAR_4; ++VAR_13)
  VAR_12[VAR_13] = VAR_10 + FUNC_2(VAR_5->mid[VAR_6],
    VAR_3, VAR_13 - VAR_2);

 for (; VAR_13 < VAR_7; ++VAR_13)
  VAR_12[VAR_13] = VAR_11 + FUNC_2(VAR_5->high, VAR_0,
    VAR_13 - VAR_2 - VAR_4);

 return;
}
