
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_line {int dummy; } ;
struct config {int parser; scalar_t__ error_message; } ;


 struct config_line const* FUNC_0 (int *) ;

const struct config_line *FUNC_1(struct config *VAR_0)
{
    return VAR_0->error_message ? ((void*)0) : FUNC_0(&VAR_0->parser);
}
