
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* type; } ;
typedef TYPE_2__ connection ;
struct TYPE_5__ {int (* write ) (TYPE_2__*,void const*,size_t) ;} ;


 int FUNC_0 (TYPE_2__*,void const*,size_t) ;

__attribute__((used)) static inline int FUNC_1(connection *VAR_0, const void *VAR_1, size_t VAR_2) {
    return VAR_0->type->write(VAR_0, VAR_1, VAR_2);
}
