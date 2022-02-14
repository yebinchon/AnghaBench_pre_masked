
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cmi8328 {int port; scalar_t__ gameport; } ;
struct snd_card {struct snd_cmi8328* private_data; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_card* FUNC_0 (struct device*) ;
 struct resource* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct snd_card*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, unsigned int VAR_5)
{
 struct snd_card *VAR_6 = FUNC_0(VAR_4);
 struct snd_cmi8328 *VAR_7 = VAR_6->private_data;
 FUNC_5(VAR_7->port, VAR_0, VAR_1);
 FUNC_5(VAR_7->port, VAR_2, 0);
 FUNC_5(VAR_7->port, VAR_3, 0);
 FUNC_4(VAR_6);
 return 0;
}
