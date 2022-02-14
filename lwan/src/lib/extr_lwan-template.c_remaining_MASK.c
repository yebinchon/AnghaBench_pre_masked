
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {scalar_t__ pos; scalar_t__ end; } ;



__attribute__((used)) static size_t FUNC_0(struct lexer *VAR_0)
{
    return (size_t)(VAR_0->end - VAR_0->pos);
}
