
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
typedef scalar_t__ ut32 ;
struct TYPE_3__ {int word_size; } ;
typedef TYPE_1__ RVTableContext ;



__attribute__((used)) static inline ut64 FUNC_0(RVTableContext *VAR_0, ut64 VAR_1, ut64 VAR_2, ut32 VAR_3) {
 if (VAR_0->word_size != 8) {
  return VAR_3;
 }
 return VAR_3 + (VAR_1 - VAR_2);
}
