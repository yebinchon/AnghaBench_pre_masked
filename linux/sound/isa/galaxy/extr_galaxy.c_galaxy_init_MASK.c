
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct snd_galaxy {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_galaxy *VAR_5, u8 *VAR_6)
{
 u8 VAR_7;
 u8 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_5->port);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_5->port, &VAR_7, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_7 != VAR_3 || VAR_8 != VAR_4)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_5->port, VAR_0);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_5->port, VAR_2);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_5->port, VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 return 0;
}
