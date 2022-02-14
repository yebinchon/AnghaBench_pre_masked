
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0, unsigned int *VAR_1)
{
 unsigned int VAR_2;

 if (VAR_1)
  *VAR_1 = VAR_0;

 switch (VAR_0) {
 case 8000: return 5;
 case 11025: return 4;
 case 16000: return 3;
 case 22050: return 2;
 case 44100: return 1;
 case 48000: return 0;
 default:
  break;
 }
 VAR_2 = 1536000 / VAR_0;
 if (VAR_1)
  *VAR_1 = 1536000 / VAR_2;
 return VAR_2;
}
