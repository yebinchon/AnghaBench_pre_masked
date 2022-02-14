
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* synctex_scanner_t ;
struct TYPE_14__ {float h; float v; int member_1; int member_0; } ;
typedef TYPE_2__ synctex_point_t ;
typedef int * synctex_node_t ;
struct TYPE_15__ {int * left; int * right; int * member_1; int * member_0; } ;
typedef TYPE_3__ synctex_node_set_t ;
struct TYPE_16__ {scalar_t__ left; scalar_t__ right; int member_1; int member_0; } ;
typedef TYPE_4__ synctex_distances_t ;
struct TYPE_13__ {float unit; float x_offset; float y_offset; int * sheet; } ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (TYPE_2__,int *,int ) ;
 int FUNC_8 (TYPE_2__,int *,TYPE_3__*,TYPE_4__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_2__,int *,int ) ;
 int * FUNC_10 (int *,int *) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int) ;
 int VAR_5 ;
 TYPE_1__* FUNC_13 (TYPE_1__*) ;

int FUNC_14(synctex_scanner_t VAR_6,int VAR_7,float VAR_8,float VAR_9) {
 synctex_node_t VAR_10 = ((void*)0);
 synctex_node_t VAR_11 = ((void*)0);
 synctex_node_t VAR_12 = ((void*)0);
 synctex_point_t VAR_13 = {0,0};
 synctex_node_set_t VAR_14 = {((void*)0),((void*)0)};
 synctex_distances_t VAR_15 = {VAR_0,VAR_0};
 synctex_node_t VAR_16 = ((void*)0);
 if (((void*)0) == (VAR_6 = FUNC_13(VAR_6)) || 0 >= VAR_6->unit) {
  return 0;
 }

 VAR_13.h = (VAR_8-VAR_6->x_offset)/VAR_6->unit;
 VAR_13.v = (VAR_9-VAR_6->y_offset)/VAR_6->unit;

 FUNC_11(VAR_3);
 VAR_3 = VAR_2 = VAR_1 = ((void*)0);

 VAR_10 = VAR_6->sheet;
 while((VAR_10) && FUNC_4(VAR_10) != VAR_7) {
  VAR_10 = FUNC_5(VAR_10);
 }
 if (((void*)0) == VAR_10) {
  return -1;
 }






 if ((VAR_11 = FUNC_3(VAR_10))) {
  do {
   if (FUNC_9(VAR_13,VAR_11,VAR_5)) {

end:

    if ((VAR_12 = FUNC_3(VAR_11))) {
     do {
      if (FUNC_9(VAR_13,VAR_12,VAR_5)) {
       VAR_11 = FUNC_10(VAR_12,VAR_11);
      }
     } while((VAR_12 = FUNC_3(VAR_12)));
    }

    if ((VAR_16 = FUNC_7(VAR_13,VAR_11,VAR_5))) {
     VAR_11 = VAR_16;
    }
    FUNC_8(VAR_13,VAR_11,&VAR_14,&VAR_15,VAR_5);
    if (VAR_14.right && VAR_14.left) {
     if ((FUNC_6(VAR_14.right)!=FUNC_6(VAR_14.left))
       || (FUNC_2(VAR_14.right)!=FUNC_2(VAR_14.left))
        || (FUNC_1(VAR_14.right)!=FUNC_1(VAR_14.left))) {
      if ((VAR_3 = FUNC_12(2*sizeof(synctex_node_t)))) {
       if (VAR_15.left>VAR_15.right) {
        ((synctex_node_t *)VAR_3)[0] = VAR_14.right;
        ((synctex_node_t *)VAR_3)[1] = VAR_14.left;
       } else {
        ((synctex_node_t *)VAR_3)[0] = VAR_14.left;
        ((synctex_node_t *)VAR_3)[1] = VAR_14.right;
       }
       VAR_2 = VAR_3 + 2*sizeof(synctex_node_t);
       VAR_1 = ((void*)0);
       return (VAR_2-VAR_3)/sizeof(synctex_node_t);
      }
      return VAR_4;
     }


     if (VAR_15.left>VAR_15.right) {
      VAR_14.left = VAR_14.right;
     }
     VAR_14.right = ((void*)0);
    } else if (VAR_14.right) {
     VAR_14.left = VAR_14.right;
    } else if (!VAR_14.left){
     VAR_14.left = VAR_11;
    }
    if ((VAR_3 = FUNC_12(sizeof(synctex_node_t)))) {
     * (synctex_node_t *)VAR_3 = VAR_14.left;
     VAR_2 = VAR_3 + sizeof(synctex_node_t);
     VAR_1 = ((void*)0);
     return (VAR_2-VAR_3)/sizeof(synctex_node_t);
    }
    return VAR_4;
   }
  } while ((VAR_11 = FUNC_3(VAR_11)));



 }

 if ((VAR_11 = FUNC_0(VAR_10))) {
  goto end;
 }
 return 0;
}
