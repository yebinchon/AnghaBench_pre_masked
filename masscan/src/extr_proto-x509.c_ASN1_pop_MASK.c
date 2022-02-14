
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* states; int depth; unsigned int* remainings; } ;
struct CertDecode {TYPE_1__ stack; } ;


 int FUNC_0 (unsigned int*,unsigned int*,int) ;

__attribute__((used)) static unsigned
FUNC_1(struct CertDecode *VAR_0)
{
    unsigned VAR_1;
    VAR_1 = VAR_0->stack.states[0];
    VAR_0->stack.depth--;
    FUNC_0( &VAR_0->stack.remainings[0],
                &VAR_0->stack.remainings[1],
                VAR_0->stack.depth * sizeof(VAR_0->stack.remainings[0]));
    FUNC_0( &VAR_0->stack.states[0],
                &VAR_0->stack.states[1],
                VAR_0->stack.depth * sizeof(VAR_0->stack.states[0]));
    return VAR_1;
}
