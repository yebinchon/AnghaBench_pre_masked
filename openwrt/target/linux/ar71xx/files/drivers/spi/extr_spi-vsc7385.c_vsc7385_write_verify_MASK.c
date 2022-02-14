
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vsc7385 {struct spi_device* spi; } ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct vsc7385*,int ,int ,int ,int*) ;
 int FUNC_2 (struct vsc7385*,int ,int ,int ,int) ;

__attribute__((used)) static inline int FUNC_3(struct vsc7385 *VAR_1, u8 VAR_2,
           u8 VAR_3, u8 VAR_4, u32 VAR_5,
           u32 VAR_6, u32 VAR_7)
{
 struct spi_device *VAR_8 = VAR_1->spi;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if ((VAR_9 & VAR_6) != VAR_7) {
  FUNC_0(&VAR_8->dev, "register write error\n");
  return -VAR_0;
 }

 return 0;
}
