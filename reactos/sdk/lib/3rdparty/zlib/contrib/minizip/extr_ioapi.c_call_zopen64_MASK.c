
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int opaque; int (* zopen64_file ) (int ,void const*,int) ;} ;
struct TYPE_5__ {TYPE_1__ zfile_func64; int (* zopen32_file ) (int ,char const*,int) ;} ;
typedef TYPE_2__ zlib_filefunc64_32_def ;
typedef int voidpf ;


 int FUNC_0 (int ,void const*,int) ;
 int FUNC_1 (int ,char const*,int) ;

voidpf FUNC_2 (const zlib_filefunc64_32_def* VAR_0,const void*VAR_1,int VAR_2)
{
    if (VAR_0->zfile_func64.zopen64_file != ((void*)0))
        return (*(VAR_0->zfile_func64.zopen64_file)) (VAR_0->zfile_func64.opaque,VAR_1,VAR_2);
    else
    {
        return (*(VAR_0->zopen32_file))(VAR_0->zfile_func64.opaque,(const char*)VAR_1,VAR_2);
    }
}
