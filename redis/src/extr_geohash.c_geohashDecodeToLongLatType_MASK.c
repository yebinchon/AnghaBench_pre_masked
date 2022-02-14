
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; } ;
struct TYPE_6__ {TYPE_1__ member_0; } ;
typedef int GeoHashBits ;
typedef TYPE_2__ GeoHashArea ;


 int FUNC_0 (TYPE_2__*,double*) ;
 int FUNC_1 (int const,TYPE_2__*) ;

int FUNC_2(const GeoHashBits VAR_0, double *VAR_1) {
    GeoHashArea VAR_2 = {{0}};
    if (!VAR_1 || !FUNC_1(VAR_0, &VAR_2))
        return 0;
    return FUNC_0(&VAR_2, VAR_1);
}
