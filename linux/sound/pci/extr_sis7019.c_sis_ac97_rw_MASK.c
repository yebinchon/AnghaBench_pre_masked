
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sis7019 {unsigned long ioport; TYPE_1__* pci; int ac97_mutex; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int) ;

__attribute__((used)) static unsigned short FUNC_7(struct sis7019 *VAR_6, int VAR_7, u32 VAR_8)
{
 unsigned long VAR_9 = VAR_6->ioport;
 unsigned short VAR_10 = 0xffff;
 u16 VAR_11;
 u16 VAR_12;
 int VAR_13;
 static const u16 VAR_14[3] = {
  128,
  130,
  129,
 };

 VAR_12 = VAR_14[VAR_7];





 FUNC_3(&VAR_6->ac97_mutex);

 VAR_13 = 0xffff;
 while ((FUNC_2(VAR_9 + VAR_1) & VAR_2) && --VAR_13)
  FUNC_6(1);

 if (!VAR_13)
  goto timeout;



 VAR_13 = 0xffff;
 do {
  VAR_11 = FUNC_2(VAR_9 + VAR_4);
  if ((VAR_11 & VAR_12) && !(VAR_11 & VAR_5))
   break;

  FUNC_6(1);
 } while (--VAR_13);

 if (!VAR_13)
  goto timeout_sema;



 FUNC_5(VAR_8, VAR_9 + VAR_0);
 FUNC_6(10);

 VAR_13 = 0xffff;
 while ((FUNC_2(VAR_9 + VAR_4) & VAR_5) && --VAR_13)
  FUNC_6(1);



 VAR_10 = FUNC_1(VAR_9 + VAR_0) >> 16;

timeout_sema:
 FUNC_5(VAR_3, VAR_9 + VAR_1);
timeout:
 FUNC_4(&VAR_6->ac97_mutex);

 if (!VAR_13) {
  FUNC_0(&VAR_6->pci->dev, "ac97 codec %d timeout cmd 0x%08x\n",
     VAR_7, VAR_8);
 }

 return VAR_10;
}
