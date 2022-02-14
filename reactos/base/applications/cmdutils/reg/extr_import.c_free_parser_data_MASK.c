
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {scalar_t__ parse_type; scalar_t__ data_size; int * data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct parser *VAR_2)
{
    if (VAR_2->parse_type == VAR_1 || VAR_2->parse_type == VAR_0)
        FUNC_0(VAR_2->data);

    VAR_2->data = ((void*)0);
    VAR_2->data_size = 0;
}
