
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* zval ;
struct TYPE_8__ {void* name; void* value; } ;
typedef TYPE_1__ zend_constant ;
typedef int php_stream_context ;
struct TYPE_9__ {int flags; } ;
typedef TYPE_2__ php_stream ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (char*,char*,int ,int *,int *) ;
 int FUNC_5 (TYPE_2__*,void**) ;
 int VAR_2 ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (TYPE_1__*) ;
 void* FUNC_8 (int ,int ) ;

void FUNC_9(void)
{
 zval VAR_3, VAR_4, VAR_5;
 php_stream *VAR_6, *VAR_7, *VAR_8;
 php_stream_context *VAR_9=((void*)0), *VAR_10=((void*)0), *VAR_11=((void*)0);
 zend_constant VAR_12, VAR_13, VAR_14;

 VAR_6 = FUNC_4("php://stdin", "rb", 0, ((void*)0), VAR_9);
 VAR_7 = FUNC_4("php://stdout", "wb", 0, ((void*)0), VAR_10);
 VAR_8 = FUNC_4("php://stderr", "wb", 0, ((void*)0), VAR_11);

 if (VAR_6==((void*)0) || VAR_7==((void*)0) || VAR_8==((void*)0)) {
  if (VAR_6) FUNC_3(VAR_6);
  if (VAR_7) FUNC_3(VAR_7);
  if (VAR_8) FUNC_3(VAR_8);
  return;
 }







 FUNC_5(VAR_6, &VAR_3);
 FUNC_5(VAR_7, &VAR_4);
 FUNC_5(VAR_8, &VAR_5);

 VAR_12.value = VAR_3;
 FUNC_1(&VAR_12, VAR_0, 0);
 VAR_12.name = FUNC_8(FUNC_2("STDIN"), 0);
 FUNC_6(FUNC_0(VAR_2), VAR_12.name);
 FUNC_7(&VAR_12);

 VAR_13.value = VAR_4;
 FUNC_1(&VAR_13, VAR_0, 0);
 VAR_13.name = FUNC_8(FUNC_2("STDOUT"), 0);
 FUNC_6(FUNC_0(VAR_2), VAR_13.name);
 FUNC_7(&VAR_13);

 VAR_14.value = VAR_5;
 FUNC_1(&VAR_14, VAR_0, 0);
 VAR_14.name = FUNC_8(FUNC_2("STDERR"), 0);
 FUNC_6(FUNC_0(VAR_2), VAR_14.name);
 FUNC_7(&VAR_14);
}
