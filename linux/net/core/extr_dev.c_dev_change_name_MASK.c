
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int priv_flags; char const* name; unsigned char name_assign_type; int name_hlist; int dev; } ;
struct net {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (int ,struct net_device*) ;
 int VAR_6 ;
 int FUNC_3 (struct net*,struct net_device*,char const*) ;
 int FUNC_4 (struct net*,char*) ;
 struct net* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,char const*) ;
 int VAR_7 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char*,char const*,int) ;
 int FUNC_11 (struct net_device*,char*) ;
 int FUNC_12 (struct net_device*,char*,char*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*,char) ;
 scalar_t__ FUNC_16 (char const*,char const*,int) ;
 int FUNC_17 () ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

int FUNC_22(struct net_device *VAR_8, const char *VAR_9)
{
 unsigned char VAR_10;
 char VAR_11[VAR_3];
 int VAR_12 = 0;
 int VAR_13;
 struct net *VAR_14;

 FUNC_0();
 FUNC_1(!FUNC_5(VAR_8));

 VAR_14 = FUNC_5(VAR_8);
 if (VAR_8->flags & VAR_2 &&
     FUNC_9(!(VAR_8->priv_flags & VAR_1)))
  return -VAR_0;

 FUNC_19(&VAR_7);

 if (FUNC_16(VAR_9, VAR_8->name, VAR_3) == 0) {
  FUNC_20(&VAR_7);
  return 0;
 }

 FUNC_10(VAR_11, VAR_8->name, VAR_3);

 VAR_12 = FUNC_3(VAR_14, VAR_8, VAR_9);
 if (VAR_12 < 0) {
  FUNC_20(&VAR_7);
  return VAR_12;
 }

 if (VAR_11[0] && !FUNC_15(VAR_11, '%'))
  FUNC_12(VAR_8, "renamed from %s\n", VAR_11);

 VAR_10 = VAR_8->name_assign_type;
 VAR_8->name_assign_type = VAR_5;

rollback:
 VAR_13 = FUNC_6(&VAR_8->dev, VAR_8->name);
 if (VAR_13) {
  FUNC_10(VAR_8->name, VAR_11, VAR_3);
  VAR_8->name_assign_type = VAR_10;
  FUNC_20(&VAR_7);
  return VAR_13;
 }

 FUNC_20(&VAR_7);

 FUNC_11(VAR_8, VAR_11);

 FUNC_18(&VAR_6);
 FUNC_8(&VAR_8->name_hlist);
 FUNC_21(&VAR_6);

 FUNC_17();

 FUNC_18(&VAR_6);
 FUNC_7(&VAR_8->name_hlist, FUNC_4(VAR_14, VAR_8->name));
 FUNC_21(&VAR_6);

 VAR_13 = FUNC_2(VAR_4, VAR_8);
 VAR_13 = FUNC_13(VAR_13);

 if (VAR_13) {

  if (VAR_12 >= 0) {
   VAR_12 = VAR_13;
   FUNC_19(&VAR_7);
   FUNC_10(VAR_8->name, VAR_11, VAR_3);
   FUNC_10(VAR_11, VAR_9, VAR_3);
   VAR_8->name_assign_type = VAR_10;
   VAR_10 = VAR_5;
   goto rollback;
  } else {
   FUNC_14("%s: name change rollback failed: %d\n",
          VAR_8->name, VAR_13);
  }
 }

 return VAR_12;
}
