
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_vu_meter {int saturated; int vu_level; int peak_level; } ;
struct vx_rmh {int LgStat; int* Cmd; int* Stat; } ;
struct vx_core {int chip_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vx_rmh*,int ) ;
 int FUNC_1 (struct vx_core*,struct vx_rmh*) ;

__attribute__((used)) static int FUNC_2(struct vx_core *VAR_5, int VAR_6, int VAR_7, struct vx_vu_meter *VAR_8)
{
 struct vx_rmh VAR_9;
 int VAR_10, VAR_11;

 if (VAR_5->chip_status & VAR_4)
  return -VAR_2;

 FUNC_0(&VAR_9, VAR_0);
 VAR_9.LgStat += 2 * VAR_3;
 if (VAR_7)
  VAR_9.Cmd[0] |= VAR_1;


 VAR_9.Cmd[1] = 0;
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  VAR_9.Cmd[1] |= 1 << (VAR_6 + VAR_10);
 VAR_11 = FUNC_1(VAR_5, &VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 for (VAR_10 = 0; VAR_10 < 2 * VAR_3; VAR_10 +=2) {
  VAR_8->saturated = (VAR_9.Stat[0] & (1 << (VAR_6 + VAR_10))) ? 1 : 0;
  VAR_8->vu_level = VAR_9.Stat[VAR_10 + 1];
  VAR_8->peak_level = VAR_9.Stat[VAR_10 + 2];
  VAR_8++;
 }
 return 0;
}
