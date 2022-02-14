
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int flags; scalar_t__ promiscuity; int name; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*,unsigned int,int) ;
 int FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,char*,int ,int,unsigned int,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int VAR_6 ;
 int FUNC_10 (char*,int ,char*) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_7, int VAR_8, bool VAR_9)
{
 unsigned int VAR_10 = VAR_7->flags;
 kuid_t VAR_11;
 kgid_t VAR_12;

 FUNC_0();

 VAR_7->flags |= VAR_3;
 VAR_7->promiscuity += VAR_8;
 if (VAR_7->promiscuity == 0) {




  if (VAR_8 < 0)
   VAR_7->flags &= ~VAR_3;
  else {
   VAR_7->promiscuity -= VAR_8;
   FUNC_11("%s: promiscuity touches roof, set promiscuity failed. promiscuity feature of device might be broken.\n",
    VAR_7->name);
   return -VAR_1;
  }
 }
 if (VAR_7->flags != VAR_10) {
  FUNC_10("device %s %s promiscuous mode\n",
   VAR_7->name,
   VAR_7->flags & VAR_3 ? "entered" : "left");
  if (VAR_4) {
   FUNC_6(&VAR_11, &VAR_12);
   FUNC_5(FUNC_2(), VAR_2,
      VAR_0,
      "dev=%s prom=%d old_prom=%d auid=%u uid=%u gid=%u ses=%u",
      VAR_7->name, (VAR_7->flags & VAR_3),
      (VAR_10 & VAR_3),
      FUNC_9(&VAR_6, FUNC_3(VAR_5)),
      FUNC_9(&VAR_6, VAR_11),
      FUNC_8(&VAR_6, VAR_12),
      FUNC_4(VAR_5));
  }

  FUNC_7(VAR_7, VAR_3);
 }
 if (VAR_9)
  FUNC_1(VAR_7, VAR_10, VAR_3);
 return 0;
}
