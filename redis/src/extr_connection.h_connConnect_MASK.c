
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* type; } ;
typedef TYPE_2__ connection ;
struct TYPE_5__ {int (* connect ) (TYPE_2__*,char const*,int,char const*,int ) ;} ;
typedef int ConnectionCallbackFunc ;


 int FUNC_0 (TYPE_2__*,char const*,int,char const*,int ) ;

__attribute__((used)) static inline int FUNC_1(connection *VAR_0, const char *VAR_1, int VAR_2, const char *VAR_3,
        ConnectionCallbackFunc VAR_4) {
    return VAR_0->type->connect(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
