
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char const* member_1; char const* member_2; int member_3; int member_0; } ;
struct TYPE_5__ {int cb_user; int (* cb ) (TYPE_2__*,int ) ;int path; } ;
typedef TYPE_1__ SdbDiffCtx ;
typedef TYPE_2__ SdbDiff ;


 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_1(SdbDiffCtx *VAR_0, const char *VAR_1, const char *VAR_2, bool VAR_3) {
 SdbDiff VAR_4 = { VAR_0->path, VAR_1, VAR_2, VAR_3 };
 VAR_0->cb (&VAR_4, VAR_0->cb_user);
}
