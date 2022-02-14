
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int system_sample_rate; } ;



__attribute__((used)) static int FUNC_0(struct hdspm * VAR_0)
{
 switch (VAR_0->system_sample_rate) {
 case 32000: return 0;
 case 44100: return 1;
 case 48000: return 2;
 case 64000: return 3;
 case 88200: return 4;
 case 96000: return 5;
 case 128000: return 6;
 case 176400: return 7;
 case 192000: return 8;
 }

 return -1;
}
