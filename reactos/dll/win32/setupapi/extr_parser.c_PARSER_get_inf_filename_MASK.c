
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_file {int const* filename; } ;
typedef int WCHAR ;
typedef struct inf_file* HINF ;



const WCHAR *FUNC_0( HINF VAR_0 )
{
    struct inf_file *VAR_1 = VAR_0;
    return VAR_1->filename;
}
