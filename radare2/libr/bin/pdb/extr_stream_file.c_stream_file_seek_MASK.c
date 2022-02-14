
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos; scalar_t__ end; } ;
typedef TYPE_1__ R_STREAM_FILE ;



void FUNC_0(R_STREAM_FILE *VAR_0, int VAR_1, int VAR_2) {
 switch (VAR_2) {
 case 0:
  VAR_0->pos = VAR_1;
  break;
 case 1:
  VAR_0->pos += VAR_1;
  break;
 case 2:
  VAR_0->pos = VAR_0->end + VAR_1;
  break;
 default:
  break;
 }
 if (VAR_0->pos < 0) {
  VAR_0->pos = 0;
 }
 if (VAR_0->pos > VAR_0->end) {
  VAR_0->pos = VAR_0->end;
 }
}
