
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {TYPE_2__** htrees; TYPE_1__* packed_table; } ;
struct TYPE_8__ {scalar_t__ value; scalar_t__ bits; } ;
struct TYPE_7__ {scalar_t__ value; scalar_t__ bits; } ;
typedef TYPE_1__ HuffmanCode32 ;
typedef TYPE_2__ HuffmanCode ;
typedef TYPE_3__ HTreeGroup ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__,int,TYPE_1__* const) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static void FUNC_1(HTreeGroup* const VAR_7) {
  uint32_t VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
    uint32_t VAR_9 = VAR_8;
    HuffmanCode32* const VAR_10 = &VAR_7->packed_table[VAR_9];
    HuffmanCode VAR_11 = VAR_7->htrees[VAR_3][VAR_9];
    if (VAR_11.value >= VAR_5) {
      VAR_10->bits = VAR_11.bits + VAR_1;
      VAR_10->value = VAR_11.value;
    } else {
      VAR_10->bits = 0;
      VAR_10->value = 0;
      VAR_9 >>= FUNC_0(VAR_11, 8, VAR_10);
      VAR_9 >>= FUNC_0(VAR_7->htrees[VAR_6][VAR_9], 16, VAR_10);
      VAR_9 >>= FUNC_0(VAR_7->htrees[VAR_2][VAR_9], 0, VAR_10);
      VAR_9 >>= FUNC_0(VAR_7->htrees[VAR_0][VAR_9], 24, VAR_10);
      (void)VAR_9;
    }
  }
}
