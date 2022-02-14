
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_flags; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,struct ifreq*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_6)
{
 struct ifreq VAR_7 = {
  .ifr_flags = VAR_3 | VAR_2 | VAR_0 | VAR_1,
 };
 int VAR_8, VAR_9;

 FUNC_2(VAR_7.ifr_name, VAR_6, sizeof(VAR_7.ifr_name));

 VAR_8 = FUNC_1("/dev/net/tun", VAR_4);
 if (VAR_8 < 0)
  return -1;

 VAR_9 = FUNC_0(VAR_8, VAR_5, &VAR_7);
 if (VAR_9)
  return -1;

 return VAR_8;
}
