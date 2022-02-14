
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsc7385 {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct vsc7385*,int ,int ,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct vsc7385 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0, 0, VAR_1,
      0x0000);
 if (VAR_3)
  FUNC_0(&VAR_2->spi->dev,
   "could not reset microcode, err=%d\n", VAR_3);

 return VAR_3;
}
