
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int t_intrc; int t_quitc; int t_suspc; int t_dsuspc; int sg_flags; int* c_cc; int c_iflag; int c_lflag; } ;
struct TYPE_12__ {int* c_cc; int c_iflag; int c_lflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*) ;
 TYPE_2__ VAR_28 ;
 TYPE_2__ VAR_29 ;
 TYPE_1__ VAR_30 ;
 TYPE_2__ VAR_31 ;
 TYPE_2__ VAR_32 ;
 TYPE_1__ VAR_33 ;
 TYPE_2__ VAR_34 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 TYPE_2__ VAR_35 ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(void)
{
  if (FUNC_0(0, VAR_11, &VAR_32) == 0) {
   VAR_25 = VAR_32.c_cc[VAR_19];
   VAR_26 = VAR_32.c_cc[VAR_21];
  }
  VAR_29 = VAR_32;
  VAR_29.c_iflag &= ~(VAR_0|VAR_7|VAR_9|VAR_8);
  VAR_29.c_iflag |= (VAR_4|VAR_5);
  VAR_29.c_lflag &= ~(VAR_2|VAR_6|VAR_1);
  VAR_29.c_cc[VAR_20] = 1;
  VAR_29.c_cc[VAR_23] = 0;
  FUNC_0(0, VAR_13, &VAR_29);


}
