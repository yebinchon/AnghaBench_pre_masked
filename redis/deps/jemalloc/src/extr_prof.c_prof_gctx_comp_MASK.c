
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int len; int vec; } ;
struct TYPE_6__ {TYPE_1__ bt; } ;
typedef TYPE_2__ prof_gctx_t ;


 int FUNC_0 (int ,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_1(const prof_gctx_t *VAR_0, const prof_gctx_t *VAR_1) {
 unsigned VAR_2 = VAR_0->bt.len;
 unsigned VAR_3 = VAR_1->bt.len;
 unsigned VAR_4 = (VAR_2 < VAR_3) ? VAR_2 : VAR_3;
 int VAR_5 = FUNC_0(VAR_0->bt.vec, VAR_1->bt.vec, VAR_4 * sizeof(void *));
 if (VAR_5 == 0) {
  VAR_5 = (VAR_2 > VAR_3) - (VAR_2 < VAR_3);
 }
 return VAR_5;
}
