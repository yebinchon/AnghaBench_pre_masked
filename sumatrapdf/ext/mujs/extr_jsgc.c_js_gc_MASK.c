
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int gcmark; struct TYPE_19__* gcnext; } ;
typedef TYPE_1__ js_String ;
struct TYPE_20__ {int gcmark; int envtop; TYPE_1__* gcstr; TYPE_3__* gcobj; TYPE_4__* gcfun; TYPE_5__* gcenv; int * envstack; int GE; int E; int G; int R; int URIError_prototype; int TypeError_prototype; int SyntaxError_prototype; int ReferenceError_prototype; int RangeError_prototype; int EvalError_prototype; int Error_prototype; int Date_prototype; int RegExp_prototype; int String_prototype; int Number_prototype; int Boolean_prototype; int Function_prototype; int Array_prototype; int Object_prototype; scalar_t__ gccounter; scalar_t__ gcpause; } ;
typedef TYPE_2__ js_State ;
struct TYPE_21__ {int gcmark; struct TYPE_21__* gcnext; } ;
typedef TYPE_3__ js_Object ;
struct TYPE_22__ {int gcmark; struct TYPE_22__* gcnext; } ;
typedef TYPE_4__ js_Function ;
struct TYPE_23__ {int gcmark; struct TYPE_23__* gcnext; } ;
typedef TYPE_5__ js_Environment ;


 int FUNC_0 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (char*,int,char*,int,int,int,int,int,int,int,int) ;

void FUNC_9(js_State *VAR_0, int VAR_1)
{
 js_Function *VAR_2, *VAR_3, **VAR_4;
 js_Object *VAR_5, *VAR_6, **VAR_7;
 js_String *VAR_8, *VAR_9, **VAR_10;
 js_Environment *VAR_11, *VAR_12, **VAR_13;
 int VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 int VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
 int VAR_22;
 int VAR_23;

 if (VAR_0->gcpause) {
  if (VAR_1)
   FUNC_7(VAR_0, "garbage collector is paused");
  return;
 }

 VAR_0->gccounter = 0;

 VAR_22 = VAR_0->gcmark = VAR_0->gcmark == 1 ? 2 : 1;

 FUNC_4(VAR_0, VAR_22, VAR_0->Object_prototype);
 FUNC_4(VAR_0, VAR_22, VAR_0->Array_prototype);
 FUNC_4(VAR_0, VAR_22, VAR_0->Function_prototype);
 FUNC_4(VAR_0, VAR_22, VAR_0->Boolean_prototype);
 FUNC_4(VAR_0, VAR_22, VAR_0->Number_prototype);
 FUNC_4(VAR_0, VAR_22, VAR_0->String_prototype);
 FUNC_4(VAR_0, VAR_22, VAR_0->RegExp_prototype);
 FUNC_4(VAR_0, VAR_22, VAR_0->Date_prototype);

 FUNC_4(VAR_0, VAR_22, VAR_0->Error_prototype);
 FUNC_4(VAR_0, VAR_22, VAR_0->EvalError_prototype);
 FUNC_4(VAR_0, VAR_22, VAR_0->RangeError_prototype);
 FUNC_4(VAR_0, VAR_22, VAR_0->ReferenceError_prototype);
 FUNC_4(VAR_0, VAR_22, VAR_0->SyntaxError_prototype);
 FUNC_4(VAR_0, VAR_22, VAR_0->TypeError_prototype);
 FUNC_4(VAR_0, VAR_22, VAR_0->URIError_prototype);

 FUNC_4(VAR_0, VAR_22, VAR_0->R);
 FUNC_4(VAR_0, VAR_22, VAR_0->G);

 FUNC_5(VAR_0, VAR_22);

 FUNC_3(VAR_0, VAR_22, VAR_0->E);
 FUNC_3(VAR_0, VAR_22, VAR_0->GE);
 for (VAR_23 = 0; VAR_23 < VAR_0->envtop; ++VAR_23)
  FUNC_3(VAR_0, VAR_22, VAR_0->envstack[VAR_23]);

 VAR_13 = &VAR_0->gcenv;
 for (VAR_11 = VAR_0->gcenv; VAR_11; VAR_11 = VAR_12) {
  VAR_12 = VAR_11->gcnext;
  if (VAR_11->gcmark != VAR_22) {
   *VAR_13 = VAR_12;
   FUNC_0(VAR_0, VAR_11);
   ++VAR_18;
  } else {
   VAR_13 = &VAR_11->gcnext;
  }
  ++VAR_14;
 }

 VAR_4 = &VAR_0->gcfun;
 for (VAR_2 = VAR_0->gcfun; VAR_2; VAR_2 = VAR_3) {
  VAR_3 = VAR_2->gcnext;
  if (VAR_2->gcmark != VAR_22) {
   *VAR_4 = VAR_3;
   FUNC_1(VAR_0, VAR_2);
   ++VAR_19;
  } else {
   VAR_4 = &VAR_2->gcnext;
  }
  ++VAR_15;
 }

 VAR_7 = &VAR_0->gcobj;
 for (VAR_5 = VAR_0->gcobj; VAR_5; VAR_5 = VAR_6) {
  VAR_6 = VAR_5->gcnext;
  if (VAR_5->gcmark != VAR_22) {
   *VAR_7 = VAR_6;
   FUNC_2(VAR_0, VAR_5);
   ++VAR_20;
  } else {
   VAR_7 = &VAR_5->gcnext;
  }
  ++VAR_16;
 }

 VAR_10 = &VAR_0->gcstr;
 for (VAR_8 = VAR_0->gcstr; VAR_8; VAR_8 = VAR_9) {
  VAR_9 = VAR_8->gcnext;
  if (VAR_8->gcmark != VAR_22) {
   *VAR_10 = VAR_9;
   FUNC_6(VAR_0, VAR_8);
   ++VAR_21;
  } else {
   VAR_10 = &VAR_8->gcnext;
  }
  ++VAR_17;
 }

 if (VAR_1) {
  char VAR_24[256];
  FUNC_8(VAR_24, sizeof VAR_24, "garbage collected: %d/%d envs, %d/%d funs, %d/%d objs, %d/%d strs",
   VAR_18, VAR_14, VAR_19, VAR_15, VAR_20, VAR_16, VAR_21, VAR_17);
  FUNC_7(VAR_0, VAR_24);
 }
}
