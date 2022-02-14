
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ error; } ;
typedef TYPE_1__ MYSQLND_ERROR_LIST_ELEMENT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(void * VAR_2)
{
 MYSQLND_ERROR_LIST_ELEMENT * VAR_3 = (MYSQLND_ERROR_LIST_ELEMENT *) VAR_2;

 FUNC_0("mysqlnd_error_list_pdtor");
 if (VAR_3->error) {
  FUNC_1(VAR_3->error, VAR_1);
 }
 VAR_0;
}
