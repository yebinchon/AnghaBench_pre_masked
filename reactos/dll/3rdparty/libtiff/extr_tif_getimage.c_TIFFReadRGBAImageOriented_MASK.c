
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ uint16 ;
struct TYPE_11__ {int tif_clientdata; } ;
struct TYPE_10__ {int height; scalar_t__ req_orientation; } ;
typedef TYPE_1__ TIFFRGBAImage ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (int ,int ,char*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__*,int,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int*,int,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,char*) ;

int
FUNC_6(TIFF* VAR_0,
     uint32 VAR_1, uint32 VAR_2, uint32* VAR_3,
     int VAR_4, int VAR_5)
{
    char VAR_6[1024] = "";
    TIFFRGBAImage VAR_7;
    int VAR_8;

 if (FUNC_5(VAR_0, VAR_6) && FUNC_2(&VAR_7, VAR_0, VAR_5, VAR_6)) {
  VAR_7.req_orientation = (uint16)VAR_4;

  VAR_8 = FUNC_4(&VAR_7, VAR_3+(VAR_2-VAR_7.height)*VAR_1,
   VAR_1, VAR_7.height);
  FUNC_3(&VAR_7);
 } else {
  FUNC_0(VAR_0->tif_clientdata, FUNC_1(VAR_0), "%s", VAR_6);
  VAR_8 = 0;
    }
    return (VAR_8);
}
