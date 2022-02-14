
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sa_family; } ;
struct ifreq {TYPE_1__ ifr_hwaddr; int ifr_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifreq*) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(void)
{
 struct ifreq VAR_5;

 FUNC_1(VAR_5.ifr_name, VAR_4, VAR_1);

 if (FUNC_0(VAR_3, VAR_2, &VAR_5) < 0)
  return -1;

 return (VAR_5.ifr_hwaddr.sa_family == VAR_0);
}
