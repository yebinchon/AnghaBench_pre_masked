
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {unsigned int ifr_mtu; int ifr_name; } ;
typedef int ifr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 scalar_t__ FUNC_1 (int,int ,struct ifreq*) ;
 int FUNC_2 (struct ifreq*,int ,int) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static void FUNC_4(int VAR_2, const char *VAR_3, unsigned int VAR_4)
{
 struct ifreq VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.ifr_mtu = VAR_4;
 FUNC_3(VAR_5.ifr_name, VAR_3);

 if (FUNC_1(VAR_2, VAR_0, &VAR_5))
  FUNC_0(1, VAR_1, "ioctl set mtu");
}
