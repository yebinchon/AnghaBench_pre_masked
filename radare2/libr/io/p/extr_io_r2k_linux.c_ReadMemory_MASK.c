
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct r2k_data {size_t pid; size_t addr; int len; int* buff; } ;
struct TYPE_6__ {int (* cb_printf ) (char*) ;} ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ RIODesc ;
typedef TYPE_2__ RIO ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,struct r2k_data*) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int*,int,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

int FUNC_8 (RIO *VAR_0, RIODesc *VAR_1, int VAR_2, size_t VAR_3, size_t VAR_4, ut8 *VAR_5, int VAR_6) {
 int VAR_7 = -1;
 int VAR_8, VAR_9;
 ut64 VAR_10, VAR_11;
 bool VAR_12 = 0;
 ut8 VAR_13;

 if (VAR_1 && VAR_1->data > 0 && VAR_5) {
  struct r2k_data VAR_14;

  VAR_14.pid = VAR_3;
  VAR_14.addr = VAR_4;
  VAR_14.len = VAR_6;
  VAR_14.buff = (ut8 *) FUNC_0 (VAR_6 + 1, 1);
  if (!VAR_14.buff) {
   return -1;
  }

  VAR_7 = FUNC_3 ((int)(size_t)VAR_1->data, VAR_2, &VAR_14);
  if (!VAR_7) {
   FUNC_4 (VAR_5, VAR_14.buff, VAR_6);
   VAR_7 = VAR_6;
  } else {
   VAR_13 = 0xff;
   VAR_12 = 0;
   VAR_11 = 0;
   VAR_8 = FUNC_2();
   VAR_10 = VAR_4 + VAR_8;
   VAR_10 -= (VAR_10 % VAR_8);
   if ((VAR_6 - (int)(VAR_10 - VAR_4)) > 0) {
    VAR_14.len = VAR_10 - VAR_4;
    VAR_7 = FUNC_3 ((int)(size_t)VAR_1->data, VAR_2, &VAR_14);
    if (!VAR_7) {
     FUNC_4 (VAR_5 + VAR_11, VAR_14.buff, VAR_10 - VAR_4);
     VAR_12 = 1;
    } else {
     FUNC_5 (VAR_5 + VAR_11, VAR_13, VAR_10 - VAR_4);
    }

    VAR_11 = VAR_10 - VAR_4;
    VAR_9 = VAR_6 - VAR_11;
    while (VAR_9 >= VAR_8) {
     VAR_14.addr = VAR_10;
     VAR_14.len = VAR_8;

     VAR_7 = FUNC_3 ((int)(size_t)VAR_1->data, VAR_2, &VAR_14);
     if (!VAR_7) {
      FUNC_4 (VAR_5 + VAR_11, VAR_14.buff, VAR_8);
      VAR_12 = 1;
     } else {
      FUNC_5 (VAR_5 + VAR_11, VAR_13, VAR_8);
     }
     VAR_10 += VAR_8;
     VAR_11 += VAR_8;
     VAR_9 -= VAR_8;
    }

    VAR_14.addr = VAR_10;
    VAR_14.len = VAR_9;
    VAR_7 = FUNC_3 ((int)(size_t)VAR_1->data, VAR_2, &VAR_14);
    if (!VAR_7) {
     FUNC_4 (VAR_5 + VAR_11, VAR_14.buff, VAR_9);
     VAR_12 = 1;
    } else {
     FUNC_5 (VAR_5 + VAR_11, VAR_13, VAR_9);
    }
   }
   VAR_7 = VAR_12 ? VAR_6 : -1;
  }

  FUNC_1 (VAR_14.buff);
 } else if (!VAR_5) {
  VAR_0->cb_printf ("Invalid input buffer.\n");
 } else {
  VAR_0->cb_printf ("IOCTL device not initialized.\n");
 }
 return VAR_7;
}
