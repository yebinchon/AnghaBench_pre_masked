
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* name; int value; } ;
typedef TYPE_1__ zend_constant ;
typedef int php_stream_context ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_2__ php_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (char*,char*,int ,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 (char*,int,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
 php_stream *VAR_3, *VAR_4, *VAR_5;
 php_stream_context *VAR_6=((void*)0), *VAR_7=((void*)0), *VAR_8=((void*)0);
 zend_constant VAR_9, VAR_10, VAR_11;

 VAR_3 = FUNC_2("php://stdin", "rb", 0, ((void*)0), VAR_6);
 VAR_4 = FUNC_2("php://stdout", "wb", 0, ((void*)0), VAR_7);
 VAR_5 = FUNC_2("php://stderr", "wb", 0, ((void*)0), VAR_8);

 if (VAR_3==((void*)0) || VAR_4==((void*)0) || VAR_5==((void*)0)) {
  if (VAR_3) FUNC_1(VAR_3);
  if (VAR_4) FUNC_1(VAR_4);
  if (VAR_5) FUNC_1(VAR_5);
  return;
 }







 VAR_2 = VAR_3;

 FUNC_3(VAR_3, &VAR_9.value);
 FUNC_3(VAR_4, &VAR_10.value);
 FUNC_3(VAR_5, &VAR_11.value);

 FUNC_0(&VAR_9, VAR_0, 0);
 VAR_9.name = FUNC_5("STDIN", sizeof("STDIN")-1, 0);
 FUNC_4(&VAR_9);

 FUNC_0(&VAR_10, VAR_0, 0);
 VAR_10.name = FUNC_5("STDOUT", sizeof("STDOUT")-1, 0);
 FUNC_4(&VAR_10);

 FUNC_0(&VAR_11, VAR_0, 0);
 VAR_11.name = FUNC_5("STDERR", sizeof("STDERR")-1, 0);
 FUNC_4(&VAR_11);
}
