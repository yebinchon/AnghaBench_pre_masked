
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ refcount; } ;
typedef TYPE_1__ item ;
typedef int conn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (char*,size_t,int *,int,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline item* FUNC_3(char *VAR_1, size_t VAR_2, conn *VAR_3, bool VAR_4, uint32_t *VAR_5) {
    item *VAR_6;
    VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    if (VAR_6 && VAR_6->refcount > VAR_0) {
        FUNC_0(VAR_6);
        VAR_6 = ((void*)0);
        FUNC_2(*VAR_5);
    }
    return VAR_6;
}
