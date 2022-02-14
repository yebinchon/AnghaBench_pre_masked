
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int pvd_lba; } ;
typedef TYPE_1__ udf_t ;
struct TYPE_6__ {unsigned int* vol_ident; } ;
typedef TYPE_2__ udf_pvd_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int **,int ,int) ;
 char* FUNC_5 (int *,unsigned int) ;

int
FUNC_6(udf_t *VAR_3, char *VAR_4, unsigned int VAR_5)
{
  uint8_t VAR_6[VAR_1];
  const udf_pvd_t *VAR_7 = (udf_pvd_t *) &VAR_6;
  char* VAR_8;
  unsigned int VAR_9;


  if (VAR_4 != ((void*)0))
    VAR_4[0] = 0;


  if ( VAR_0 != FUNC_4(VAR_3, &VAR_6, VAR_3->pvd_lba, 1) )
    return 0;

  VAR_9 = VAR_7->vol_ident[VAR_2-1];
  if(VAR_9 > VAR_2-1) {

    VAR_9 = VAR_2-1;
  }

  VAR_8 = FUNC_5((uint8_t *) VAR_7->vol_ident, VAR_9);
  if (VAR_8 == ((void*)0))
    return 0;

  VAR_9 = FUNC_2(VAR_8)+1;
  if (VAR_4 != ((void*)0)) {
    FUNC_3(VAR_4, VAR_8, FUNC_0(VAR_9, VAR_5));
    VAR_4[VAR_5-1] = 0;
  }
  FUNC_1(VAR_8);

  return VAR_9;
}
