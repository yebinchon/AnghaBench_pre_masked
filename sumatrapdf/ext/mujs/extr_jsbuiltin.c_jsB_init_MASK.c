
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int * Error_prototype; void* URIError_prototype; void* TypeError_prototype; void* SyntaxError_prototype; void* ReferenceError_prototype; void* RangeError_prototype; void* EvalError_prototype; int * Object_prototype; void* Date_prototype; void* RegExp_prototype; void* String_prototype; void* Number_prototype; void* Boolean_prototype; void* Function_prototype; void* Array_prototype; } ;
typedef TYPE_1__ js_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (TYPE_1__*,char*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_12 (TYPE_1__*,int ,int *) ;
 int FUNC_13 (TYPE_1__*,char*,int) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*) ;

void FUNC_16(js_State *VAR_21)
{

 VAR_21->Object_prototype = FUNC_12(VAR_21, VAR_7, ((void*)0));
 VAR_21->Array_prototype = FUNC_12(VAR_21, VAR_1, VAR_21->Object_prototype);
 VAR_21->Function_prototype = FUNC_12(VAR_21, VAR_3, VAR_21->Object_prototype);
 VAR_21->Boolean_prototype = FUNC_12(VAR_21, VAR_2, VAR_21->Object_prototype);
 VAR_21->Number_prototype = FUNC_12(VAR_21, VAR_6, VAR_21->Object_prototype);
 VAR_21->String_prototype = FUNC_12(VAR_21, VAR_8, VAR_21->Object_prototype);
 VAR_21->RegExp_prototype = FUNC_12(VAR_21, VAR_7, VAR_21->Object_prototype);
 VAR_21->Date_prototype = FUNC_12(VAR_21, VAR_4, VAR_21->Object_prototype);


 VAR_21->Error_prototype = FUNC_12(VAR_21, VAR_5, VAR_21->Object_prototype);
 VAR_21->EvalError_prototype = FUNC_12(VAR_21, VAR_5, VAR_21->Error_prototype);
 VAR_21->RangeError_prototype = FUNC_12(VAR_21, VAR_5, VAR_21->Error_prototype);
 VAR_21->ReferenceError_prototype = FUNC_12(VAR_21, VAR_5, VAR_21->Error_prototype);
 VAR_21->SyntaxError_prototype = FUNC_12(VAR_21, VAR_5, VAR_21->Error_prototype);
 VAR_21->TypeError_prototype = FUNC_12(VAR_21, VAR_5, VAR_21->Error_prototype);
 VAR_21->URIError_prototype = FUNC_12(VAR_21, VAR_5, VAR_21->Error_prototype);


 FUNC_9(VAR_21);
 FUNC_1(VAR_21);
 FUNC_5(VAR_21);
 FUNC_2(VAR_21);
 FUNC_8(VAR_21);
 FUNC_11(VAR_21);
 FUNC_10(VAR_21);
 FUNC_3(VAR_21);
 FUNC_4(VAR_21);
 FUNC_7(VAR_21);
 FUNC_6(VAR_21);


 FUNC_14(VAR_21, VAR_12);
 FUNC_13(VAR_21, "NaN", VAR_11 | VAR_10 | VAR_9);

 FUNC_14(VAR_21, VAR_0);
 FUNC_13(VAR_21, "Infinity", VAR_11 | VAR_10 | VAR_9);

 FUNC_15(VAR_21);
 FUNC_13(VAR_21, "undefined", VAR_11 | VAR_10 | VAR_9);

 FUNC_0(VAR_21, "parseInt", VAR_20, 1);
 FUNC_0(VAR_21, "parseFloat", VAR_19, 1);
 FUNC_0(VAR_21, "isNaN", VAR_18, 1);
 FUNC_0(VAR_21, "isFinite", VAR_17, 1);

 FUNC_0(VAR_21, "decodeURI", VAR_13, 1);
 FUNC_0(VAR_21, "decodeURIComponent", VAR_14, 1);
 FUNC_0(VAR_21, "encodeURI", VAR_15, 1);
 FUNC_0(VAR_21, "encodeURIComponent", VAR_16, 1);
}
