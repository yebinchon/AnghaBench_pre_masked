
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct ssp_device*,int ) ;
 int FUNC_1 (struct ssp_device*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct ssp_device *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 &= ~VAR_1;
 VAR_4 |= VAR_2;
 FUNC_1(VAR_3, VAR_0, VAR_4);
}
