
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_device {struct snd_compr* device_data; } ;
struct snd_compr {int dev; int device; int card; int direction; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int *,struct snd_compr*,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_device *VAR_4)
{
 int VAR_5 = -VAR_1;
 struct snd_compr *VAR_6;

 if (FUNC_2(!VAR_4 || !VAR_4->device_data))
  return -VAR_0;
 VAR_6 = VAR_4->device_data;

 FUNC_0("reg device %s, direction %d\n", VAR_6->name,
   VAR_6->direction);

 VAR_5 = FUNC_3(VAR_2,
      VAR_6->card, VAR_6->device,
      &VAR_3, VAR_6, &VAR_6->dev);
 if (VAR_5 < 0) {
  FUNC_1("snd_register_device failed %d\n", VAR_5);
  return VAR_5;
 }
 return VAR_5;

}
