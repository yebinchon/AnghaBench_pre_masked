
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd_ctx {struct MPContext* mpctx; } ;
struct MPContext {scalar_t__ demuxer; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (struct MPContext*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    struct mp_cmd_ctx *VAR_1 = VAR_0;
    struct MPContext *VAR_2 = VAR_1->mpctx;

    FUNC_1(VAR_2);
    FUNC_2(VAR_2);

    if (VAR_2->demuxer)
        FUNC_0(VAR_2->demuxer);
}
