
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; } ;
typedef TYPE_1__ SSL_CIPHER ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const SSL_CIPHER *VAR_2 = (const SSL_CIPHER *)VAR_0;
    const SSL_CIPHER *VAR_3 = (const SSL_CIPHER *)VAR_1;

    if (VAR_2->id == VAR_3->id)
        return 0;
    return VAR_2->id < VAR_3->id ? -1 : 1;
}
