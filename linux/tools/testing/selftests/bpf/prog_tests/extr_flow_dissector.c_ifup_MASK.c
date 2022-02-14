
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
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,struct ifreq*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_5)
{
 struct ifreq VAR_6 = {};
 int VAR_7, VAR_8;

 FUNC_3(VAR_6.ifr_name, VAR_5, sizeof(VAR_6.ifr_name));

 VAR_7 = FUNC_2(VAR_1, VAR_4, 0);
 if (VAR_7 < 0)
  return -1;

 VAR_8 = FUNC_1(VAR_7, VAR_2, &VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_7);
  return -1;
 }

 VAR_6.ifr_flags |= VAR_0;
 VAR_8 = FUNC_1(VAR_7, VAR_3, &VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_7);
  return -1;
 }

 FUNC_0(VAR_7);
 return 0;
}
