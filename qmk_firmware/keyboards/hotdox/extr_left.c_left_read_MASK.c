
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;

uint8_t FUNC_4(uint8_t VAR_4, uint8_t *VAR_5)
{
  if (!VAR_3)
  {
    return 0;
  }

  uint8_t VAR_6 = 0;

  VAR_6 = FUNC_1(VAR_2, VAR_0); if (VAR_6) goto out;
  VAR_6 = FUNC_3(VAR_4, VAR_0); if (VAR_6) goto out;
  VAR_6 = FUNC_1(VAR_1, VAR_0); if (VAR_6) goto out;

  *VAR_5 = FUNC_0(VAR_0);

out:
  FUNC_2();
  return VAR_6;
}
