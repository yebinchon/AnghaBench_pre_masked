
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int verbose; int line; scalar_t__ col; scalar_t__ pos; scalar_t__ len; int * buf; } ;
typedef TYPE_1__ parser_t ;



__attribute__((used)) static void
FUNC_0(parser_t *VAR_0, bool VAR_1) {
 VAR_0->verbose = VAR_1;
 VAR_0->buf = ((void*)0);
 VAR_0->len = 0;
 VAR_0->pos = 0;
 VAR_0->line = 1;
 VAR_0->col = 0;
}
