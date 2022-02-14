
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wcd9335_codec {int if_regmap; int dev; int irq_data; } ;
struct TYPE_3__ {int name; int handler; int irq; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int,int *,int ,int,int ,struct wcd9335_codec*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_5(struct wcd9335_codec *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  VAR_6 = FUNC_3(VAR_5->irq_data, VAR_4[VAR_8].irq);
  if (VAR_6 < 0) {
   FUNC_1(VAR_5->dev, "Failed to get %s\n",
     VAR_4[VAR_8].name);
   return VAR_6;
  }

  VAR_7 = FUNC_2(VAR_5->dev, VAR_6, ((void*)0),
      VAR_4[VAR_8].handler,
      VAR_1 |
      VAR_0,
      VAR_4[VAR_8].name, VAR_5);
  if (VAR_7) {
   FUNC_1(VAR_5->dev, "Failed to request %s\n",
     VAR_4[VAR_8].name);
   return VAR_7;
  }
 }


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  FUNC_4(VAR_5->if_regmap, VAR_3 + VAR_8,
        0xFF);

 return VAR_7;
}
