
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_ifindex; int ifr_name; } ;
typedef int ifdata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ifreq*,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char const*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_4)
{
 struct ifreq VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_4 || *VAR_4 == '\0')
  return -1;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));

 FUNC_5(VAR_5.ifr_name, VAR_4);

 VAR_6 = FUNC_4(VAR_1, VAR_3, VAR_0);
 if (VAR_6 < 0) {
  FUNC_2("socket failed");
  return -1;
 }

 VAR_7 = FUNC_1(VAR_6, VAR_2, (char *)&VAR_5);
 FUNC_0(VAR_6);
 if (VAR_7 != 0) {
  FUNC_2("ioctl(SIOCGIFINDEX) failed");
  return -1;
 }

 return VAR_5.ifr_ifindex;
}
