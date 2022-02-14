
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* sa_data; } ;
struct TYPE_4__ {int sa_family; } ;
struct ifreq {TYPE_1__ ifr_hwaddr; int ifr_name; TYPE_2__ ifr_addr; } ;
typedef scalar_t__ __u8 ;
typedef int __be64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,struct ifreq*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,scalar_t__) ;

__attribute__((used)) static __be64 FUNC_5(char *VAR_4)
{
 struct ifreq VAR_5;
 __be64 VAR_6 = 0;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_0, VAR_3, 0);
 VAR_5.ifr_addr.sa_family = VAR_0;
 FUNC_4(VAR_5.ifr_name, VAR_4, VAR_1 - 1);
 if (FUNC_1(VAR_7, VAR_2, &VAR_5) < 0) {
  FUNC_2("ioctl failed leaving....\n");
  return -1;
 }
 for (VAR_8 = 0; VAR_8 < 6 ; VAR_8++)
  *((__u8 *)&VAR_6 + VAR_8) = (__u8)VAR_5.ifr_hwaddr.sa_data[VAR_8];
 FUNC_0(VAR_7);
 return VAR_6;
}
