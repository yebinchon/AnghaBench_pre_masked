
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_galaxy {int wss_port; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_galaxy*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_galaxy *VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->wss_port);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_2(VAR_1->wss_port, VAR_2);

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
