
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {int cpidx; int argc; int ** out; int argv; } ;


 int FUNC_0 (int **,int ,int) ;

__attribute__((used)) static int FUNC_1(struct parse_opt_ctx_t *VAR_0)
{
 FUNC_0(VAR_0->out + VAR_0->cpidx, VAR_0->argv, VAR_0->argc * sizeof(*VAR_0->out));
 VAR_0->out[VAR_0->cpidx + VAR_0->argc] = ((void*)0);
 return VAR_0->cpidx + VAR_0->argc;
}
