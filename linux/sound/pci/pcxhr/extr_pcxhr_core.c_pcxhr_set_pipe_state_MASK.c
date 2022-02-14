
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_mgr {TYPE_1__* pci; } ;
typedef int ktime_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct pcxhr_mgr*) ;
 int FUNC_7 (struct pcxhr_mgr*,int,int*) ;
 int FUNC_8 (struct pcxhr_mgr*,int) ;
 int FUNC_9 (struct pcxhr_mgr*,int) ;
 int FUNC_10 (int) ;

int FUNC_11(struct pcxhr_mgr *VAR_3, int VAR_4,
    int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 int VAR_10;






 VAR_10 = (VAR_4 |
        (VAR_5 << VAR_2));

 VAR_7 = FUNC_6(VAR_3);
 FUNC_0(&VAR_3->pci->dev,
  "pcxhr_set_pipe_state %s (mask %x current %x)\n",
      VAR_6 ? "START" : "STOP", VAR_10, VAR_7);
 if (VAR_6) {

  VAR_10 &= ~VAR_7;
  VAR_7 = VAR_10;
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   VAR_9 = FUNC_7(VAR_3, VAR_7, &VAR_7);
   if (VAR_9)
    return VAR_9;
   if (VAR_7 == 0)
    break;
   FUNC_5(1);
  }
 } else {
  VAR_10 &= VAR_7;
 }
 if (VAR_10 == 0)
  return 0;

 VAR_9 = FUNC_9(VAR_3, VAR_10);
 if (VAR_9)
  return VAR_9;

 VAR_8 = 0;
 while (1) {
  VAR_7 = FUNC_6(VAR_3);

  if ((VAR_7 & VAR_10) == (VAR_6 ? VAR_10 : 0))
   break;
  if (++VAR_8 >= VAR_1 * 100) {
   FUNC_1(&VAR_3->pci->dev, "error pipe start/stop\n");
   return -VAR_0;
  }
  FUNC_10(10);
 }
 if (!VAR_6) {
  VAR_9 = FUNC_8(VAR_3, VAR_10);
  if (VAR_9)
   return VAR_9;
 }






 return 0;
}
