
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int dummy; } ;
struct ima_template_desc {int dummy; } ;
struct cred {int dummy; } ;
typedef enum ima_hooks { ____Placeholder_ima_hooks } ima_hooks ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,struct cred const*,int ,int,int,int,int*,struct ima_template_desc**) ;
 int VAR_4 ;

int FUNC_1(struct inode *VAR_5, const struct cred *VAR_6, u32 VAR_7,
     int VAR_8, enum ima_hooks VAR_9, int *VAR_10,
     struct ima_template_desc **VAR_11)
{
 int VAR_12 = VAR_3 | VAR_1 | VAR_0 | VAR_2;

 VAR_12 &= VAR_4;

 return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_9, VAR_8, VAR_12, VAR_10,
    VAR_11);
}
