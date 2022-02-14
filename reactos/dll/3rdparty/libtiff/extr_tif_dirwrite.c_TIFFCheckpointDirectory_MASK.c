
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * td_stripoffset; } ;
struct TYPE_9__ {TYPE_1__ tif_dir; } ;
typedef TYPE_2__ TIFF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int *) ;
 int VAR_2 ;

int
FUNC_4(TIFF* VAR_3)
{
 int VAR_4;

 if (VAR_3->tif_dir.td_stripoffset == ((void*)0))
     (void) FUNC_2(VAR_3);
 VAR_4 = FUNC_3(VAR_3,VAR_2,VAR_0,((void*)0));
 (void) FUNC_1(VAR_3, FUNC_0(VAR_3, 0, VAR_1));
 return VAR_4;
}
