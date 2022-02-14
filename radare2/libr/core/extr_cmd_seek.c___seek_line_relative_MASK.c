
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* print; int offset; } ;
struct TYPE_5__ {int lines_cache_sz; int * lines_cache; } ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static void FUNC_3(RCore *VAR_0, int VAR_1) {
 int VAR_2 = FUNC_2 (VAR_0->print->lines_cache, VAR_0->print->lines_cache_sz, VAR_0->offset);
 if (VAR_1 > 0 && VAR_2 + VAR_1 >= VAR_0->print->lines_cache_sz - 1) {
  FUNC_0 ("ERROR: Line must be < %d\n", VAR_0->print->lines_cache_sz - 1);
 } else if (VAR_1 < 0 && VAR_2 + VAR_1 < 1) {
  FUNC_0 ("ERROR: Line must be > 1\n");
 } else {
  FUNC_1 (VAR_0, VAR_0->print->lines_cache[VAR_2 + VAR_1 - 1], 1);
 }
}
