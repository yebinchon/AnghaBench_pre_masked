
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct data_buf {scalar_t__ len; int * data; } ;
struct TYPE_2__ {size_t bwi; int ps; struct data_buf* bufs; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_0(uint8_t VAR_2) {
  struct data_buf *VAR_3 = &VAR_1.bufs[VAR_1.bwi];
  if (VAR_3->len < VAR_0) {
    VAR_3->data[VAR_3->len++] = VAR_2;
    VAR_1.ps++;
  }
}
