
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut16 ;
struct TYPE_4__ {int f; int d; int n; int k; int b; int m; } ;
typedef TYPE_1__ PicMidrangeOpArgsVal ;
typedef int PicMidrangeOpArgs ;



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

 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1 (ut16 VAR_14,
         PicMidrangeOpArgs VAR_15,
         PicMidrangeOpArgsVal *VAR_16) {

 FUNC_0 (VAR_16, 0, sizeof (PicMidrangeOpArgsVal));

 switch (VAR_15) {
 case 128: return;
 case 134:
  VAR_16->f = VAR_14 & VAR_7;
  return;
 case 131:
  VAR_16->f = VAR_14 & VAR_11;
  return;
 case 137:
  VAR_16->f = VAR_14 & VAR_2;
  VAR_16->d =
   (VAR_14 & VAR_1) >> 7;
  return;
 case 135:
  VAR_16->n =
   (VAR_14 & VAR_6) >> 6;
  VAR_16->k = VAR_14 & VAR_5;
  return;
 case 133:
  VAR_16->b =
   (VAR_14 & VAR_8) >> 7;
  VAR_16->f = VAR_14 & VAR_9;
  return;
 case 132:
  VAR_16->k = VAR_14 & VAR_10;
  return;
 case 130:
  VAR_16->k = VAR_14 & VAR_12;
  return;
 case 129:
  VAR_16->k = VAR_14 & VAR_13;
  return;
 case 138:
  VAR_16->k = VAR_14 & VAR_0;
  return;
 case 136:
  VAR_16->n =
   (VAR_14 & VAR_4) >> 2;
  VAR_16->m = VAR_14 & VAR_3;
  return;
 }
}
