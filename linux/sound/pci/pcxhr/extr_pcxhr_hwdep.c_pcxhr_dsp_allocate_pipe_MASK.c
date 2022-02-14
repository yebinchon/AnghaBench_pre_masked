
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_rmh {int* cmd; int cmd_len; } ;
struct pcxhr_pipe {int is_capture; int first_audio; int status; } ;
struct pcxhr_mgr {TYPE_1__* pci; scalar_t__ mono_capture; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pcxhr_mgr*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int,char) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct pcxhr_rmh*,int ) ;
 int FUNC_4 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;
 int FUNC_5 (struct pcxhr_rmh*,int,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct pcxhr_mgr *VAR_3,
       struct pcxhr_pipe *VAR_4,
       int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9;
 struct pcxhr_rmh VAR_10;

 if (VAR_5) {
  VAR_7 = 1;
  if (VAR_3->mono_capture)
   VAR_8 = 1;
  else
   VAR_8 = 2;
 } else {
  VAR_7 = VAR_2;
  VAR_8 = 2;
 }
 FUNC_1(&VAR_3->pci->dev, "snd_add_ref_pipe pin(%d) pcm%c0\n",
      VAR_6, VAR_5 ? 'c' : 'p');
 VAR_4->is_capture = VAR_5;
 VAR_4->first_audio = VAR_6;

 FUNC_3(&VAR_10, VAR_0);
 FUNC_5(&VAR_10, VAR_5, VAR_6,
      VAR_8, VAR_7);
 VAR_10.cmd[1] |= 0x020000;
 if (FUNC_0(VAR_3)) {

   VAR_10.cmd[VAR_10.cmd_len++] = (VAR_8 == 1) ? 0x01 : 0x03;
 }
 VAR_9 = FUNC_4(VAR_3, &VAR_10);
 if (VAR_9 < 0) {
  FUNC_2(&VAR_3->pci->dev, "error pipe allocation "
      "(CMD_RES_PIPE) err=%x!\n", VAR_9);
  return VAR_9;
 }
 VAR_4->status = VAR_1;

 return 0;
}
