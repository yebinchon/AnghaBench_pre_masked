
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct urelease_work {int portid; } ;
struct notifier_block {int dummy; } ;
struct netlink_notify {scalar_t__ protocol; int portid; } ;


 int VAR_0 ;
 int FUNC_0 (struct work_struct*,int ) ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 struct urelease_work* FUNC_1 (int,int ) ;
 int VAR_4 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct work_struct*) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_5,
     unsigned long VAR_6, void *VAR_7)
{
 struct netlink_notify *VAR_8 = VAR_7;
 struct urelease_work *VAR_9;

 if (VAR_6 != VAR_2 || VAR_8->protocol != VAR_1)
  goto out;

 FUNC_2("NETLINK_URELEASE event from id %d\n", VAR_8->portid);

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_0);
 if (VAR_9) {
  FUNC_0((struct work_struct *) VAR_9, VAR_4);
  VAR_9->portid = VAR_8->portid;
  FUNC_3((struct work_struct *) VAR_9);
 }

out:
 return VAR_3;
}
