
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_rmh {int* cmd; int cmd_len; } ;
struct pcxhr_mgr {unsigned int codec_speed; unsigned int sample_rate_real; TYPE_1__* pci; int use_clock_type; int cur_clock_type; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pcxhr_mgr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,unsigned int,...) ;
 int FUNC_2 (struct pcxhr_mgr*,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_3 (struct pcxhr_rmh*,int ) ;
 int FUNC_4 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;
 int FUNC_5 (struct pcxhr_mgr*,int ,unsigned int,int*) ;

__attribute__((used)) static int FUNC_6(struct pcxhr_mgr *VAR_5,
          unsigned int VAR_6,
          int *VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10;
 struct pcxhr_rmh VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_5, VAR_6, &VAR_8, &VAR_9);
 if (VAR_12)
  return VAR_12;


 if (VAR_6 < 55000)
  VAR_10 = 0;
 else if (VAR_6 < 100000)
  VAR_10 = 1;
 else
  VAR_10 = 2;
 if (VAR_5->codec_speed != VAR_10) {
  FUNC_3(&VAR_11, VAR_1);
  VAR_11.cmd[0] |= VAR_2;
  if (FUNC_0(VAR_5)) {
   VAR_11.cmd[1] = 1;
   VAR_11.cmd_len = 2;
  }
  VAR_12 = FUNC_4(VAR_5, &VAR_11);
  if (VAR_12)
   return VAR_12;

  FUNC_3(&VAR_11, VAR_1);
  VAR_11.cmd[0] |= VAR_3;
  VAR_11.cmd[1] = VAR_10;
  VAR_11.cmd_len = 2;
  VAR_12 = FUNC_4(VAR_5, &VAR_11);
  if (VAR_12)
   return VAR_12;
 }

 FUNC_1(&VAR_5->pci->dev, "clock register : set %x\n", VAR_8);
 VAR_12 = FUNC_5(VAR_5, VAR_4,
       VAR_8, VAR_7);
 if (VAR_12)
  return VAR_12;

 VAR_5->sample_rate_real = VAR_9;
 VAR_5->cur_clock_type = VAR_5->use_clock_type;


 if (VAR_5->codec_speed != VAR_10) {
  FUNC_3(&VAR_11, VAR_0);
  VAR_11.cmd[0] |= VAR_2;
  if (FUNC_0(VAR_5)) {
   VAR_11.cmd[1] = 1;
   VAR_11.cmd_len = 2;
  }
  VAR_12 = FUNC_4(VAR_5, &VAR_11);
  if (VAR_12)
   return VAR_12;
  VAR_5->codec_speed = VAR_10;
 }

 FUNC_1(&VAR_5->pci->dev, "pcxhr_sub_set_clock to %dHz (realfreq=%d)\n",
      VAR_6, VAR_9);
 return 0;
}
