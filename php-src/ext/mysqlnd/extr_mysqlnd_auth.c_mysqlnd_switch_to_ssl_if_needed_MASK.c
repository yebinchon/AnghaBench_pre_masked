
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t zend_ulong ;
typedef int enum_func_status ;
struct TYPE_12__ {unsigned int nr; } ;
struct TYPE_11__ {TYPE_1__* command; } ;
struct TYPE_10__ {scalar_t__ charset_name; } ;
struct TYPE_9__ {int (* enable_ssl ) (TYPE_3__* const,size_t const,size_t const,unsigned int) ;} ;
typedef TYPE_2__ MYSQLND_SESSION_OPTIONS ;
typedef TYPE_3__ MYSQLND_CONN_DATA ;
typedef TYPE_4__ MYSQLND_CHARSET ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_4__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__* const,size_t const,size_t const,unsigned int) ;

__attribute__((used)) static enum_func_status
FUNC_4(MYSQLND_CONN_DATA * const VAR_1,
        unsigned int VAR_2,
        const size_t VAR_3,
        const MYSQLND_SESSION_OPTIONS * const VAR_4,
        const zend_ulong VAR_5)
{
 enum_func_status VAR_6 = VAR_0;
 const MYSQLND_CHARSET * VAR_7;
 FUNC_0("mysqlnd_switch_to_ssl_if_needed");

 if (VAR_4->charset_name && (VAR_7 = FUNC_2(VAR_4->charset_name))) {
  VAR_2 = VAR_7->nr;
 }

 {
  const size_t VAR_8 = VAR_5;
  VAR_6 = VAR_1->command->enable_ssl(VAR_1, VAR_8, VAR_3, VAR_2);
 }
 FUNC_1(VAR_6);
}
