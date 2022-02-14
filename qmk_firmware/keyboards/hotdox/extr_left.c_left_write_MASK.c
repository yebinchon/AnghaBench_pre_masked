
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

uint8_t FUNC_3(uint8_t VAR_3, uint8_t VAR_4)
{
  if (!VAR_2)
  {
    return 0;
  }

  uint8_t VAR_5;

  VAR_5 = FUNC_0(VAR_1, VAR_0); if (VAR_5) goto out;
  VAR_5 = FUNC_2(VAR_3, VAR_0); if (VAR_5) goto out;
  VAR_5 = FUNC_2(VAR_4, VAR_0);

out:
  FUNC_1();
  return VAR_5;
}
