
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filestream; int z_filefunc; scalar_t__ add_position_when_writing_offset; } ;
typedef TYPE_1__ zip64_internal ;
typedef scalar_t__ uLong ;
typedef scalar_t__ ZPOS64_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__,int) ;

int FUNC_1(zip64_internal* VAR_2, ZPOS64_T VAR_3)
{
  int VAR_4 = VAR_1;
  ZPOS64_T VAR_5 = VAR_3 - VAR_2->add_position_when_writing_offset;

  VAR_4 = FUNC_0(&VAR_2->z_filefunc,VAR_2->filestream,(uLong)VAR_0,4);


    if (VAR_4==VAR_1)
      VAR_4 = FUNC_0(&VAR_2->z_filefunc,VAR_2->filestream,(uLong)0,4);


    if (VAR_4==VAR_1)
      VAR_4 = FUNC_0(&VAR_2->z_filefunc,VAR_2->filestream, VAR_5,8);


    if (VAR_4==VAR_1)
      VAR_4 = FUNC_0(&VAR_2->z_filefunc,VAR_2->filestream,(uLong)1,4);

    return VAR_4;
}
