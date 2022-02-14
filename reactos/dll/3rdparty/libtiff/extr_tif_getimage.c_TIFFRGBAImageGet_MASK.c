
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {int tif_clientdata; } ;
struct TYPE_6__ {int * any; } ;
struct TYPE_7__ {int (* get ) (TYPE_2__*,int *,int ,int ) ;TYPE_5__* tif; TYPE_1__ put; } ;
typedef TYPE_2__ TIFFRGBAImage ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_2__*,int *,int ,int ) ;

int
FUNC_3(TIFFRGBAImage* VAR_0, uint32* VAR_1, uint32 VAR_2, uint32 VAR_3)
{
    if (VAR_0->get == ((void*)0)) {
  FUNC_0(VAR_0->tif->tif_clientdata, FUNC_1(VAR_0->tif), "No \"get\" routine setup");
  return (0);
 }
 if (VAR_0->put.any == ((void*)0)) {
  FUNC_0(VAR_0->tif->tif_clientdata, FUNC_1(VAR_0->tif),
  "No \"put\" routine setupl; probably can not handle image format");
  return (0);
    }
    return (*VAR_0->get)(VAR_0, VAR_1, VAR_2, VAR_3);
}
