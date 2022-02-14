
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_port_link {scalar_t__ speed; int duplex; } ;
struct switch_dev {int cpu_port; } ;
struct b53_device {int enabled_ports; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct b53_device*) ;
 scalar_t__ FUNC_2 (struct b53_device*) ;
 scalar_t__ FUNC_3 (struct b53_device*) ;
 struct b53_device* FUNC_4 (struct switch_dev*) ;
 int FUNC_5 (struct switch_dev*,int,struct switch_port_link*) ;

__attribute__((used)) static int FUNC_6(struct switch_dev *VAR_3, int VAR_4,
        struct switch_port_link *VAR_5)
{
 struct b53_device *VAR_6 = FUNC_4(VAR_3);





 if (FUNC_3(VAR_6))
  return -VAR_1;

 if (VAR_4 == VAR_3->cpu_port)
  return -VAR_0;

 if (!(FUNC_0(VAR_4) & VAR_6->enabled_ports))
  return -VAR_0;

 if (VAR_5->speed == VAR_2 &&
     (FUNC_1(VAR_6) || FUNC_2(VAR_6)))
  return -VAR_0;

 if (VAR_5->speed == VAR_2 && !VAR_5->duplex)
  return -VAR_0;

 return FUNC_5(VAR_3, VAR_4, VAR_5);
}
