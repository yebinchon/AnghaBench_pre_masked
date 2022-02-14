
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_ulong ;
struct TYPE_6__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_7__ {char* convbuf; int stmt; TYPE_3__* cols; } ;
typedef TYPE_2__ pdo_odbc_stmt ;
struct TYPE_8__ {char* data; int fetched_len; scalar_t__ is_unicode; scalar_t__ is_long; } ;
typedef TYPE_3__ pdo_odbc_column ;
typedef scalar_t__ RETCODE ;





 scalar_t__ FUNC_0 (int ,int,int ,char*,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char*,int) ;
 char* FUNC_4 (char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,char*,int,int*) ;

__attribute__((used)) static int FUNC_7(pdo_stmt_t *VAR_5, int VAR_6, char **VAR_7, zend_ulong *VAR_8, int *VAR_9)
{
 pdo_odbc_stmt *VAR_10 = (pdo_odbc_stmt*)VAR_5->driver_data;
 pdo_odbc_column *VAR_11 = &VAR_10->cols[VAR_6];
 zend_ulong VAR_12;


 if (VAR_11->is_long) {
  zend_ulong VAR_13 = 0;
  char *VAR_14;
  RETCODE VAR_15;





  VAR_15 = FUNC_0(VAR_10->stmt, VAR_6+1, VAR_11->is_unicode ? VAR_0 : VAR_1, VAR_11->data,
    256, &VAR_11->fetched_len);

  if (VAR_15 == VAR_3) {


   goto in_data;
  }

  if (VAR_15 == VAR_4) {
   char *VAR_16;

   VAR_16 = FUNC_2(256);
   VAR_14 = FUNC_4(VAR_11->data, 256);
   VAR_13 = 255;

   do {
    VAR_11->fetched_len = 0;

    VAR_15 = FUNC_0(VAR_10->stmt, VAR_6+1, VAR_1, VAR_16, 256, &VAR_11->fetched_len);


    if (VAR_15==VAR_4) {



     VAR_14 = FUNC_3(VAR_14, VAR_13 + 255+1);
     FUNC_5(VAR_14 + VAR_13, VAR_16, 255);
     VAR_13 = VAR_13 + 255;
    } else if (VAR_15==VAR_3) {
     VAR_14 = FUNC_3(VAR_14, VAR_13 + VAR_11->fetched_len+1);
     FUNC_5(VAR_14 + VAR_13, VAR_16, VAR_11->fetched_len);
     VAR_13 = VAR_13 + VAR_11->fetched_len;
    } else {

     break;
    }

   } while (1);

   FUNC_1(VAR_16);


   VAR_14[VAR_13] = '\0';

   *VAR_7 = VAR_14;
   *VAR_9 = 1;
   *VAR_8 = VAR_13;
   if (VAR_11->is_unicode) {
    goto unicode_conv;
   }
   return 1;
  }


  *VAR_7 = ((void*)0);
  *VAR_8 = 0;
  return 1;
 }

in_data:

 if (VAR_11->fetched_len == VAR_2) {

  *VAR_7 = ((void*)0);
  *VAR_8 = 0;
  return 1;
 } else if (VAR_11->fetched_len >= 0) {

  *VAR_7 = VAR_11->data;
  *VAR_8 = VAR_11->fetched_len;
  if (VAR_11->is_unicode) {
   goto unicode_conv;
  }
  return 1;
 } else {

  *VAR_7 = ((void*)0);
  *VAR_8 = 0;
  return 1;
 }

 unicode_conv:
 switch (FUNC_6(VAR_5, VAR_11->is_unicode, *VAR_7, *VAR_8, &VAR_12)) {
  case 130:

  case 129:

   return 1;

  case 128:
   if (*VAR_9) {
    FUNC_1(*VAR_7);
   }
   *VAR_7 = FUNC_2(VAR_12 + 1);
   *VAR_8 = VAR_12;
   FUNC_5(*VAR_7, VAR_10->convbuf, VAR_12+1);
   *VAR_9 = 1;
   return 1;
 }
 return 1;
}
