
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int member_3; int * member_2; int member_1; int member_0; } ;
struct TYPE_8__ {int cb_user; int (* cb ) (TYPE_3__*,int ) ;int path; } ;
struct TYPE_7__ {int name; } ;
typedef TYPE_1__ SdbNs ;
typedef TYPE_2__ SdbDiffCtx ;
typedef TYPE_3__ SdbDiff ;


 int FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_1(SdbDiffCtx *VAR_0, SdbNs *VAR_1, bool VAR_2) {
 SdbDiff VAR_3 = { VAR_0->path, &VAR_1->name, ((void*)0), VAR_2 };
 VAR_0->cb (&VAR_3, VAR_0->cb_user);
}
