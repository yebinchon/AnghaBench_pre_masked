
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t digest_length; } ;
struct blake2_mac_data_st {TYPE_1__ params; } ;



__attribute__((used)) static size_t FUNC_0(void *VAR_0)
{
    struct blake2_mac_data_st *VAR_1 = VAR_0;

    return VAR_1->params.digest_length;
}
