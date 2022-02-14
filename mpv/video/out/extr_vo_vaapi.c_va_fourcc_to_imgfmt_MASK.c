
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fmtentry {scalar_t__ va; int mp; } ;
typedef enum mp_imgfmt { ____Placeholder_mp_imgfmt } mp_imgfmt ;


 int VAR_0 ;
 struct fmtentry* VAR_1 ;

__attribute__((used)) static enum mp_imgfmt FUNC_0(uint32_t VAR_2)
{
    for (const struct fmtentry *VAR_3 = VAR_1; VAR_3->va; ++VAR_3) {
        if (VAR_3->va == VAR_2)
            return VAR_3->mp;
    }
    return VAR_0;
}
