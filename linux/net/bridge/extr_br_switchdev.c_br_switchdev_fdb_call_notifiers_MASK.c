
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct switchdev_notifier_fdb_info {unsigned char const* addr; int added_by_user; int offloaded; int info; int vid; } ;
struct net_device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long,struct net_device*,int *,int *) ;

__attribute__((used)) static void
FUNC_1(bool VAR_2, const unsigned char *VAR_3,
    u16 VAR_4, struct net_device *VAR_5,
    bool VAR_6, bool VAR_7)
{
 struct switchdev_notifier_fdb_info VAR_8;
 unsigned long VAR_9;

 VAR_8.addr = VAR_3;
 VAR_8.vid = VAR_4;
 VAR_8.added_by_user = VAR_6;
 VAR_8.offloaded = VAR_7;
 VAR_9 = VAR_2 ? VAR_0 : VAR_1;
 FUNC_0(VAR_9, VAR_5, &VAR_8.info, ((void*)0));
}
