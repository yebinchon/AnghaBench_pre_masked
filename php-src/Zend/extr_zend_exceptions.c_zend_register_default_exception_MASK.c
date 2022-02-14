
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_16__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_12__ ;


typedef int zend_object_handlers ;
typedef int zend_class_entry ;
struct TYPE_23__ {void* create_object; } ;
struct TYPE_22__ {void* create_object; } ;
struct TYPE_21__ {void* create_object; } ;
struct TYPE_20__ {int * clone_obj; } ;
struct TYPE_19__ {void* create_object; } ;
struct TYPE_18__ {void* create_object; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 TYPE_16__ VAR_5 ;
 int * VAR_6 ;
 int FUNC_2 (TYPE_16__*,int *,int) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_15__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 TYPE_1__* VAR_11 ;
 TYPE_12__* VAR_12 ;
 TYPE_1__* VAR_13 ;
 TYPE_1__* VAR_14 ;
 TYPE_1__* VAR_15 ;
 TYPE_8__* VAR_16 ;
 int VAR_17 ;
 TYPE_1__* VAR_18 ;
 TYPE_6__* VAR_19 ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int,int ,int ) ;
 int FUNC_5 (TYPE_1__*,char*,int,int ) ;
 int FUNC_6 (TYPE_1__*,char*,int,char*,int ) ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* FUNC_7 (int *,TYPE_1__*) ;

void FUNC_8(void)
{
 zend_class_entry VAR_22;

 FUNC_1(VAR_8, VAR_1);

 FUNC_2(&VAR_5, &VAR_7, sizeof(zend_object_handlers));
 VAR_5.clone_obj = ((void*)0);

 FUNC_0(VAR_22, "Exception", VAR_4);
 VAR_15 = FUNC_7(&VAR_22, ((void*)0));
 VAR_15->create_object = VAR_20;
 FUNC_3(VAR_15, 1, VAR_17);

 FUNC_6(VAR_15, "message", sizeof("message")-1, "", VAR_3);
 FUNC_6(VAR_15, "string", sizeof("string")-1, "", VAR_2);
 FUNC_4(VAR_15, "code", sizeof("code")-1, 0, VAR_3);
 FUNC_5(VAR_15, "file", sizeof("file")-1, VAR_3);
 FUNC_5(VAR_15, "line", sizeof("line")-1, VAR_3);
 FUNC_5(VAR_15, "trace", sizeof("trace")-1, VAR_2);
 FUNC_5(VAR_15, "previous", sizeof("previous")-1, VAR_2);

 FUNC_0(VAR_22, "ErrorException", VAR_6);
 VAR_14 = FUNC_7(&VAR_22, VAR_15);
 VAR_14->create_object = VAR_21;
 FUNC_4(VAR_14, "severity", sizeof("severity")-1, VAR_0, VAR_3);

 FUNC_0(VAR_22, "Error", VAR_4);
 VAR_13 = FUNC_7(&VAR_22, ((void*)0));
 VAR_13->create_object = VAR_20;
 FUNC_3(VAR_13, 1, VAR_17);

 FUNC_6(VAR_13, "message", sizeof("message")-1, "", VAR_3);
 FUNC_6(VAR_13, "string", sizeof("string")-1, "", VAR_2);
 FUNC_4(VAR_13, "code", sizeof("code")-1, 0, VAR_3);
 FUNC_5(VAR_13, "file", sizeof("file")-1, VAR_3);
 FUNC_5(VAR_13, "line", sizeof("line")-1, VAR_3);
 FUNC_5(VAR_13, "trace", sizeof("trace")-1, VAR_2);
 FUNC_5(VAR_13, "previous", sizeof("previous")-1, VAR_2);

 FUNC_0(VAR_22, "CompileError", ((void*)0));
 VAR_11 = FUNC_7(&VAR_22, VAR_13);
 VAR_11->create_object = VAR_20;

 FUNC_0(VAR_22, "ParseError", ((void*)0));
 VAR_16 = FUNC_7(&VAR_22, VAR_11);
 VAR_16->create_object = VAR_20;

 FUNC_0(VAR_22, "TypeError", ((void*)0));
 VAR_18 = FUNC_7(&VAR_22, VAR_13);
 VAR_18->create_object = VAR_20;

 FUNC_0(VAR_22, "ArgumentCountError", ((void*)0));
 VAR_9 = FUNC_7(&VAR_22, VAR_18);
 VAR_9->create_object = VAR_20;

 FUNC_0(VAR_22, "ValueError", ((void*)0));
 VAR_19 = FUNC_7(&VAR_22, VAR_13);
 VAR_19->create_object = VAR_20;

 FUNC_0(VAR_22, "ArithmeticError", ((void*)0));
 VAR_10 = FUNC_7(&VAR_22, VAR_13);
 VAR_10->create_object = VAR_20;

 FUNC_0(VAR_22, "DivisionByZeroError", ((void*)0));
 VAR_12 = FUNC_7(&VAR_22, VAR_10);
 VAR_12->create_object = VAR_20;
}
