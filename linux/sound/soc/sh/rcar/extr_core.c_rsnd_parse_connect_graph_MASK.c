
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_dai_stream {int name; } ;
struct device_node {int full_name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct rsnd_dai_stream*,int ) ;
 int FUNC_3 (struct rsnd_dai_stream*) ;
 int FUNC_4 (struct rsnd_priv*,struct rsnd_dai_stream*,struct device_node*) ;
 struct device* FUNC_5 (struct rsnd_priv*) ;
 scalar_t__ FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct rsnd_priv *VAR_2,
         struct rsnd_dai_stream *VAR_3,
         struct device_node *VAR_4)
{
 struct device *VAR_5 = FUNC_5(VAR_2);
 struct device_node *VAR_6 = FUNC_1(VAR_4);

 if (!FUNC_3(VAR_3))
  return;


 if (FUNC_6(VAR_6->full_name, "hdmi@fead0000")) {
  FUNC_2(VAR_3, VAR_0);
  FUNC_0(VAR_5, "%s connected to HDMI0\n", VAR_3->name);
 }


 if (FUNC_6(VAR_6->full_name, "hdmi@feae0000")) {
  FUNC_2(VAR_3, VAR_1);
  FUNC_0(VAR_5, "%s connected to HDMI1\n", VAR_3->name);
 }

 FUNC_4(VAR_2, VAR_3, VAR_4);
}
