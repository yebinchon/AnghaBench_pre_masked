
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_rmh {int DspStat; scalar_t__ LgStat; int* Stat; } ;
struct vx_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct vx_core*,int ) ;
 int FUNC_2 (struct vx_core*,int ) ;
 int FUNC_3 (struct vx_core*,int ) ;
 int FUNC_4 (struct vx_core*) ;

__attribute__((used)) static int FUNC_5(struct vx_core *VAR_8, struct vx_rmh *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;


 if (VAR_9->DspStat == VAR_3 && VAR_9->LgStat == 0)
  return 0;




 VAR_11 = FUNC_4(VAR_8);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_12 = FUNC_1(VAR_8, VAR_4) << 16;
 VAR_12 |= FUNC_1(VAR_8, VAR_6) << 8;
 VAR_12 |= FUNC_1(VAR_8, VAR_5);


 switch (VAR_9->DspStat) {
 case 129:
  VAR_13 = VAR_12 & 0xff;
  VAR_9->Stat[0] = VAR_12 & 0xffff00;
  VAR_9->LgStat = VAR_13 + 1;
  break;
 case 128:

  VAR_9->Stat[0] = VAR_12;
  VAR_13 = 0;
  while (VAR_12) {
   if (VAR_12 & 0x01)
    VAR_13++;
   VAR_12 >>= 1;
  }
  VAR_9->LgStat = VAR_13 + 1;
  break;
 default:

  VAR_13 = VAR_9->LgStat;
  VAR_9->Stat[0] = VAR_12;
  VAR_13--;
  break;
        }

 if (VAR_13 < 1)
  return 0;
 if (FUNC_0(VAR_13 >= VAR_7))
  return -VAR_0;

 for (VAR_10 = 1; VAR_10 <= VAR_13; VAR_10++) {

  VAR_11 = FUNC_2(VAR_8, VAR_2);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_11 = FUNC_4(VAR_8);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_9->Stat[VAR_10] = FUNC_1(VAR_8, VAR_4) << 16;
  VAR_9->Stat[VAR_10] |= FUNC_1(VAR_8, VAR_6) << 8;
  VAR_9->Stat[VAR_10] |= FUNC_1(VAR_8, VAR_5);
 }

 return FUNC_3(VAR_8, VAR_1);
}
