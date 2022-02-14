
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_flags_t ;
struct zip_dirent {scalar_t__ uncomp_size; scalar_t__ comp_size; scalar_t__ offset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(const struct zip_dirent *VAR_2, zip_flags_t VAR_3)
{
    if (VAR_2->uncomp_size >= VAR_1 || VAR_2->comp_size >= VAR_1
 || ((VAR_3 & VAR_0) && VAR_2->offset >= VAR_1))
 return 1;

    return 0;
}
