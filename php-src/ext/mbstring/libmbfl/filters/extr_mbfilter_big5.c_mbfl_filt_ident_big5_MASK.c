
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; int flag; TYPE_1__* encoding; } ;
typedef TYPE_2__ mbfl_identify_filter ;
struct TYPE_4__ {scalar_t__ no_encoding; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, mbfl_identify_filter *VAR_2)
{
 int VAR_3;
 if (VAR_2->encoding->no_encoding == VAR_0) {
  VAR_3 = 0x80;
 } else {
  VAR_3 = 0xa0;
 }

 if (VAR_2->status) {
  if (VAR_1 < 0x40 || (VAR_1 > 0x7e && VAR_1 < 0xa1) ||VAR_1 > 0xfe) {
      VAR_2->flag = 1;
  }
  VAR_2->status = 0;
 } else if (VAR_1 >= 0 && VAR_1 < 0x80) {
  ;
 } else if (VAR_1 > VAR_3 && VAR_1 < 0xff) {
  VAR_2->status = 1;
 } else {
  VAR_2->flag = 1;
 }

 return VAR_1;
}
