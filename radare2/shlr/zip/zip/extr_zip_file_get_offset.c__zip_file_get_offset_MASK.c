
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t zip_uint64_t ;
typedef size_t zip_uint32_t ;
typedef scalar_t__ zip_int32_t ;
struct zip_error {int dummy; } ;
struct zip {int zp; TYPE_2__* entry; } ;
typedef int off_t ;
struct TYPE_4__ {TYPE_1__* orig; } ;
struct TYPE_3__ {size_t offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,struct zip_error*) ;
 int FUNC_1 (struct zip_error*,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

zip_uint64_t
FUNC_3(const struct zip *VAR_6, zip_uint64_t VAR_7, struct zip_error *VAR_8)
{
    zip_uint64_t VAR_9;
    zip_int32_t VAR_10;

    VAR_9 = VAR_6->entry[VAR_7].orig->offset;

    if (FUNC_2(VAR_6->zp, (off_t)VAR_9, VAR_1) != 0) {
 FUNC_1(VAR_8, VAR_3, VAR_5);
 return 0;
    }


    if ((VAR_10=FUNC_0(VAR_6->zp, VAR_2, VAR_8)) < 0)
 return 0;

    if (VAR_9+(zip_uint32_t)VAR_10 > VAR_4) {
        FUNC_1(VAR_8, VAR_3, VAR_0);
        return 0;
    }

    return VAR_9 + (zip_uint32_t)VAR_10;
}
