
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs4215 {int* data; int* ctrl; int version; int precision; int channels; scalar_t__ status; } ;
struct TYPE_2__ {int csval; int xtal; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_5(struct cs4215 *VAR_12)
{







 VAR_12->data[0] = FUNC_1(0x20) | VAR_3 | VAR_5;
 VAR_12->data[1] = FUNC_4(0x20) | VAR_10;
 VAR_12->data[2] = FUNC_0(0x8) | VAR_4 | VAR_7 | VAR_8;
 VAR_12->data[3] = FUNC_3(0x8) | FUNC_2(0xf);
 VAR_12->ctrl[0] = VAR_9 | VAR_6;
 VAR_12->ctrl[1] = VAR_1 | VAR_2[0].csval;
 VAR_12->ctrl[2] = VAR_11 | VAR_0 | VAR_2[0].xtal;
 VAR_12->ctrl[3] = 0;

 VAR_12->status = 0;
 VAR_12->version = 0xff;
 VAR_12->precision = 8;
 VAR_12->channels = 1;

 return 0;
}
