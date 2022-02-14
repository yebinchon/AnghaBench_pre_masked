
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_6__ {TYPE_1__* type; } ;
typedef TYPE_2__ connection ;
struct TYPE_5__ {int (* sync_write ) (TYPE_2__*,char*,int ,long long) ;} ;


 int FUNC_0 (TYPE_2__*,char*,int ,long long) ;

__attribute__((used)) static inline ssize_t FUNC_1(connection *VAR_0, char *VAR_1, ssize_t VAR_2, long long VAR_3) {
    return VAR_0->type->sync_write(VAR_0, VAR_1, VAR_2, VAR_3);
}
