
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {scalar_t__ ao_c; scalar_t__ vo_c; int type; int user_tid; } ;
struct MPContext {int dummy; } ;


 int FUNC_0 (struct MPContext*,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct MPContext*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct MPContext *VAR_0, struct track *VAR_1)
{
    if (VAR_1->vo_c || VAR_1->ao_c) {
        FUNC_0(VAR_0, "deselecting track %d for lavfi-complex option\n",
                   VAR_1->user_tid);
        FUNC_2(VAR_0, VAR_1->type, ((void*)0), 0);
    }
    FUNC_1(!(VAR_1->vo_c || VAR_1->ao_c));
}
