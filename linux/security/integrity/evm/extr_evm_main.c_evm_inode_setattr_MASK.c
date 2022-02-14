
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iattr {unsigned int ia_valid; } ;
struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef enum integrity_status { ____Placeholder_integrity_status } integrity_status ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct dentry*) ;
 int VAR_8 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,int ,int ,char*,int ,int,int ) ;
 int * VAR_9 ;

int FUNC_3(struct dentry *VAR_10, struct iattr *VAR_11)
{
 unsigned int VAR_12 = VAR_11->ia_valid;
 enum integrity_status VAR_13;




 if (VAR_8 & VAR_5)
  return 0;

 if (!(VAR_12 & (VAR_1 | VAR_2 | VAR_0)))
  return 0;
 VAR_13 = FUNC_1(VAR_10);
 if ((VAR_13 == VAR_7) ||
     (VAR_13 == VAR_6))
  return 0;
 FUNC_2(VAR_3, FUNC_0(VAR_10),
       VAR_10->d_name.name, "appraise_metadata",
       VAR_9[VAR_13], -VAR_4, 0);
 return -VAR_4;
}
