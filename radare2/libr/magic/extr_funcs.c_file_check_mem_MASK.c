
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int last_cond; scalar_t__ last_match; scalar_t__ got_match; } ;
struct TYPE_8__ {unsigned int len; TYPE_3__* li; } ;
struct TYPE_9__ {TYPE_1__ c; } ;
typedef TYPE_2__ RMagic ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,size_t) ;
 TYPE_3__* FUNC_1 (size_t) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,size_t) ;

int FUNC_3(RMagic *VAR_1, unsigned int VAR_2) {
 if (VAR_2 >= VAR_1->c.len) {
  size_t VAR_3 = (VAR_1->c.len += 20) * sizeof (*VAR_1->c.li);
  VAR_1->c.li = (!VAR_1->c.li) ? FUNC_1 (VAR_3) :
      FUNC_2 (VAR_1->c.li, VAR_3);
  if (!VAR_1->c.li) {
   FUNC_0 (VAR_1, VAR_3);
   return -1;
  }
 }
 VAR_1->c.li[VAR_2].got_match = 0;
 VAR_1->c.li[VAR_2].last_match = 0;
 VAR_1->c.li[VAR_2].last_cond = VAR_0;
 return 0;
}
