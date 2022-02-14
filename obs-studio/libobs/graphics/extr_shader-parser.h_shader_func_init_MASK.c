
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_func {char* return_type; char* name; int * end; int * start; int * mapping; int params; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct shader_func *VAR_0, char *VAR_1,
        char *VAR_2)
{
 FUNC_0(VAR_0->params);

 VAR_0->return_type = VAR_1;
 VAR_0->mapping = ((void*)0);
 VAR_0->name = VAR_2;
 VAR_0->start = ((void*)0);
 VAR_0->end = ((void*)0);
}
