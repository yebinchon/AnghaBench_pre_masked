
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct snd_oxfw_stream_formation {scalar_t__ rate; } ;
struct snd_oxfw {int assumed; TYPE_1__* card; TYPE_2__* unit; } ;
typedef enum avc_general_plug_dir { ____Placeholder_avc_general_plug_dir } avc_general_plug_dir ;
struct TYPE_5__ {int device; } ;
struct TYPE_4__ {int card_dev; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int,unsigned int) ;
 int FUNC_2 (TYPE_2__*,int,unsigned int,int *,unsigned int*) ;
 int * VAR_3 ;
 int FUNC_3 (int *,char*,char*,unsigned int,int) ;
 int * FUNC_4 (int *,int *,unsigned int,int ) ;
 scalar_t__* VAR_4 ;
 int FUNC_5 (int *,struct snd_oxfw_stream_formation*) ;

__attribute__((used)) static int
FUNC_6(struct snd_oxfw *VAR_5, enum avc_general_plug_dir VAR_6,
        unsigned int VAR_7, u8 *VAR_8, unsigned int *VAR_9,
        u8 **VAR_10)
{
 struct snd_oxfw_stream_formation VAR_11;
 unsigned int VAR_12, VAR_13;
 int VAR_14;


 VAR_14 = FUNC_2(VAR_5->unit, VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_14 < 0) {
  FUNC_3(&VAR_5->unit->device,
  "fail to get current stream format for isoc %s plug %d:%d\n",
   (VAR_6 == VAR_0) ? "in" : "out",
   VAR_7, VAR_14);
  goto end;
 }


 VAR_13 = 0;
 VAR_14 = FUNC_5(VAR_8, &VAR_11);
 if (VAR_14 < 0)
  goto end;

 VAR_10[VAR_13] = FUNC_4(&VAR_5->card->card_dev, VAR_8, *VAR_9,
        VAR_2);
 if (!VAR_10[VAR_13]) {
  VAR_14 = -VAR_1;
  goto end;
 }


 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_4); VAR_12++) {
  if (VAR_11.rate == VAR_4[VAR_12])
   continue;

  VAR_14 = FUNC_1(VAR_5->unit,
        VAR_4[VAR_12],
        VAR_6, VAR_7);
  if (VAR_14 < 0)
   continue;

  VAR_13++;
  VAR_10[VAR_13] = FUNC_4(&VAR_5->card->card_dev, VAR_8, *VAR_9,
         VAR_2);
  if (VAR_10[VAR_13] == ((void*)0)) {
   VAR_14 = -VAR_1;
   goto end;
  }
  VAR_10[VAR_13][2] = VAR_3[VAR_12];
 }

 VAR_14 = 0;
 VAR_5->assumed = 1;
end:
 return VAR_14;
}
