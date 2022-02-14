
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proname; int prosrc; } ;
typedef TYPE_1__ parse_error_callback_arg ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 parse_error_callback_arg *VAR_1 = (parse_error_callback_arg *) VAR_0;


 if (!FUNC_1(VAR_1->prosrc))
 {

  FUNC_0("SQL function \"%s\"", VAR_1->proname);
 }
}
