
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ XMLRPC_REQUEST ;
struct TYPE_6__ {int encoding; } ;
struct TYPE_5__ {int member_0; } ;
struct TYPE_7__ {TYPE_2__ xml_elem_opts; TYPE_1__ member_0; } ;
typedef TYPE_3__ STRUCT_XMLRPC_REQUEST_INPUT_OPTIONS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,TYPE_3__*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_1 ;

void FUNC_9(char *VAR_2, int VAR_3, char *VAR_4, zval* VAR_5, zval *VAR_6)
{
 XMLRPC_REQUEST VAR_7;
 STRUCT_XMLRPC_REQUEST_INPUT_OPTIONS VAR_8 = {{0}};
 const char *VAR_9;
 VAR_8.xml_elem_opts.encoding = VAR_4 ? FUNC_8(VAR_4) : VAR_0;


 VAR_7 = FUNC_0(VAR_2, VAR_3, &VAR_8);
 if (VAR_7) {
  FUNC_7(VAR_6);

  FUNC_5(FUNC_2(VAR_7), VAR_6);

  if (FUNC_4(VAR_7) == VAR_1) {
   if (VAR_5) {
    VAR_9 = FUNC_3(VAR_7);
    if (VAR_9) {
     FUNC_6(VAR_5, VAR_9);
    } else {
     FUNC_7(VAR_6);
    }
   }
  }


  FUNC_1(VAR_7, 1);
 }
}
