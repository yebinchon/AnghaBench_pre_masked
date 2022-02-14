
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proname; int prosrc; } ;
typedef TYPE_1__ inline_error_callback_arg ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 inline_error_callback_arg *VAR_1 = (inline_error_callback_arg *) VAR_0;
 int VAR_2;


 VAR_2 = FUNC_2();
 if (VAR_2 > 0)
 {
  FUNC_1(0);
  FUNC_3(VAR_2);
  FUNC_4(VAR_1->prosrc);
 }

 FUNC_0("SQL function \"%s\" during inlining", VAR_1->proname);
}
