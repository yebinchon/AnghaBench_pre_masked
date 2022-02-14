
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct ac97_id {int mask; int id; } ;
struct ac97_codec_driver {struct ac97_id* id_table; } ;
struct ac97_codec_device {int vendor_id; } ;


 scalar_t__ FUNC_0 (int ,int,int ) ;
 struct ac97_codec_device* FUNC_1 (struct device*) ;
 struct ac97_codec_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct ac97_codec_device *VAR_2 = FUNC_1(VAR_0);
 struct ac97_codec_driver *VAR_3 = FUNC_2(VAR_1);
 const struct ac97_id *VAR_4 = VAR_3->id_table;
 int VAR_5 = 0;

 if (VAR_2->vendor_id == 0x0 || VAR_2->vendor_id == 0xffffffff)
  return 0;

 do {
  if (FUNC_0(VAR_4[VAR_5].id, VAR_2->vendor_id, VAR_4[VAR_5].mask))
   return 1;
 } while (VAR_4[VAR_5++].id);

 return 0;
}
