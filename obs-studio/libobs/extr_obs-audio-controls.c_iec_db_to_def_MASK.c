
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float const VAR_0 ;

__attribute__((used)) static float FUNC_0(const float VAR_1)
{
 if (VAR_1 == 0.0f)
  return 1.0f;
 else if (VAR_1 == -VAR_0)
  return 0.0f;

 float VAR_2;

 if (VAR_1 >= -9.0f)
  VAR_2 = (VAR_1 + 9.0f) / 9.0f * 0.25f + 0.75f;
 else if (VAR_1 >= -20.0f)
  VAR_2 = (VAR_1 + 20.0f) / 11.0f * 0.25f + 0.5f;
 else if (VAR_1 >= -30.0f)
  VAR_2 = (VAR_1 + 30.0f) / 10.0f * 0.2f + 0.3f;
 else if (VAR_1 >= -40.0f)
  VAR_2 = (VAR_1 + 40.0f) / 10.0f * 0.15f + 0.15f;
 else if (VAR_1 >= -50.0f)
  VAR_2 = (VAR_1 + 50.0f) / 10.0f * 0.075f + 0.075f;
 else if (VAR_1 >= -60.0f)
  VAR_2 = (VAR_1 + 60.0f) / 10.0f * 0.05f + 0.025f;
 else if (VAR_1 >= -114.0f)
  VAR_2 = (VAR_1 + 150.0f) / 90.0f * 0.025f;
 else
  VAR_2 = 0.0f;

 return VAR_2;
}
