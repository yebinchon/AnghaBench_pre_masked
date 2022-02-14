
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ac97_controller {int parent; int adap; struct ac97_codec_device** codecs; } ;
struct TYPE_5__ {int of_node; int * parent; int * bus; int release; } ;
struct ac97_codec_device {unsigned int vendor_id; int num; TYPE_1__ dev; struct ac97_controller* ac97_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ac97_controller*,int,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 struct ac97_codec_device* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct ac97_controller *VAR_4, int VAR_5,
     unsigned int VAR_6)
{
 struct ac97_codec_device *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_4->codecs[VAR_5] = VAR_7;
 VAR_7->vendor_id = VAR_6;
 VAR_7->dev.release = VAR_3;
 VAR_7->dev.bus = &VAR_2;
 VAR_7->dev.parent = &VAR_4->adap;
 VAR_7->num = VAR_5;
 VAR_7->ac97_ctrl = VAR_4;

 FUNC_4(&VAR_7->dev);
 FUNC_2(&VAR_7->dev, "%s:%u", FUNC_1(VAR_4->parent), VAR_5);
 VAR_7->dev.of_node = FUNC_0(VAR_4, VAR_5,
            VAR_6);

 VAR_8 = FUNC_3(&VAR_7->dev);
 if (VAR_8) {
  FUNC_6(&VAR_7->dev);
  return VAR_8;
 }

 return 0;
}
