
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
typedef scalar_t__ zend_bool ;
struct TYPE_3__ {int str_interned; } ;
typedef TYPE_1__ browscap_parser_ctx ;


 int FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static zend_string *FUNC_5(
  browscap_parser_ctx *VAR_0, zend_string *VAR_1, zend_bool VAR_2) {
 zend_string *VAR_3 = FUNC_1(&VAR_0->str_interned, VAR_1);
 if (VAR_3) {
  FUNC_3(VAR_3);
 } else {
  VAR_3 = FUNC_4(VAR_1);
  if (VAR_2) {
   VAR_3 = FUNC_2(VAR_1);
  }
  FUNC_0(&VAR_0->str_interned, VAR_3, VAR_3);
 }

 return VAR_3;
}
