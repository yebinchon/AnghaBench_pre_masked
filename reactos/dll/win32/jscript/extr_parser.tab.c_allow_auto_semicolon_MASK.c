
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; char* end; scalar_t__ nl; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef int BOOL ;



__attribute__((used)) static BOOL FUNC_0(parser_ctx_t *VAR_0)
{
    return VAR_0->nl || VAR_0->ptr == VAR_0->end || *(VAR_0->ptr-1) == '}';
}
