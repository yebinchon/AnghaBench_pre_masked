
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int td_customValueCount; int td_stripbytecount_entry; int td_stripoffset_entry; TYPE_1__* td_customValues; int * td_fieldsset; } ;
struct TYPE_8__ {TYPE_2__ tif_dir; } ;
struct TYPE_6__ {scalar_t__ value; } ;
typedef TYPE_2__ TIFFDirectory ;
typedef int TIFFDirEntry ;
typedef TYPE_3__ TIFF ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,int) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;

void
FUNC_4(TIFF* VAR_14)
{
 TIFFDirectory *VAR_15 = &VAR_14->tif_dir;
 int VAR_16;

 FUNC_3(VAR_15->td_fieldsset, 0, VAR_0);
 FUNC_0(VAR_9);
 FUNC_0(VAR_8);
 FUNC_0(VAR_3[0]);
 FUNC_0(VAR_3[1]);
 FUNC_0(VAR_3[2]);
 FUNC_0(VAR_7);
 FUNC_0(VAR_12);
 FUNC_0(VAR_5);
 FUNC_0(VAR_6);
 FUNC_0(VAR_13[0]);
 FUNC_0(VAR_13[1]);
 FUNC_0(VAR_13[2]);
 FUNC_0(VAR_11);
 FUNC_0(VAR_10);
 FUNC_1(VAR_14, VAR_2);
 FUNC_1(VAR_14, VAR_1);


 for( VAR_16 = 0; VAR_16 < VAR_15->td_customValueCount; VAR_16++ ) {
  if (VAR_15->td_customValues[VAR_16].value)
   FUNC_2(VAR_15->td_customValues[VAR_16].value);
 }

 VAR_15->td_customValueCount = 0;
 FUNC_0(VAR_4);





}
