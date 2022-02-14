
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int dummy; } ;
struct cns3xxx_i2c {int base; int adap; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,struct cns3xxx_i2c*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cns3xxx_i2c*) ;
 struct cns3xxx_i2c* FUNC_6 (struct platform_device*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,int *) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_2)
{
 struct cns3xxx_i2c *VAR_3 = FUNC_6(VAR_2);
 struct resource *VAR_4;


 FUNC_1();
 FUNC_0();

 FUNC_3(&VAR_3->adap);
 FUNC_8(VAR_2, ((void*)0));

 VAR_4 = FUNC_7(VAR_2, VAR_0, 0);
 if (VAR_4)
  FUNC_2(VAR_4->start, VAR_3);

 FUNC_4(VAR_3->base);

 VAR_4 = FUNC_7(VAR_2, VAR_1, 0);
 if (VAR_4)
  FUNC_9(VAR_4->start, VAR_4->end - VAR_4->start + 1);

 FUNC_5(VAR_3);

 return 0;
}
