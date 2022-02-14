
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl_parser {TYPE_1__* s; scalar_t__ error; } ;
struct TYPE_2__ {scalar_t__ eof; } ;



__attribute__((used)) static bool FUNC_0(struct pl_parser *VAR_0)
{
    return VAR_0->error || VAR_0->s->eof;
}
