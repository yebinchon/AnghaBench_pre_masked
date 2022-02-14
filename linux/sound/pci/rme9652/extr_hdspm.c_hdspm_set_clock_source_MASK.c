
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int dummy; } ;


 int FUNC_0 (struct hdspm*,int,int) ;

__attribute__((used)) static int FUNC_1(struct hdspm * VAR_0, int VAR_1)
{
 int VAR_2;
 switch (VAR_1) {
 case 0:
  VAR_2 = 32000; break;
 case 1:
  VAR_2 = 44100; break;
 case 2:
  VAR_2 = 48000; break;
 case 3:
  VAR_2 = 64000; break;
 case 4:
  VAR_2 = 88200; break;
 case 5:
  VAR_2 = 96000; break;
 case 6:
  VAR_2 = 128000; break;
 case 7:
  VAR_2 = 176400; break;
 case 8:
  VAR_2 = 192000; break;
 default:
  VAR_2 = 48000;
 }
 FUNC_0(VAR_0, VAR_2, 1);
 return 0;
}
