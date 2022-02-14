
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ bits; scalar_t__ value; } ;
struct TYPE_5__ {scalar_t__ bits; int value; } ;
typedef TYPE_1__ HuffmanCode32 ;
typedef TYPE_2__ HuffmanCode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(HuffmanCode VAR_1, int VAR_2,
                           HuffmanCode32* const VAR_3) {
  VAR_3->bits += VAR_1.bits;
  VAR_3->value |= (uint32_t)VAR_1.value << VAR_2;
  FUNC_0(VAR_3->bits <= VAR_0);
  return VAR_1.bits;
}
