
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ zend_off_t ;
struct pdo_pgsql_lob_self {int lfd; int conn; } ;
struct TYPE_3__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(php_stream *VAR_0, zend_off_t VAR_1, int VAR_2,
  zend_off_t *VAR_3)
{
 struct pdo_pgsql_lob_self *VAR_4 = (struct pdo_pgsql_lob_self*)VAR_0->abstract;



 zend_off_t VAR_5 = FUNC_0(VAR_4->conn, VAR_4->lfd, VAR_1, VAR_2);

 *VAR_3 = VAR_5;
 return VAR_5 >= 0 ? 0 : -1;
}
