
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_4__ {int tif_flags; } ;
typedef int TIFFDirEntry ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int ,int ,int,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(TIFF* VAR_2, uint32* VAR_3, TIFFDirEntry* VAR_4, uint16 VAR_5, uint32 VAR_6)
{
 uint32 VAR_7;
 FUNC_2(sizeof(uint32)==4);
 VAR_7=VAR_6;
 if (VAR_2->tif_flags&VAR_1)
  FUNC_0(&VAR_7);
 return(FUNC_1(VAR_2,VAR_3,VAR_4,VAR_5,VAR_0,1,4,&VAR_7));
}
