
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum audio_format { ____Placeholder_audio_format } audio_format ;
__attribute__((used)) static inline size_t FUNC_0(enum audio_format VAR_0)
{
 switch (VAR_0) {
 case 130:
 case 129:
  return 1;

 case 136:
 case 135:
  return 2;

 case 132:
 case 131:
 case 134:
 case 133:
  return 4;

 case 128:
  return 0;
 }

 return 0;
}
