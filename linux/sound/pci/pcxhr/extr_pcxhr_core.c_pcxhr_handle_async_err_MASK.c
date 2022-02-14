
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pcxhr_mgr {int async_err_other_last; int async_err_pipe_xrun; int async_err_stream_xrun; TYPE_1__* pci; } ;
typedef enum pcxhr_async_err_src { ____Placeholder_pcxhr_async_err_src } pcxhr_async_err_src ;
struct TYPE_2__ {int dev; } ;





 int FUNC_0 (int *,char*,char*,char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct pcxhr_mgr *VAR_0, u32 VAR_1,
      enum pcxhr_async_err_src VAR_2, int VAR_3,
      int VAR_4)
{
 static char* VAR_5[] = {
  [129] = "Pipe",
  [128] = "Stream",
  [130] = "Audio"
 };

 if (VAR_1 & 0xfff)
  VAR_1 &= 0xfff;
 else
  VAR_1 = ((VAR_1 >> 12) & 0xfff);
 if (!VAR_1)
  return 0;
 FUNC_0(&VAR_0->pci->dev, "CMD_ASYNC : Error %s %s Pipe %d err=%x\n",
      VAR_5[VAR_2],
      VAR_4 ? "Record" : "Play", VAR_3, VAR_1);
 if (VAR_1 == 0xe01)
  VAR_0->async_err_stream_xrun++;
 else if (VAR_1 == 0xe10)
  VAR_0->async_err_pipe_xrun++;
 else
  VAR_0->async_err_other_last = (int)VAR_1;
 return 1;
}
