
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct amdtp_stream {int dummy; } ;
struct snd_bebob {TYPE_1__* unit; struct amdtp_stream tx_stream; } ;
typedef enum avc_bridgeco_plug_dir { ____Placeholder_avc_bridgeco_plug_dir } avc_bridgeco_plug_dir ;
struct TYPE_3__ {int device; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct amdtp_stream*,unsigned int) ;
 int FUNC_1 (struct amdtp_stream*,unsigned int,unsigned int) ;
 int FUNC_2 (int*,int,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int*,int*,int) ;
 int FUNC_4 (TYPE_1__*,int*,unsigned int,int*) ;
 int FUNC_5 (int *,char*,char*,int) ;
 int FUNC_6 (int*) ;
 int* FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_bebob *VAR_8, struct amdtp_stream *VAR_9)
{
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18, VAR_19;
 u8 *VAR_20, VAR_21[VAR_1], VAR_22;
 enum avc_bridgeco_plug_dir VAR_23;
 int VAR_24;





 VAR_20 = FUNC_7(256, VAR_7);
 if (VAR_20 == ((void*)0))
  return -VAR_5;

 if (VAR_9 == &VAR_8->tx_stream)
  VAR_23 = VAR_3;
 else
  VAR_23 = VAR_2;

 FUNC_2(VAR_21, VAR_23, VAR_4, 0);
 VAR_24 = FUNC_3(VAR_8->unit, VAR_21, VAR_20, 256);
 if (VAR_24 < 0) {
  FUNC_5(&VAR_8->unit->device,
   "fail to get channel position for isoc %s plug 0: %d\n",
   (VAR_23 == VAR_2) ? "in" : "out",
   VAR_24);
  goto end;
 }
 VAR_19 = 0;


 VAR_14 = 0;
 VAR_15 = 0;


 VAR_11 = VAR_20[VAR_19++];

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {

  FUNC_2(VAR_21, VAR_23,
         VAR_4, 0);
  VAR_24 = FUNC_4(VAR_8->unit, VAR_21,
        VAR_10, &VAR_22);
  if (VAR_24 < 0) {
   FUNC_5(&VAR_8->unit->device,
   "fail to get section type for isoc %s plug 0: %d\n",
    (VAR_23 == VAR_2) ? "in" :
            "out",
    VAR_24);
   goto end;
  }

  if (VAR_22 == 0xff) {
   VAR_24 = -VAR_6;
   goto end;
  }


  VAR_13 = VAR_20[VAR_19++];

  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {

   VAR_17 = VAR_20[VAR_19++] - 1;

   VAR_18 = VAR_20[VAR_19++] - 1;







   if (VAR_18 >= VAR_13)
    VAR_18 = VAR_12;

   switch (VAR_22) {

   case 0x0a:

    if ((VAR_15 > 0) && (VAR_17 != VAR_15)) {
     VAR_24 = -VAR_6;
     goto end;
    }
    FUNC_0(VAR_9, VAR_17);
    VAR_15 = VAR_17;
    break;

   case 0x01:
   case 0x02:
   case 0x03:
   case 0x04:
   case 0x05:
   case 0x06:
   case 0x07:

   case 0x08:
   case 0x09:
   default:
    VAR_16 = VAR_14 + VAR_18;
    if (VAR_16 >= VAR_0) {
     VAR_24 = -VAR_6;
     goto end;
    }
    FUNC_1(VAR_9, VAR_16,
            VAR_17);
    break;
   }
  }

  if (VAR_22 != 0x0a)
   VAR_14 += VAR_13;
  else
   VAR_15 += VAR_13;
 }
end:
 FUNC_6(VAR_20);
 return VAR_24;
}
