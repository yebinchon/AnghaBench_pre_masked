
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_dirent {scalar_t__ version_needed; int bitflags; scalar_t__ comp_method; scalar_t__ last_mod; scalar_t__ crc; scalar_t__ comp_size; scalar_t__ uncomp_size; int filename; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const struct zip_dirent *VAR_1, const struct zip_dirent *VAR_2)
{
    if ((VAR_1->version_needed != VAR_2->version_needed)





 || (VAR_1->comp_method != VAR_2->comp_method)
 || (VAR_1->last_mod != VAR_2->last_mod)
 || !FUNC_0(VAR_1->filename, VAR_2->filename)) {
 return -1;
    }


    if ((VAR_1->crc != VAR_2->crc) || (VAR_1->comp_size != VAR_2->comp_size)
 || (VAR_1->uncomp_size != VAR_2->uncomp_size)) {


 if (((VAR_2->bitflags & VAR_0) == 0
      || VAR_2->crc != 0 || VAR_2->comp_size != 0 || VAR_2->uncomp_size != 0))
     return -1;
    }

    return 0;
}
