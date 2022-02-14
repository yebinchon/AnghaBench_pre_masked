
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lossless; int quality; int method; } ;
typedef TYPE_1__ WebPConfig ;
struct TYPE_5__ {int quality_; int method_; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

int FUNC_0(WebPConfig* VAR_2, int VAR_3) {
  if (VAR_2 == ((void*)0) || VAR_3 < 0 || VAR_3 > VAR_0) return 0;
  VAR_2->lossless = 1;
  VAR_2->method = VAR_1[VAR_3].method_;
  VAR_2->quality = VAR_1[VAR_3].quality_;
  return 1;
}
