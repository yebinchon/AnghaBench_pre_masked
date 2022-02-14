
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cur_line; } ;
struct TYPE_4__ {TYPE_1__ lexer; } ;
struct config {TYPE_2__ parser; } ;



int FUNC_0(struct config *VAR_0)
{
    return VAR_0->parser.lexer.cur_line;
}
