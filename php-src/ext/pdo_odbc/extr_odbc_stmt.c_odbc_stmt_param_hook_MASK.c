
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zval ;
typedef size_t zend_ulong ;
struct pdo_bound_param_data {int param_type; int max_value_len; int parameter; TYPE_5__* driver_data; int paramno; scalar_t__ is_param; } ;
struct TYPE_12__ {size_t st_size; } ;
struct TYPE_13__ {TYPE_1__ sb; } ;
typedef TYPE_2__ php_stream_statbuf ;
typedef int php_stream ;
struct TYPE_14__ {scalar_t__ driver_data; } ;
typedef TYPE_3__ pdo_stmt_t ;
struct TYPE_15__ {char* convbuf; int stmt; } ;
typedef TYPE_4__ pdo_odbc_stmt ;
struct TYPE_16__ {int len; char* outbuf; int is_unicode; int paramtype; } ;
typedef TYPE_5__ pdo_odbc_param ;
typedef enum pdo_param_event { ____Placeholder_pdo_param_event } pdo_param_event ;
typedef int SWORD ;
typedef int SQLUSMALLINT ;
typedef int SQLULEN ;
typedef char* SQLPOINTER ;
typedef int RETCODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int const VAR_3 ;

 int const FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int,int,int,int,char*,int,int*) ;
 int FUNC_2 (int ,int ,int*,int*,int*,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (size_t) ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 size_t FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_5__*) ;
 void* FUNC_13 (int) ;
 int FUNC_14 (char*,char*,size_t) ;
 int FUNC_15 (TYPE_4__*,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (TYPE_3__*,int ,char*,size_t,size_t*) ;
 int FUNC_18 (TYPE_3__*,int ,char*,size_t,size_t*) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,char*,int) ;
 int FUNC_21 (int *,TYPE_2__*) ;
 int FUNC_22 (size_t,int ) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static int FUNC_24(pdo_stmt_t *VAR_15, struct pdo_bound_param_data *VAR_16,
  enum pdo_param_event VAR_17)
{
 pdo_odbc_stmt *VAR_18 = (pdo_odbc_stmt*)VAR_15->driver_data;
 RETCODE VAR_19;
 SWORD VAR_20 = 0, VAR_21 = 0, VAR_22 = 0, VAR_23 = 0;
 SQLULEN VAR_24 = 0;
 pdo_odbc_param *VAR_25;
 zval *VAR_26;


 if (VAR_16->is_param) {

  switch (VAR_17) {
   case 133:
   case 134:
   case 131:

    break;

   case 132:
    VAR_25 = VAR_16->driver_data;
    if (VAR_25) {
     FUNC_12(VAR_25);
    }
    break;

   case 137:
   {

    switch (FUNC_0(VAR_16->param_type)) {
     case 130:
      break;

     case 129:
      return 0;

     default:
      break;
    }

    VAR_19 = FUNC_2(VAR_18->stmt, (SQLUSMALLINT) VAR_16->paramno+1, &VAR_20, &VAR_24, &VAR_22, &VAR_23);
    if (VAR_19 != VAR_12 && VAR_19 != VAR_13) {


     VAR_20 = FUNC_0(VAR_16->param_type) == 130 ?
         VAR_7 :
         VAR_8;
     VAR_24 = 4000;
     VAR_22 = 5;
     VAR_23 = 1;

     if (VAR_16->max_value_len > 0) {
      VAR_24 = VAR_16->max_value_len;
     }
    }
    if (VAR_20 == VAR_4 || VAR_20 == VAR_14 || VAR_20 == VAR_7) {
     VAR_21 = VAR_5;
    } else {
     VAR_21 = VAR_6;
    }

    VAR_25 = FUNC_13(sizeof(*VAR_25));
    VAR_16->driver_data = VAR_25;

    VAR_25->len = 0;
    VAR_25->outbuf = ((void*)0);

    VAR_25->is_unicode = FUNC_15(VAR_18, VAR_20);
    if (VAR_25->is_unicode) {

     VAR_21 = VAR_5;
    }

    if ((VAR_16->param_type & VAR_2) == VAR_2) {
     VAR_25->paramtype = VAR_10;
    } else if (VAR_16->max_value_len <= 0) {
     VAR_25->paramtype = VAR_9;
    } else {
     VAR_25->paramtype = VAR_11;
    }

    if (VAR_25->paramtype != VAR_9) {
     if (FUNC_0(VAR_16->param_type) != VAR_3) {

      VAR_25->len = VAR_16->max_value_len > 0 ? VAR_16->max_value_len : VAR_24;
      if (VAR_25->is_unicode) {
       VAR_25->len *= 2;
      }
      VAR_25->outbuf = FUNC_13(VAR_25->len + (VAR_25->is_unicode ? 2:1));
     }
    }

    if (FUNC_0(VAR_16->param_type) == 130 && VAR_25->paramtype != VAR_9) {
     FUNC_16("Can't bind a lob for output");
     return 0;
    }

    VAR_19 = FUNC_1(VAR_18->stmt, (SQLUSMALLINT) VAR_16->paramno+1,
      VAR_25->paramtype, VAR_21, VAR_20, VAR_24, VAR_22,
      VAR_25->paramtype == VAR_9 ?
       (SQLPOINTER)VAR_16 :
       VAR_25->outbuf,
      VAR_25->len,
      &VAR_25->len
      );

    if (VAR_19 == VAR_12 || VAR_19 == VAR_13) {
     return 1;
    }
    FUNC_16("SQLBindParameter");
    return 0;
   }

   case 135:
    VAR_25 = VAR_16->driver_data;
    if (!FUNC_6(VAR_16->parameter)) {
     VAR_26 = &VAR_16->parameter;
    } else {
     VAR_26 = FUNC_7(VAR_16->parameter);
    }

    if (FUNC_0(VAR_16->param_type) == 130) {
     if (FUNC_10(VAR_26) == VAR_1) {
      php_stream *VAR_27;
      php_stream_statbuf VAR_28;

      FUNC_19(VAR_27, VAR_26);

      if (!VAR_27) {
       return 0;
      }

      if (0 == FUNC_21(VAR_27, &VAR_28)) {
       if (VAR_25->outbuf) {
        int VAR_29, VAR_30;
        char *VAR_31 = VAR_25->outbuf;
        char *VAR_32 = VAR_25->outbuf + VAR_25->len;

        VAR_25->len = 0;
        do {
         VAR_30 = VAR_32 - VAR_31;
         if (VAR_30 == 0) {
          break;
         }
         if (VAR_30 > 8192)
          VAR_30 = 8192;
         VAR_29 = FUNC_20(VAR_27, VAR_31, VAR_30);
         if (VAR_29 == 0) {
          break;
         }
         VAR_31 += VAR_29;
         VAR_25->len += VAR_29;
        } while (1);

       } else {
        VAR_25->len = FUNC_3(VAR_28.sb.st_size);
       }
      } else {
       if (VAR_25->outbuf) {
        VAR_25->len = 0;
       } else {
        VAR_25->len = FUNC_3(0);
       }
      }
     } else {
      FUNC_11(VAR_26);
      if (VAR_25->outbuf) {
       VAR_25->len = FUNC_8(VAR_26);
       FUNC_14(VAR_25->outbuf, FUNC_9(VAR_26), VAR_25->len);
      } else {
       VAR_25->len = FUNC_3(FUNC_8(VAR_26));
      }
     }
    } else if (FUNC_10(VAR_26) == VAR_0 || FUNC_0(VAR_16->param_type) == VAR_3) {
     VAR_25->len = 128;
    } else {
     FUNC_11(VAR_26);
     if (VAR_25->outbuf) {
      zend_ulong VAR_33;
      switch (FUNC_18(VAR_15, VAR_25->is_unicode,
        FUNC_9(VAR_26),
        FUNC_8(VAR_26),
        &VAR_33)) {
       case 140:
       case 139:
        VAR_25->len = FUNC_8(VAR_26);
        FUNC_14(VAR_25->outbuf, FUNC_9(VAR_26), VAR_25->len);
        break;
       case 138:
        VAR_25->len = VAR_33;
        FUNC_14(VAR_25->outbuf, VAR_18->convbuf, VAR_25->len);
        break;
      }
     } else {
      VAR_25->len = FUNC_3(FUNC_8(VAR_26));
     }
    }
    return 1;

   case 136:
    VAR_25 = VAR_16->driver_data;

    if (VAR_25->outbuf) {
     zend_ulong VAR_34;
     char *VAR_35;
     zend_ulong VAR_36 = 0;

     if (FUNC_6(VAR_16->parameter)) {
      VAR_26 = FUNC_7(VAR_16->parameter);
     } else {
      VAR_26 = &VAR_16->parameter;
     }
     FUNC_23(VAR_26);
     FUNC_5(VAR_26);

     switch (VAR_25->len) {
      case 128:
       break;
      default:
       switch (FUNC_17(VAR_15, VAR_25->is_unicode, VAR_25->outbuf, VAR_25->len, &VAR_34)) {
        case 140:

        case 139:
         VAR_35 = VAR_25->outbuf;
         VAR_36 = VAR_25->len;
         break;
        case 138:
         VAR_35 = VAR_18->convbuf;
         VAR_36 = VAR_34;
         break;
       }

       FUNC_4(VAR_26, FUNC_22(VAR_36, 0));
       FUNC_14(FUNC_9(VAR_26), VAR_35, VAR_36);
       FUNC_9(VAR_26)[FUNC_8(VAR_26)] = '\0';
     }
    }
    return 1;
  }
 }
 return 1;
}
