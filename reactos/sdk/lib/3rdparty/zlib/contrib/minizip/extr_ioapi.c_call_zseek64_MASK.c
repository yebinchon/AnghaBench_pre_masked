
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long (* zseek64_file ) (int ,int ,scalar_t__,int) ;int opaque; } ;
struct TYPE_5__ {long (* zseek32_file ) (int ,int ,scalar_t__,int) ;TYPE_1__ zfile_func64; } ;
typedef TYPE_2__ zlib_filefunc64_32_def ;
typedef int voidpf ;
typedef scalar_t__ uLong ;
typedef scalar_t__ ZPOS64_T ;


 long FUNC_0 (int ,int ,scalar_t__,int) ;
 long FUNC_1 (int ,int ,scalar_t__,int) ;

long FUNC_2 (const zlib_filefunc64_32_def* VAR_0,voidpf VAR_1, ZPOS64_T VAR_2, int VAR_3)
{
    if (VAR_0->zfile_func64.zseek64_file != ((void*)0))
        return (*(VAR_0->zfile_func64.zseek64_file)) (VAR_0->zfile_func64.opaque,VAR_1,VAR_2,VAR_3);
    else
    {
        uLong VAR_4 = (uLong)VAR_2;
        if (VAR_4 != VAR_2)
            return -1;
        else
            return (*(VAR_0->zseek32_file))(VAR_0->zfile_func64.opaque,VAR_1,VAR_4,VAR_3);
    }
}
