
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;

__attribute__((used)) static float FUNC_0(const float VAR_1)
{
 if (VAR_1 == 1.0f)
  return 0.0f;
 else if (VAR_1 <= 0.0f)
  return -VAR_0;

 float VAR_2;

 if (VAR_1 >= 0.75f)
  VAR_2 = (VAR_1 - 1.0f) / 0.25f * 9.0f;
 else if (VAR_1 >= 0.5f)
  VAR_2 = (VAR_1 - 0.75f) / 0.25f * 11.0f - 9.0f;
 else if (VAR_1 >= 0.3f)
  VAR_2 = (VAR_1 - 0.5f) / 0.2f * 10.0f - 20.0f;
 else if (VAR_1 >= 0.15f)
  VAR_2 = (VAR_1 - 0.3f) / 0.15f * 10.0f - 30.0f;
 else if (VAR_1 >= 0.075f)
  VAR_2 = (VAR_1 - 0.15f) / 0.075f * 10.0f - 40.0f;
 else if (VAR_1 >= 0.025f)
  VAR_2 = (VAR_1 - 0.075f) / 0.05f * 10.0f - 50.0f;
 else if (VAR_1 >= 0.001f)
  VAR_2 = (VAR_1 - 0.025f) / 0.025f * 90.0f - 60.0f;
 else
  VAR_2 = -VAR_0;

 return VAR_2;
}
