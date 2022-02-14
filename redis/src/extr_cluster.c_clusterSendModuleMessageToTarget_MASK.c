
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int * link; } ;
typedef TYPE_1__ clusterNode ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (int *,int ,int ,unsigned char*,int ) ;

int FUNC_2(const char *VAR_2, uint64_t VAR_3, uint8_t VAR_4, unsigned char *VAR_5, uint32_t VAR_6) {
    clusterNode *VAR_7 = ((void*)0);

    if (VAR_2 != ((void*)0)) {
        VAR_7 = FUNC_0(VAR_2);
        if (VAR_7 == ((void*)0) || VAR_7->link == ((void*)0)) return VAR_0;
    }

    FUNC_1(VAR_2 ? VAR_7->link : ((void*)0),
                      VAR_3, VAR_4, VAR_5, VAR_6);
    return VAR_1;
}
