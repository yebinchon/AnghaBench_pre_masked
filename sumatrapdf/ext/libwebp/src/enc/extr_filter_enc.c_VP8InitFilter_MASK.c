
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__*** lf_stats_; } ;
typedef TYPE_1__ VP8EncIterator ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

void FUNC_1(VP8EncIterator* const VAR_2) {

  if (VAR_2->lf_stats_ != ((void*)0)) {
    int VAR_3, VAR_4;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
      for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        (*VAR_2->lf_stats_)[VAR_3][VAR_4] = 0;
      }
    }
    FUNC_0();
  }



}
