
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {int abstract; } ;
typedef TYPE_1__ php_stream_filter ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int *,int *,int *,int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(php_stream_filter *VAR_0)
{
 zval *VAR_1 = &VAR_0->abstract;
 zval VAR_2;
 zval VAR_3;

 if (VAR_1 == ((void*)0)) {

  return;
 }

 FUNC_0(&VAR_2, "onclose", sizeof("onclose")-1);

 FUNC_1(((void*)0),
   VAR_1,
   &VAR_2,
   &VAR_3,
   0, ((void*)0));

 FUNC_2(&VAR_3);
 FUNC_2(&VAR_2);


 FUNC_2(VAR_1);
}
