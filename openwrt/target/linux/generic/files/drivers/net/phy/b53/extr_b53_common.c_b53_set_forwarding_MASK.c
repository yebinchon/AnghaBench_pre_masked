
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b53_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b53_device*,int ,int ,int *) ;
 int FUNC_1 (struct b53_device*,int ,int ,int ) ;

void FUNC_2(struct b53_device *VAR_3, int VAR_4)
{
 u8 VAR_5;

 FUNC_0(VAR_3, VAR_0, VAR_1, &VAR_5);

 if (VAR_4)
  VAR_5 |= VAR_2;
 else
  VAR_5 &= ~VAR_2;

 FUNC_1(VAR_3, VAR_0, VAR_1, VAR_5);
}
