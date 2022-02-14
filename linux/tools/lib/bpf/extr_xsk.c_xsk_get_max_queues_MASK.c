
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_socket {int ifname; } ;
struct ifreq {char* ifr_name; void* ifr_data; } ;
struct ethtool_channels {int max_combined; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int,int ,struct ifreq*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct xsk_socket *VAR_7)
{
 struct ethtool_channels VAR_8 = { .cmd = VAR_2 };
 struct ifreq VAR_9 = {};
 int VAR_10, VAR_11, VAR_12;

 VAR_10 = FUNC_3(VAR_0, VAR_5, 0);
 if (VAR_10 < 0)
  return -VAR_6;

 VAR_9.ifr_data = (void *)&VAR_8;
 FUNC_2(VAR_9.ifr_name, VAR_7->ifname, VAR_3 - 1);
 VAR_9.ifr_name[VAR_3 - 1] = '\0';
 VAR_11 = FUNC_1(VAR_10, VAR_4, &VAR_9);
 if (VAR_11 && VAR_6 != VAR_1) {
  VAR_12 = -VAR_6;
  goto out;
 }

 if (VAR_11 || VAR_8.max_combined == 0)



  VAR_12 = 1;
 else
  VAR_12 = VAR_8.max_combined;

out:
 FUNC_0(VAR_10);
 return VAR_12;
}
