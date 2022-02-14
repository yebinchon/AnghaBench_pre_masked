
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
struct ctxSearchCB {int count; int rad; int prefix; int core; } ;
struct TYPE_3__ {int count; int keyword_length; } ;
typedef int RSignItem ;
typedef TYPE_1__ RSearchKeyword ;


 int FUNC_0 (int ,int *,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(RSignItem *VAR_0, RSearchKeyword *VAR_1, ut64 VAR_2, void *VAR_3) {
 struct ctxSearchCB *VAR_4 = (struct ctxSearchCB *) VAR_3;
 FUNC_0 (VAR_4->core, VAR_0, VAR_2, VAR_1->keyword_length, VAR_1->count, VAR_4->prefix, VAR_4->rad);
 VAR_4->count++;
 return 1;
}
