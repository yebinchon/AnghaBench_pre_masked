
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_rmh {int* cmd; int cmd_len; int* stat; } ;
struct pcxhr_mgr {int board_has_analog; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pcxhr_mgr*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct pcxhr_rmh*,int ) ;
 int FUNC_2 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;
 int FUNC_3 (struct pcxhr_mgr*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct pcxhr_mgr *VAR_7)
{
 int VAR_8;
 struct pcxhr_rmh VAR_9;


 FUNC_1(&VAR_9, VAR_0);
 VAR_9.cmd[0] |= VAR_2;
 VAR_9.cmd[1] = VAR_4;
 VAR_9.cmd_len = 2;
 VAR_8 = FUNC_2(VAR_7, &VAR_9);
 if (VAR_8)
  return VAR_8;

 if ((VAR_9.stat[1] & VAR_6) ==
     VAR_5)
  VAR_7->board_has_analog = 1;


 VAR_8 = FUNC_3(VAR_7, VAR_3,
       VAR_3, ((void*)0));
 if (VAR_8)
  return VAR_8;

 FUNC_1(&VAR_9, VAR_0);
 VAR_9.cmd[0] |= VAR_1;
 if (FUNC_0(VAR_7)) {
  VAR_9.cmd[1] = 1;
  VAR_9.cmd_len = 2;
 }
 VAR_8 = FUNC_2(VAR_7, &VAR_9);
 return VAR_8;
}
