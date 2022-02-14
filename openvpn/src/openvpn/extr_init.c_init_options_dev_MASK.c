
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {int dev; int dev_node; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int *) ;

void
FUNC_2(struct options *VAR_0)
{
    if (!VAR_0->dev && VAR_0->dev_node)
    {
        char *VAR_1 = FUNC_1(VAR_0->dev_node, ((void*)0));
        VAR_0->dev = FUNC_0(VAR_1);
    }
}
