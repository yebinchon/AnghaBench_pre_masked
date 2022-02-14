
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktgen_net {int dummy; } ;
struct pktgen_dev {struct net_device* odev; } ;
struct net_device {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct pktgen_net const*,struct pktgen_dev*,char const*) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static int FUNC_4(const struct pktgen_net *VAR_4,
       struct pktgen_dev *VAR_5, const char *VAR_6)
{
 struct net_device *VAR_7;
 int VAR_8;


 if (VAR_5->odev) {
  FUNC_0(VAR_5->odev);
  VAR_5->odev = ((void*)0);
 }

 VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6);
 if (!VAR_7) {
  FUNC_3("no such netdevice: \"%s\"\n", VAR_6);
  return -VAR_3;
 }

 if (VAR_7->type != VAR_0) {
  FUNC_3("not an ethernet device: \"%s\"\n", VAR_6);
  VAR_8 = -VAR_1;
 } else if (!FUNC_1(VAR_7)) {
  FUNC_3("device is down: \"%s\"\n", VAR_6);
  VAR_8 = -VAR_2;
 } else {
  VAR_5->odev = VAR_7;
  return 0;
 }

 FUNC_0(VAR_7);
 return VAR_8;
}
