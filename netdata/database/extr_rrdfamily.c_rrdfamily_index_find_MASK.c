
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int avl ;
struct TYPE_6__ {char const* family; scalar_t__ hash_family; } ;
struct TYPE_5__ {int rrdfamily_root_index; } ;
typedef TYPE_1__ RRDHOST ;
typedef TYPE_2__ RRDFAMILY ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static RRDFAMILY *FUNC_2(RRDHOST *VAR_0, const char *VAR_1, uint32_t VAR_2) {
    RRDFAMILY VAR_3;
    VAR_3.family = VAR_1;
    VAR_3.hash_family = (VAR_2)?VAR_2:FUNC_1(VAR_3.family);

    return (RRDFAMILY *)FUNC_0(&(VAR_0->rrdfamily_root_index), (avl *) &VAR_3);
}
