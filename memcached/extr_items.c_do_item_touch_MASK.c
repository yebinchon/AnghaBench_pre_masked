
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int exptime; } ;
typedef TYPE_1__ item ;
typedef int conn ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char const*,size_t,int const,int *,int ) ;

item *FUNC_1(const char *VAR_1, size_t VAR_2, uint32_t VAR_3,
                    const uint32_t VAR_4, conn *VAR_5) {
    item *VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5, VAR_0);
    if (VAR_6 != ((void*)0)) {
        VAR_6->exptime = VAR_3;
    }
    return VAR_6;
}
