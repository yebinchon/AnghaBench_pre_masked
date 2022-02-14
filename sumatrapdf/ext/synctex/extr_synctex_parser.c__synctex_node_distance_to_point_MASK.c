
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int v; int h; } ;
typedef TYPE_2__ synctex_point_t ;
typedef TYPE_3__* synctex_node_t ;
typedef int synctex_bool_t ;
struct TYPE_14__ {TYPE_1__* class; } ;
struct TYPE_12__ {int type; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
int FUNC_6(synctex_point_t VAR_1, synctex_node_t VAR_2, synctex_bool_t VAR_3) {



 int VAR_4 = VAR_0;
 if (VAR_2) {
  int VAR_5,VAR_6,VAR_7,VAR_8;
  switch(VAR_2->class->type) {
   case 130:
   case 128:
   case 133:
   case 129:

    VAR_5 = FUNC_3(VAR_2);
    VAR_6 = VAR_5 + FUNC_2(VAR_2);
    VAR_7 = FUNC_4(VAR_2);
    VAR_8 = VAR_7 + FUNC_0(VAR_2);
    VAR_7 -= FUNC_1(VAR_2);

    if (VAR_1.v<VAR_7) {
     if (VAR_1.h<VAR_5) {

      VAR_4 = VAR_7 - VAR_1.v + VAR_5 - VAR_1.h;
     } else if (VAR_1.h<=VAR_6) {

      VAR_4 = VAR_7 - VAR_1.v;
     } else {

      VAR_4 = VAR_7 - VAR_1.v + VAR_1.h - VAR_6;
     }
    } else if (VAR_1.v<=VAR_8) {
     if (VAR_1.h<VAR_5) {

      VAR_4 = VAR_5 - VAR_1.h;
     } else if (VAR_1.h<=VAR_6) {

      VAR_4 = 0;
     } else {

      VAR_4 = VAR_1.h - VAR_6;
     }
    } else {
     if (VAR_1.h<VAR_5) {

      VAR_4 = VAR_1.v - VAR_8 + VAR_5 - VAR_1.h;
     } else if (VAR_1.h<=VAR_6) {

      VAR_4 = VAR_1.v - VAR_8;
     } else {

      VAR_4 = VAR_1.v - VAR_8 + VAR_1.h - VAR_6;
     }
    }
    break;
   case 132:
    VAR_6 = FUNC_5(VAR_2);
    if (VAR_6<0) {
     VAR_5 = FUNC_3(VAR_2);
     VAR_6 = VAR_5 - VAR_6;
    } else {
     VAR_5 = -VAR_6;
     VAR_6 = FUNC_3(VAR_2);
     VAR_5 += VAR_6;
    }
    VAR_7 = FUNC_4(VAR_2);
    if (VAR_1.h<VAR_5) {
     if (VAR_1.v>VAR_7) {
      VAR_4 = VAR_1.v - VAR_7 + VAR_5 - VAR_1.h;
     } else {
      VAR_4 = VAR_7 - VAR_1.v + VAR_5 - VAR_1.h;
     }
    } else if (VAR_1.h>VAR_6) {
     if (VAR_1.v>VAR_7) {
      VAR_4 = VAR_1.v - VAR_7 + VAR_1.h - VAR_6;
     } else {
      VAR_4 = VAR_7 - VAR_1.v + VAR_1.h - VAR_6;
     }
    } else if (VAR_1.v>VAR_7) {
     VAR_4 = VAR_1.v - VAR_7;
    } else {
     VAR_4 = VAR_7 - VAR_1.v;
    }
    break;
   case 134:
   case 131:
    VAR_5 = FUNC_3(VAR_2);
    VAR_7 = FUNC_4(VAR_2);
    if (VAR_1.h<VAR_5) {
     if (VAR_1.v>VAR_7) {
      VAR_4 = VAR_1.v - VAR_7 + VAR_5 - VAR_1.h;
     } else {
      VAR_4 = VAR_7 - VAR_1.v + VAR_5 - VAR_1.h;
     }
    } else if (VAR_1.v>VAR_7) {
     VAR_4 = VAR_1.v - VAR_7 + VAR_1.h - VAR_5;
    } else {
     VAR_4 = VAR_7 - VAR_1.v + VAR_1.h - VAR_5;
    }
    break;
  }
 }
 return VAR_4;
}
