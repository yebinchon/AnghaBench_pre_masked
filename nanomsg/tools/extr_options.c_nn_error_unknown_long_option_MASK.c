
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_parse_context {char** argv; char* data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2 (struct nn_parse_context *VAR_1)
{
    FUNC_1 (VAR_0, "%s: Unknown option ``%s''\n", VAR_1->argv[0], VAR_1->data);
    FUNC_0 (1);
}
