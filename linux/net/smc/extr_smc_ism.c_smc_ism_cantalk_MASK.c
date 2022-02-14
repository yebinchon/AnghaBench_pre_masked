
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct smcd_dev {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* query_remote_gid ) (struct smcd_dev*,int ,int,unsigned short) ;} ;


 int FUNC_0 (struct smcd_dev*,int ,int,unsigned short) ;

int FUNC_1(u64 VAR_0, unsigned short VAR_1, struct smcd_dev *VAR_2)
{
 return VAR_2->ops->query_remote_gid(VAR_2, VAR_0, VAR_1 ? 1 : 0,
        VAR_1);
}
