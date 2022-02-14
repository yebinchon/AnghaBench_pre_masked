
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int h; } ;
typedef TYPE_2__ synctex_point_t ;
typedef TYPE_3__* synctex_node_t ;
typedef int synctex_bool_t ;
struct TYPE_13__ {TYPE_1__* class; } ;
struct TYPE_11__ {int type; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
int FUNC_5(synctex_point_t VAR_1, synctex_node_t VAR_2, synctex_bool_t VAR_3) {
 if (VAR_2) {
  int VAR_4,VAR_5,VAR_6;
  switch(VAR_2->class->type) {
   case 133:

    VAR_4 = VAR_3?FUNC_3(VAR_2):FUNC_2(VAR_2);
    VAR_6 = VAR_4 + (VAR_3?FUNC_1(VAR_2):FUNC_0(VAR_2));

    if (VAR_1.h<VAR_4) {
     return VAR_4 - VAR_1.h;
    } else if (VAR_1.h>VAR_6) {
     return VAR_6 - VAR_1.h;
    } else {
     return 0;
    }
    break;
   case 130:
   case 128:
   case 129:


    VAR_4 = FUNC_2(VAR_2);
    VAR_6 = VAR_4 + FUNC_0(VAR_2);

    if (VAR_1.h<VAR_4) {
     return VAR_4 - VAR_1.h;
    } else if (VAR_1.h>VAR_6) {
     return VAR_6 - VAR_1.h;
    } else {
     return 0;
    }
    break;
   case 132:




    VAR_6 = FUNC_4(VAR_2);
    if (VAR_6<0) {
     VAR_4 = FUNC_2(VAR_2);
     VAR_6 = VAR_4 - VAR_6;
    } else {
     VAR_4 = -VAR_6;
     VAR_6 = FUNC_2(VAR_2);
     VAR_4 += VAR_6;
    }
    VAR_5 = (VAR_4+VAR_6)/2;
    if (VAR_1.h<VAR_4) {
     return VAR_4 - VAR_1.h + 1;
    } else if (VAR_1.h>VAR_6) {
     return VAR_6 - VAR_1.h - 1;
    } else if (VAR_1.h>VAR_5) {

     return VAR_6 - VAR_1.h + 1;
    } else {
     return VAR_4 - VAR_1.h - 1;
    }
   case 134:
   case 131:
    return FUNC_2(VAR_2) - VAR_1.h;
  }
 }
 return VAR_0;
}
