
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int xtr_data; int * buf; } ;
struct TYPE_12__ {char* (* signature ) (TYPE_3__*,int) ;} ;
struct TYPE_11__ {int loaded; } ;
typedef int RBuffer ;
typedef TYPE_1__ RBinXtrData ;
typedef TYPE_2__ RBinPlugin ;
typedef TYPE_3__ RBinFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_3__*,int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int ,char*,scalar_t__) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 (char*) ;
 TYPE_1__* FUNC_17 (int ,int ) ;
 scalar_t__ FUNC_18 (int *,char*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (scalar_t__) ;
 int VAR_5 ;
 char* FUNC_21 (char*,char) ;
 char* FUNC_22 (char const*) ;
 char* FUNC_23 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_24(const char *VAR_6) {
 char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 bool VAR_10 = 1;


 if (!(VAR_7 = FUNC_22 (VAR_6))) {
  return 0;
 }
 if ((VAR_8 = FUNC_21 (VAR_7, '/'))) {
  *VAR_8++ = 0;
  if ((VAR_9 = FUNC_21 (VAR_8, '/'))) {
   VAR_9[0] = '\0';
   VAR_9++;
  }
 }
 if (!VAR_4) {
  VAR_4 = VAR_3;
 }
 RBinFile *VAR_11 = FUNC_3 (VAR_2);
 if (VAR_11) {
  RBuffer *VAR_12 = FUNC_14 (VAR_11->buf);
  FUNC_13 (VAR_11->buf);
  VAR_11->buf = VAR_12;
 }

 switch (VAR_7[0]) {
 case 'e':
  VAR_10 = FUNC_8 (VAR_2, FUNC_18 (((void*)0), VAR_8));
  if (VAR_10) {
   VAR_10 = FUNC_9 (VAR_2, VAR_4);
  }
  break;
 case 'd':
  if (!VAR_8) {
   goto _rabin_do_operation_error;
  }
  switch (*VAR_8) {
  case 's':
   if (VAR_9) {
    if (!FUNC_20 (FUNC_18 (((void*)0), VAR_9))) {
     goto error;
    }
   } else if (!FUNC_20 (0)) {
    goto error;
   }
   break;
  case 'S':
   if (!VAR_9) {
    goto _rabin_do_operation_error;
   }
   if (!FUNC_0 (VAR_9)) {
    goto error;
   }
   break;
  default:
   goto _rabin_do_operation_error;
  }
  break;
 case 'a':
  if (!VAR_8) {
   goto _rabin_do_operation_error;
  }
  switch (*VAR_8) {
  case 'l':
   if (!VAR_9 || !FUNC_7 (VAR_2, VAR_9)) {
    goto error;
   }
   VAR_10 = FUNC_9 (VAR_2, VAR_4);
   break;
  default:
   goto _rabin_do_operation_error;
  }
  break;
 case 'R':
  FUNC_10 (VAR_2);
  VAR_10 = FUNC_9 (VAR_2, VAR_4);
  break;
 case 'C':
  {
  RBinFile *VAR_13 = FUNC_3 (VAR_2);
  RBinPlugin *VAR_14 = FUNC_4 (VAR_13);
  if (!VAR_14 && VAR_13) {

   if (VAR_13->xtr_data) {

    RBinXtrData *VAR_15 = FUNC_17 (VAR_13->xtr_data, 0);
    if (VAR_15 && !VAR_15->loaded && !FUNC_5 (VAR_2, VAR_13,
     VAR_1, FUNC_6 (VAR_2), VAR_15)) {
     break;
    }
   }
   VAR_14 = FUNC_4 (VAR_13);
   if (!VAR_14) {
    break;
   }
  }
  if (VAR_14 && VAR_14->signature) {
   char *VAR_16 = VAR_14->signature (VAR_13, VAR_5 == VAR_0);
   if (VAR_16) {
    FUNC_16 (VAR_16);
    FUNC_15 ();
    FUNC_2 (VAR_16);
   }
  }
  }
  break;
 case 'r':
  FUNC_12 (VAR_2, VAR_8, FUNC_18 (((void*)0), VAR_9));
  VAR_10 = FUNC_9 (VAR_2, VAR_4);
  break;
 case 'p':
  {
   int VAR_17 = (int)FUNC_18 (((void*)0), VAR_9);
   if (!VAR_17) {
    VAR_17 = FUNC_19 (VAR_9);
   }
   FUNC_11 (VAR_2, VAR_8, VAR_17);
   VAR_10 = FUNC_9 (VAR_2, VAR_4);
  }
  break;
 default:
 _rabin_do_operation_error:
  FUNC_1 ("Unknown operation. use -O help\n");
  goto error;
 }
 if (!VAR_10) {
  FUNC_1 ("Cannot dump :(\n");
 }
 FUNC_2 (VAR_7);
 return 1;
error:
 FUNC_2 (VAR_7);
 return 0;
}
