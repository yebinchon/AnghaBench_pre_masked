
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd {int dummy; } ;
struct input_ctx {int log; } ;
typedef int bstr ;


 struct mp_cmd* FUNC_0 (int ,int ,char const*) ;

struct mp_cmd *FUNC_1(struct input_ctx *VAR_0, bstr VAR_1,
                                  const char *VAR_2)
{
    return FUNC_0(VAR_0->log, VAR_1, VAR_2);
}
