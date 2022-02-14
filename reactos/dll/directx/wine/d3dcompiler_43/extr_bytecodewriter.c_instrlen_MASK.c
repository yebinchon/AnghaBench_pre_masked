
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rel_reg; } ;
struct instruction {TYPE_2__* src; TYPE_1__ dst; scalar_t__ has_predicate; } ;
struct TYPE_4__ {scalar_t__ rel_reg; } ;
typedef unsigned int DWORD ;



__attribute__((used)) static DWORD FUNC_0(const struct instruction *VAR_0, unsigned int VAR_1, unsigned int VAR_2) {
    unsigned int VAR_3;
    DWORD VAR_4 = VAR_1 + VAR_2 + (VAR_0->has_predicate ? 1 : 0);

    if(VAR_2){
        if(VAR_0->dst.rel_reg) VAR_4++;
    }
    for(VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        if(VAR_0->src[VAR_3].rel_reg) VAR_4++;
    }
    return VAR_4;
}
