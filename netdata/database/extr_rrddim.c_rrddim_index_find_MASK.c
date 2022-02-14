
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int avl ;
struct TYPE_6__ {char const* id; int hash; } ;
struct TYPE_5__ {int dimensions_index; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDDIM ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static inline RRDDIM *FUNC_2(RRDSET *VAR_0, const char *VAR_1, uint32_t VAR_2) {
    RRDDIM VAR_3 = {
            .id = VAR_1,
            .hash = (VAR_2)?VAR_2:FUNC_1(VAR_1)
    };
    return (RRDDIM *)FUNC_0(&(VAR_0->dimensions_index), (avl *) &VAR_3);
}
