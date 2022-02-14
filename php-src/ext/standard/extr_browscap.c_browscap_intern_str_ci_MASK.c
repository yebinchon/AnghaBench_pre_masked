
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
typedef int zend_bool ;
struct TYPE_3__ {int str_interned; } ;
typedef TYPE_1__ browscap_parser_ctx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int *,int *,int *) ;
 int * FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int ) ;

__attribute__((used)) static zend_string *FUNC_11(
  browscap_parser_ctx *VAR_1, zend_string *VAR_2, zend_bool VAR_3) {
 zend_string *VAR_4;
 zend_string *VAR_5;
 FUNC_0(VAR_0);

 FUNC_1(VAR_4, FUNC_3(VAR_2), VAR_0);
 FUNC_8(FUNC_4(VAR_4), FUNC_4(VAR_2), FUNC_3(VAR_2));
 VAR_5 = FUNC_6(&VAR_1->str_interned, VAR_4);

 if (VAR_5) {
  FUNC_9(VAR_5);
 } else {
  VAR_5 = FUNC_10(VAR_4, VAR_3);
  if (VAR_3) {
   VAR_5 = FUNC_7(VAR_5);
  }
  FUNC_5(&VAR_1->str_interned, VAR_5, VAR_5);
 }

 FUNC_2(VAR_4, VAR_0);
 return VAR_5;
}
