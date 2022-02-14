
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int synctex_point_t ;
typedef TYPE_2__* synctex_node_t ;
typedef int synctex_bool_t ;
struct TYPE_12__ {TYPE_1__* class; } ;
struct TYPE_11__ {int type; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 int FUNC_3 (int ,TYPE_2__*,int ) ;



__attribute__((used)) static synctex_node_t FUNC_4(synctex_point_t VAR_1,synctex_node_t VAR_2, synctex_bool_t VAR_3) {
 if (VAR_2) {
  synctex_node_t VAR_4 = ((void*)0);
  synctex_node_t VAR_5 = ((void*)0);
  switch(VAR_2->class->type) {
   case 128:
   case 129:

    if ((VAR_5 = FUNC_0(VAR_2))) {
     do {
      if ((VAR_4 = FUNC_4(VAR_1,VAR_5,VAR_3))) {
       return VAR_4;
      }
     } while((VAR_5 = FUNC_1(VAR_5)));
    }

    if (FUNC_3(VAR_1,VAR_2,VAR_3)) {



     if ((VAR_2->class->type == 128) && (VAR_5 = FUNC_0(VAR_2))) {
      int VAR_6 = VAR_0;
      do {
       if (FUNC_0(VAR_5)) {
        int VAR_7 = FUNC_2(VAR_1,VAR_5,VAR_3);
        if (VAR_7 < VAR_6) {
         VAR_6 = VAR_7;
         VAR_2 = VAR_5;
        }
       }
      } while((VAR_5 = FUNC_1(VAR_5)));
     }
     return VAR_2;
    }
  }
 }
 return ((void*)0);
}
