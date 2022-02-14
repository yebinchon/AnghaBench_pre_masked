
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_galaxy {int res_port; scalar_t__ port; int res_config_port; scalar_t__ config_port; int config; int res_wss_port; scalar_t__ wss_port; } ;
struct snd_card {struct snd_galaxy* private_data; } ;


 int FUNC_0 (struct snd_galaxy*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_card *VAR_0)
{
 struct snd_galaxy *VAR_1 = VAR_0->private_data;

 if (VAR_1->wss_port) {
  FUNC_3(VAR_1->wss_port, 0);
  FUNC_1(VAR_1->wss_port);
  FUNC_2(VAR_1->res_wss_port);
 }
 if (VAR_1->config_port) {
  FUNC_0(VAR_1, VAR_1->config);
  FUNC_1(VAR_1->config_port);
  FUNC_2(VAR_1->res_config_port);
 }
 if (VAR_1->port) {
  FUNC_1(VAR_1->port);
  FUNC_2(VAR_1->res_port);
 }
}
