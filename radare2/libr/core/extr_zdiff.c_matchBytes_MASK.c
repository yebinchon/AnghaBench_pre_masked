
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* bytes; } ;
struct TYPE_5__ {scalar_t__ size; int bytes; } ;
typedef TYPE_2__ RSignItem ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(RSignItem *VAR_0, RSignItem *VAR_1) {
 if (VAR_0->bytes && VAR_1->bytes) {
  if (VAR_0->bytes->size == VAR_1->bytes->size) {
   return !FUNC_0 (VAR_0->bytes->bytes, VAR_1->bytes->bytes, VAR_1->bytes->size);
  }
 }
 return 0;
}
