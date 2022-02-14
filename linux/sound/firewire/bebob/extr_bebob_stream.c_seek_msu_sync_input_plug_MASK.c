
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
struct snd_bebob {int sync_input_plug; TYPE_1__* unit; } ;
typedef enum avc_bridgeco_plug_type { ____Placeholder_avc_bridgeco_plug_type } avc_bridgeco_plug_type ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int*,int ,unsigned int) ;
 int FUNC_1 (TYPE_1__*,unsigned int*,int*) ;
 int FUNC_2 (TYPE_1__*,int,int,int,unsigned int*) ;
 int FUNC_3 (int *,char*,unsigned int,...) ;

__attribute__((used)) static int
FUNC_4(struct snd_bebob *VAR_4)
{
 u8 VAR_5[VAR_3], VAR_6[VAR_0];
 unsigned int VAR_7;
 enum avc_bridgeco_plug_type VAR_8;
 int VAR_9;


 VAR_9 = FUNC_2(VAR_4->unit, 0x0c, 0x00, 0x00, VAR_5);
 if (VAR_9 < 0) {
  FUNC_3(&VAR_4->unit->device,
   "fail to get info for MSU in/out plugs: %d\n",
   VAR_9);
  goto end;
 }


 VAR_4->sync_input_plug = -1;
 for (VAR_7 = 0; VAR_7 < VAR_5[0]; VAR_7++) {
  FUNC_0(VAR_6, VAR_1, VAR_7);
  VAR_9 = FUNC_1(VAR_4->unit, VAR_6, &VAR_8);
  if (VAR_9 < 0) {
   FUNC_3(&VAR_4->unit->device,
    "fail to get type for MSU in plug %d: %d\n",
    VAR_7, VAR_9);
   goto end;
  }

  if (VAR_8 == VAR_2) {
   VAR_4->sync_input_plug = VAR_7;
   break;
  }
 }
end:
 return VAR_9;
}
