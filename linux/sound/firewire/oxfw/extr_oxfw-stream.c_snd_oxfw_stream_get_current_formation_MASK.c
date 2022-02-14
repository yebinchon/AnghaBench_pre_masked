
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_oxfw_stream_formation {int dummy; } ;
struct snd_oxfw {int unit; } ;
typedef enum avc_general_plug_dir { ____Placeholder_avc_general_plug_dir } avc_general_plug_dir ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int *,unsigned int*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int *,struct snd_oxfw_stream_formation*) ;

int FUNC_4(struct snd_oxfw *VAR_4,
    enum avc_general_plug_dir VAR_5,
    struct snd_oxfw_stream_formation *VAR_6)
{
 u8 *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_8 = VAR_0;
 VAR_7 = FUNC_2(VAR_8, VAR_3);
 if (VAR_7 == ((void*)0))
  return -VAR_2;

 VAR_9 = FUNC_0(VAR_4->unit, VAR_5, 0, VAR_7, &VAR_8);
 if (VAR_9 < 0)
  goto end;
 if (VAR_8 < 3) {
  VAR_9 = -VAR_1;
  goto end;
 }

 VAR_9 = FUNC_3(VAR_7, VAR_6);
end:
 FUNC_1(VAR_7);
 return VAR_9;
}
