
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_3__ {int n_fatent; int csize; } ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int*,TYPE_1__**) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int32_t FUNC_1( uint32_t *VAR_5, uint32_t *VAR_6 )
{
  DWORD VAR_7;
  FATFS *VAR_8;

  if ((VAR_4 = FUNC_0( "", &VAR_7, &VAR_8 )) == VAR_1) {

    *VAR_5 = (VAR_8->n_fatent * VAR_8->csize) / (1024 / VAR_0);
    *VAR_6 = *VAR_5 - (VAR_7 * VAR_8->csize) / (1024 / VAR_0);
  }

  return VAR_4 == VAR_1 ? VAR_3 : VAR_2;
}
