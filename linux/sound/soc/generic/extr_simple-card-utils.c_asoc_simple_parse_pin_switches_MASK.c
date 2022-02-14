
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {unsigned int num_controls; struct snd_kcontrol_new* controls; struct device* dev; } ;
struct snd_kcontrol_new {char const* name; unsigned long private_value; int put; int get; int info; int iface; } ;
struct device {int of_node; } ;
typedef int prop ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct device*,int ,char*,char const*) ;
 void* FUNC_1 (struct device*,unsigned int const,int,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char const**,unsigned int const) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,int,char*,char*,char*) ;

int FUNC_5(struct snd_soc_card *VAR_6,
       char *VAR_7)
{
 const unsigned int VAR_8 = 16;
 const char **VAR_9, *VAR_10;
 struct snd_kcontrol_new *VAR_11;
 struct device *VAR_12 = VAR_6->dev;
 unsigned int VAR_13, VAR_14;
 char VAR_15[128];
 int VAR_16;

 if (!VAR_7)
  VAR_7 = "";

 FUNC_4(VAR_15, sizeof(VAR_15), "%s%s", VAR_7, "pin-switches");

 if (!FUNC_2(VAR_12->of_node, VAR_15))
  return 0;

 VAR_9 = FUNC_1(VAR_12, VAR_8,
          sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_16 = FUNC_3(VAR_12->of_node, VAR_15,
         VAR_9, VAR_8);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_14 = (unsigned int)VAR_16;

 VAR_11 = FUNC_1(VAR_12, VAR_14,
    sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_10 = FUNC_0(VAR_12, VAR_1,
           "%s Switch", VAR_9[VAR_13]);
  if (!VAR_10)
   return -VAR_0;

  VAR_11[VAR_13].iface = VAR_2;
  VAR_11[VAR_13].name = VAR_10;
  VAR_11[VAR_13].info = VAR_4;
  VAR_11[VAR_13].get = VAR_3;
  VAR_11[VAR_13].put = VAR_5;
  VAR_11[VAR_13].private_value = (unsigned long)VAR_9[VAR_13];
 }

 VAR_6->controls = VAR_11;
 VAR_6->num_controls = VAR_14;

 return 0;
}
