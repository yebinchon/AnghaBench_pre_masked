
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_galaxy {int port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_galaxy *VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->port, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_1->port, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 return 0;
}
