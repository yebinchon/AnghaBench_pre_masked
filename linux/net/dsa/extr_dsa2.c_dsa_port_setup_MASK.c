
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch_tree {int index; } ;
struct dsa_switch {struct devlink* devlink; struct dsa_switch_tree* dst; } ;
struct devlink_port {int dummy; } ;
struct dsa_port {int type; int slave; int dn; int mac; int index; struct devlink_port devlink_port; struct dsa_switch* ds; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct devlink_port*,int ,int ,int,int ,unsigned char const*,unsigned char const) ;
 int FUNC_1 (struct devlink*,struct devlink_port*,int ) ;
 int FUNC_2 (struct devlink_port*,int ) ;
 int FUNC_3 (struct devlink_port*) ;
 int FUNC_4 (struct dsa_port*) ;
 int FUNC_5 (struct dsa_port*,int *) ;
 int FUNC_6 (struct dsa_port*) ;
 int FUNC_7 (struct dsa_port*) ;
 int FUNC_8 (struct dsa_port*) ;
 int FUNC_9 (struct devlink_port*,int ,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct dsa_port *VAR_3)
{
 struct dsa_switch *VAR_4 = VAR_3->ds;
 struct dsa_switch_tree *VAR_5 = VAR_4->dst;
 const unsigned char *VAR_6 = (const unsigned char *)&VAR_5->index;
 const unsigned char VAR_7 = sizeof(VAR_5->index);
 struct devlink_port *VAR_8 = &VAR_3->devlink_port;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 struct devlink *VAR_11 = VAR_4->devlink;
 bool VAR_12 = 0;
 int VAR_13 = 0;

 switch (VAR_3->type) {
 case 129:
  FUNC_4(VAR_3);
  break;
 case 131:
  FUNC_9(VAR_8, 0, sizeof(*VAR_8));
  FUNC_0(VAR_8, VAR_0,
           VAR_3->index, 0, 0, VAR_6, VAR_7);
  VAR_13 = FUNC_1(VAR_11, VAR_8, VAR_3->index);
  if (VAR_13)
   break;
  VAR_10 = 1;

  VAR_13 = FUNC_6(VAR_3);
  if (VAR_13)
   break;
  VAR_9 = 1;

  VAR_13 = FUNC_5(VAR_3, ((void*)0));
  if (VAR_13)
   break;
  VAR_12 = 1;

  break;
 case 130:
  FUNC_9(VAR_8, 0, sizeof(*VAR_8));
  FUNC_0(VAR_8, VAR_1,
           VAR_3->index, 0, 0, VAR_6, VAR_7);
  VAR_13 = FUNC_1(VAR_11, VAR_8, VAR_3->index);
  if (VAR_13)
   break;
  VAR_10 = 1;

  VAR_13 = FUNC_6(VAR_3);
  if (VAR_13)
   break;
  VAR_9 = 1;

  VAR_13 = FUNC_5(VAR_3, ((void*)0));
  if (VAR_13)
   break;
  VAR_12 = 1;

  break;
 case 128:
  FUNC_9(VAR_8, 0, sizeof(*VAR_8));
  FUNC_0(VAR_8, VAR_2,
           VAR_3->index, 0, 0, VAR_6, VAR_7);
  VAR_13 = FUNC_1(VAR_11, VAR_8, VAR_3->index);
  if (VAR_13)
   break;
  VAR_10 = 1;

  VAR_3->mac = FUNC_10(VAR_3->dn);
  VAR_13 = FUNC_8(VAR_3);
  if (VAR_13)
   break;

  FUNC_2(VAR_8, VAR_3->slave);
  break;
 }

 if (VAR_13 && VAR_12)
  FUNC_4(VAR_3);
 if (VAR_13 && VAR_9)
  FUNC_7(VAR_3);
 if (VAR_13 && VAR_10)
  FUNC_3(VAR_8);

 return VAR_13;
}
