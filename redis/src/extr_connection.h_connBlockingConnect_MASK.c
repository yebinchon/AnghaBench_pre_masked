
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* type; } ;
typedef TYPE_2__ connection ;
struct TYPE_5__ {int (* blocking_connect ) (TYPE_2__*,char const*,int,long long) ;} ;


 int FUNC_0 (TYPE_2__*,char const*,int,long long) ;

__attribute__((used)) static inline int FUNC_1(connection *VAR_0, const char *VAR_1, int VAR_2, long long VAR_3) {
    return VAR_0->type->blocking_connect(VAR_0, VAR_1, VAR_2, VAR_3);
}
