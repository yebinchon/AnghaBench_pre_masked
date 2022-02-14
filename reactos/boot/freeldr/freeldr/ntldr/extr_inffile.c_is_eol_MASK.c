
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {char const* end; } ;
typedef char CHAR ;


 char const VAR_0 ;

__attribute__((used)) __inline static int FUNC_0(struct parser *VAR_1, const CHAR *VAR_2)
{
    return ((VAR_2 >= VAR_1->end) ||
            (*VAR_2 == VAR_0) ||
            (*VAR_2 == '\n') ||
            ((*VAR_2 == '\r') && (*(VAR_2 + 1) == '\n')));
}
