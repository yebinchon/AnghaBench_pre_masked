
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* pages; int pages_amount; int page_size; int end; scalar_t__ pos; int * buf; scalar_t__ error; } ;
typedef TYPE_1__ R_STREAM_FILE ;
typedef int RBuffer ;



int FUNC_0(R_STREAM_FILE *VAR_0, RBuffer *VAR_1, int *VAR_2, int VAR_3, int VAR_4, int VAR_5) {
 VAR_0->error = 0;
 VAR_0->buf = VAR_1;
 VAR_0->pages = VAR_2;
 VAR_0->pages_amount = VAR_3;
 VAR_0->page_size = VAR_5;
 if (VAR_4 == -1) {
  VAR_0->end = VAR_3 * VAR_5;
 } else {
  VAR_0->end = VAR_4;
 }
 VAR_0->pos = 0;
 return 1;
}
