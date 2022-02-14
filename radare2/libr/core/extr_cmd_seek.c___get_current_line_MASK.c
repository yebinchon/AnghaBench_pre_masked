
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int offset; TYPE_1__* print; } ;
struct TYPE_4__ {scalar_t__ lines_cache_sz; int lines_cache; } ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(RCore *VAR_0) {
 if (VAR_0->print->lines_cache_sz > 0) {
  int VAR_1 = FUNC_1 (VAR_0->print->lines_cache, VAR_0->print->lines_cache_sz, VAR_0->offset);
  FUNC_0 ("%d\n", VAR_1);
 }
}
