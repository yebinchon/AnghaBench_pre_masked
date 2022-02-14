
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fmtentry {int mp; scalar_t__ va; } ;


 struct fmtentry* VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(int VAR_1)
{
    for (const struct fmtentry *VAR_2 = VAR_0; VAR_2->va; ++VAR_2) {
        if (VAR_2->mp == VAR_1)
            return VAR_2->va;
    }
    return 0;
}
