
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* ztell64_file ) (int ,int ) ;int opaque; int * zseek64_file; } ;
struct TYPE_5__ {scalar_t__ (* ztell32_file ) (int ,int ) ;TYPE_1__ zfile_func64; } ;
typedef TYPE_2__ zlib_filefunc64_32_def ;
typedef int voidpf ;
typedef scalar_t__ uLong ;
typedef scalar_t__ ZPOS64_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

ZPOS64_T FUNC_2 (const zlib_filefunc64_32_def* VAR_1,voidpf VAR_2)
{
    if (VAR_1->zfile_func64.zseek64_file != ((void*)0))
        return (*(VAR_1->zfile_func64.ztell64_file)) (VAR_1->zfile_func64.opaque,VAR_2);
    else
    {
        uLong VAR_3 = (*(VAR_1->ztell32_file))(VAR_1->zfile_func64.opaque,VAR_2);
        if ((VAR_3) == VAR_0)
            return (ZPOS64_T)-1;
        else
            return VAR_3;
    }
}
