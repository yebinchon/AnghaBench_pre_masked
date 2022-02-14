
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int in_rate; int avrctx; scalar_t__ out_rate; } ;
typedef int int64_t ;


 double FUNC_0 (int ,int) ;

__attribute__((used)) static double FUNC_1(struct priv *VAR_0)
{
    int64_t VAR_1 = VAR_0->in_rate * (int64_t)VAR_0->out_rate;
    return FUNC_0(VAR_0->avrctx, VAR_1) / (double)VAR_1;
}
