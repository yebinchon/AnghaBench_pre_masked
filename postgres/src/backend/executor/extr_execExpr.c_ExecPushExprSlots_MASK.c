
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ last_var; int fixed; int * known_desc; int * kind; } ;
struct TYPE_9__ {TYPE_1__ fetch; } ;
struct TYPE_11__ {TYPE_2__ d; int opcode; int * resnull; int * resvalue; int member_0; } ;
struct TYPE_10__ {scalar_t__ last_inner; scalar_t__ last_outer; scalar_t__ last_scan; } ;
typedef TYPE_3__ LastAttnumInfo ;
typedef int ExprState ;
typedef TYPE_4__ ExprEvalStep ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_2(ExprState *VAR_3, LastAttnumInfo *VAR_4)
{
 ExprEvalStep VAR_5 = {0};

 VAR_5.resvalue = ((void*)0);
 VAR_5.resnull = ((void*)0);


 if (VAR_4->last_inner > 0)
 {
  VAR_5.opcode = VAR_0;
  VAR_5.d.fetch.last_var = VAR_4->last_inner;
  VAR_5.d.fetch.fixed = 0;
  VAR_5.d.fetch.kind = ((void*)0);
  VAR_5.d.fetch.known_desc = ((void*)0);
  if (FUNC_0(VAR_3, &VAR_5))
   FUNC_1(VAR_3, &VAR_5);
 }
 if (VAR_4->last_outer > 0)
 {
  VAR_5.opcode = VAR_1;
  VAR_5.d.fetch.last_var = VAR_4->last_outer;
  VAR_5.d.fetch.fixed = 0;
  VAR_5.d.fetch.kind = ((void*)0);
  VAR_5.d.fetch.known_desc = ((void*)0);
  if (FUNC_0(VAR_3, &VAR_5))
   FUNC_1(VAR_3, &VAR_5);
 }
 if (VAR_4->last_scan > 0)
 {
  VAR_5.opcode = VAR_2;
  VAR_5.d.fetch.last_var = VAR_4->last_scan;
  VAR_5.d.fetch.fixed = 0;
  VAR_5.d.fetch.kind = ((void*)0);
  VAR_5.d.fetch.known_desc = ((void*)0);
  if (FUNC_0(VAR_3, &VAR_5))
   FUNC_1(VAR_3, &VAR_5);
 }
}
