
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ refcount; } ;
typedef TYPE_1__ item ;
typedef int conn ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (char*,size_t,int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (char*,size_t,int ,int *) ;

__attribute__((used)) static inline item* FUNC_3(char *VAR_1, size_t VAR_2, conn *VAR_3, uint32_t VAR_4, bool VAR_5, bool VAR_6) {
    item *VAR_7;
    if (VAR_5) {
        VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_4, VAR_3);
    } else {
        VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_6);
    }
    if (VAR_7 && VAR_7->refcount > VAR_0) {
        FUNC_1(VAR_7);
        VAR_7 = ((void*)0);
    }
    return VAR_7;
}
