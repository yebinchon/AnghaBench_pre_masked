
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ns; } ;
typedef TYPE_1__ nstime_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1(nstime_t *VAR_1, const nstime_t *VAR_2) {
 FUNC_0(VAR_0 - VAR_1->ns >= VAR_2->ns);

 VAR_1->ns += VAR_2->ns;
}
