
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data_max; } ;
typedef TYPE_1__ libgdbr_t ;
struct TYPE_5__ {int valid; int init; int maxlen; int buf; scalar_t__ buflen; } ;


 int FUNC_0 (int ) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void FUNC_1(libgdbr_t *VAR_1) {
 VAR_0.maxlen = VAR_1->data_max;
 VAR_0.buflen = 0;
 VAR_0.valid = 0;
 VAR_0.init = 0;
 if ((VAR_0.buf = FUNC_0 (VAR_0.maxlen))) {
  VAR_0.init = 1;
 }
}
