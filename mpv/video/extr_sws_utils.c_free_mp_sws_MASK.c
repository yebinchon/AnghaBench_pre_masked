
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_sws_context {int dst_filter; int src_filter; int sws; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    struct mp_sws_context *VAR_1 = VAR_0;
    FUNC_0(VAR_1->sws);
    FUNC_1(VAR_1->src_filter);
    FUNC_1(VAR_1->dst_filter);
}
