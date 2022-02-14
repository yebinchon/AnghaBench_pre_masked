
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int avl ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {char const* name; scalar_t__ hash; } ;
typedef TYPE_1__ STATSD_METRIC ;
typedef TYPE_2__ STATSD_INDEX ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static inline STATSD_METRIC *FUNC_2(STATSD_INDEX *VAR_0, const char *VAR_1, uint32_t VAR_2) {
    STATSD_METRIC VAR_3;
    VAR_3.name = VAR_1;
    VAR_3.hash = (VAR_2)?VAR_2:FUNC_1(VAR_3.name);

    return (STATSD_METRIC *)FUNC_0(&VAR_0->index, (avl *)&VAR_3);
}
