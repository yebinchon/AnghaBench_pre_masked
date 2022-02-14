
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct instruction {unsigned int num_srcs; int * src; int predicate; scalar_t__ has_predicate; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* srcreg ) (struct bc_writer*,int *,struct bytecode_buffer*) ;} ;


 int FUNC_0 (struct bc_writer*,int *,struct bytecode_buffer*) ;
 int FUNC_1 (struct bc_writer*,int *,struct bytecode_buffer*) ;

__attribute__((used)) static void FUNC_2(struct bc_writer *VAR_0, const struct instruction *VAR_1,
                          struct bytecode_buffer *VAR_2){
    unsigned int VAR_3;
    if(VAR_1->has_predicate){
        VAR_0->funcs->srcreg(VAR_0, &VAR_1->predicate, VAR_2);
    }
    for(VAR_3 = 0; VAR_3 < VAR_1->num_srcs; VAR_3++){
        VAR_0->funcs->srcreg(VAR_0, &VAR_1->src[VAR_3], VAR_2);
    }
}
