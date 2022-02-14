
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_11__ {int root; } ;
typedef TYPE_2__ eval_const_expressions_context ;
struct TYPE_14__ {int prosupport; int proretset; } ;
struct TYPE_10__ {int type; } ;
struct TYPE_13__ {int funcvariadic; int location; int * args; void* inputcollid; void* funccollid; int funcformat; int funcretset; void* funcresulttype; void* funcid; TYPE_1__ xpr; } ;
struct TYPE_12__ {TYPE_4__* fcall; int root; int type; } ;
typedef TYPE_3__ SupportRequestSimplify ;
typedef void* Oid ;
typedef int Node ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_4__ FuncExpr ;
typedef TYPE_5__* Form_pg_proc ;
typedef int Expr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ,char*,void*) ;
 int VAR_5 ;
 int * FUNC_11 (void*,void*,int ,void*,void*,int *,int,int ,TYPE_2__*) ;
 int * FUNC_12 (int *,void*,int ) ;
 scalar_t__ FUNC_13 (int *,int ,void*) ;
 int * FUNC_14 (void*,void*,void*,void*,int *,int,int ,TYPE_2__*) ;

__attribute__((used)) static Expr *
FUNC_15(Oid VAR_6, Oid VAR_7, int32 VAR_8,
      Oid VAR_9, Oid VAR_10, List **VAR_11,
      bool VAR_12, bool VAR_13, bool VAR_14,
      eval_const_expressions_context *VAR_15)
{
 List *VAR_16 = *VAR_11;
 HeapTuple VAR_17;
 Form_pg_proc VAR_18;
 Expr *VAR_19;
 VAR_17 = FUNC_9(VAR_2, FUNC_4(VAR_6));
 if (!FUNC_3(VAR_17))
  FUNC_10(VAR_1, "cache lookup failed for function %u", VAR_6);
 VAR_18 = (Form_pg_proc) FUNC_2(VAR_17);







 if (VAR_13)
 {
  VAR_16 = FUNC_12(VAR_16, VAR_7, VAR_17);
  VAR_16 = (List *) FUNC_13((Node *) VAR_16,
            VAR_5,
            (void *) VAR_15);

  *VAR_11 = VAR_16;
 }



 VAR_19 = FUNC_11(VAR_6, VAR_7, VAR_8,
        VAR_9, VAR_10,
        VAR_16, VAR_12,
        VAR_17, VAR_15);

 if (!VAR_19 && VAR_14 && FUNC_6(VAR_18->prosupport))
 {







  SupportRequestSimplify VAR_20;
  FuncExpr VAR_21;

  VAR_21.xpr.type = VAR_3;
  VAR_21.funcid = VAR_6;
  VAR_21.funcresulttype = VAR_7;
  VAR_21.funcretset = VAR_18->proretset;
  VAR_21.funcvariadic = VAR_12;
  VAR_21.funcformat = VAR_0;
  VAR_21.funccollid = VAR_9;
  VAR_21.inputcollid = VAR_10;
  VAR_21.args = VAR_16;
  VAR_21.location = -1;

  VAR_20.type = VAR_4;
  VAR_20.root = VAR_15->root;
  VAR_20.fcall = &VAR_21;

  VAR_19 = (Expr *)
   FUNC_1(FUNC_5(VAR_18->prosupport,
            FUNC_7(&VAR_20)));


  FUNC_0(VAR_19 != (Expr *) &VAR_21);
 }

 if (!VAR_19 && VAR_14)
  VAR_19 = FUNC_14(VAR_6, VAR_7, VAR_9,
          VAR_10, VAR_16, VAR_12,
          VAR_17, VAR_15);

 FUNC_8(VAR_17);

 return VAR_19;
}
