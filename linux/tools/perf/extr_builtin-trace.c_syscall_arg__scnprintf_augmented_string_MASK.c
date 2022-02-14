
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; struct augmented_arg* args; } ;
struct syscall_arg {TYPE_1__ augmented; } ;
struct augmented_arg {int size; int value; } ;


 size_t FUNC_0 (char*,size_t,char*,int,int ) ;

__attribute__((used)) static size_t FUNC_1(struct syscall_arg *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct augmented_arg *VAR_3 = VAR_0->augmented.args;
 size_t VAR_4 = FUNC_0(VAR_1, VAR_2, "\"%.*s\"", VAR_3->size, VAR_3->value);




 int VAR_5 = sizeof(*VAR_3) + VAR_3->size;

 VAR_0->augmented.args = ((void *)VAR_0->augmented.args) + VAR_5;
 VAR_0->augmented.size -= VAR_5;

 return VAR_4;
}
