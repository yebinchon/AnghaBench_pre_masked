
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int avl ;
struct TYPE_6__ {int rrdset_root_index; } ;
struct TYPE_5__ {int id; scalar_t__ hash; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDHOST ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static RRDSET *FUNC_3(RRDHOST *VAR_1, const char *VAR_2, uint32_t VAR_3) {
    RRDSET VAR_4;
    FUNC_2(VAR_4.id, VAR_2, VAR_0);
    VAR_4.hash = (VAR_3)?VAR_3:FUNC_1(VAR_4.id);

    return (RRDSET *)FUNC_0(&(VAR_1->rrdset_root_index), (avl *) &VAR_4);
}
