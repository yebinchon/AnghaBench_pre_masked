
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_5__ {int tif_flags; } ;
typedef int TIFFDirEntry ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (TYPE_1__*,int,double**) ;
 int FUNC_1 (double*,int) ;
 int FUNC_2 (TYPE_1__*,int*,int *,int ,int ,int,int,double*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(TIFF* VAR_2, uint32* VAR_3, TIFFDirEntry* VAR_4, uint16 VAR_5, uint32 VAR_6, double* VAR_7)
{
 FUNC_3(VAR_6<0x20000000);
 FUNC_3(sizeof(double)==8);
 FUNC_0(VAR_2,VAR_6,&VAR_7);
 if (VAR_2->tif_flags&VAR_1)
  FUNC_1(VAR_7,VAR_6);
 return(FUNC_2(VAR_2,VAR_3,VAR_4,VAR_5,VAR_0,VAR_6,VAR_6*8,VAR_7));
}
