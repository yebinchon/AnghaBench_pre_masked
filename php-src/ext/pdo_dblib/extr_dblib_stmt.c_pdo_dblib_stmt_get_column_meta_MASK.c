
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_long ;
struct TYPE_7__ {scalar_t__ column_count; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_8__ {TYPE_3__* H; } ;
typedef TYPE_2__ pdo_dblib_stmt ;
struct TYPE_9__ {int link; } ;
typedef TYPE_3__ pdo_dblib_db_handle ;
struct TYPE_10__ {scalar_t__ scale; scalar_t__ precision; } ;
typedef TYPE_4__ DBTYPEINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 TYPE_4__* FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(pdo_stmt_t *VAR_3, zend_long VAR_4, zval *VAR_5)
{
 pdo_dblib_stmt *VAR_6 = (pdo_dblib_stmt*)VAR_3->driver_data;
 pdo_dblib_db_handle *VAR_7 = VAR_6->H;
 DBTYPEINFO* VAR_8;
 int VAR_9;

 if(VAR_4 >= VAR_3->column_count || VAR_4 < 0) {
  return VAR_0;
 }

 FUNC_2(VAR_5);

 VAR_8 = FUNC_6(VAR_7->link, VAR_4+1);

 if(!VAR_8) return VAR_0;

 VAR_9 = FUNC_5(VAR_7->link, VAR_4+1);

 FUNC_0(VAR_5, "max_length", FUNC_3(VAR_7->link, VAR_4+1) );
 FUNC_0(VAR_5, "precision", (int) VAR_8->precision );
 FUNC_0(VAR_5, "scale", (int) VAR_8->scale );
 FUNC_1(VAR_5, "column_source", FUNC_4(VAR_7->link, VAR_4+1));
 FUNC_1(VAR_5, "native_type", FUNC_8(VAR_9));
 FUNC_0(VAR_5, "native_type_id", VAR_9);
 FUNC_0(VAR_5, "native_usertype_id", FUNC_7(VAR_7->link, VAR_4+1));

 switch (VAR_9) {
  case 131:
  case 130:
  case 129:
  case 128:
   FUNC_0(VAR_5, "pdo_type", VAR_1);
   break;
  default:
   FUNC_0(VAR_5, "pdo_type", VAR_2);
   break;
 }

 return 1;
}
