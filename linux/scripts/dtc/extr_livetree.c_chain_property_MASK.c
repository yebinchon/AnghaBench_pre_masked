
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {struct property* next; } ;


 int FUNC_0 (int ) ;

struct property *FUNC_1(struct property *VAR_0, struct property *VAR_1)
{
 FUNC_0(VAR_0->next == ((void*)0));

 VAR_0->next = VAR_1;
 return VAR_0;
}
