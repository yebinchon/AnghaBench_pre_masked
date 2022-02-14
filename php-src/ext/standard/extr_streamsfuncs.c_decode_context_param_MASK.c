
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
struct TYPE_9__ {int res; } ;
typedef TYPE_1__ php_stream_context ;
struct TYPE_10__ {int ctx; } ;
typedef TYPE_2__ php_stream ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;
 TYPE_2__* FUNC_5 (int *,int *,int ,int ) ;
 TYPE_1__* FUNC_6 (int *,int *,int ) ;

__attribute__((used)) static php_stream_context *FUNC_7(zval *VAR_0)
{
 php_stream_context *VAR_1 = ((void*)0);

 VAR_1 = FUNC_6(VAR_0, ((void*)0), FUNC_3());
 if (VAR_1 == ((void*)0)) {
  php_stream *VAR_2;

  VAR_2 = FUNC_5(VAR_0, ((void*)0), FUNC_2(), FUNC_1());

  if (VAR_2) {
   VAR_1 = FUNC_0(VAR_2);
   if (VAR_1 == ((void*)0)) {




    VAR_1 = FUNC_4();
    VAR_2->ctx = VAR_1->res;
   }
  }
 }

 return VAR_1;
}
