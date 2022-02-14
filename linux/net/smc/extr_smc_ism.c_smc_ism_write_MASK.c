
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smcd_dev {TYPE_1__* ops; } ;
struct smc_ism_position {int offset; int signal; int index; int token; } ;
struct TYPE_2__ {int (* move_data ) (struct smcd_dev*,int ,int ,int ,int ,void*,size_t) ;} ;


 int FUNC_0 (struct smcd_dev*,int ,int ,int ,int ,void*,size_t) ;

int FUNC_1(struct smcd_dev *VAR_0, const struct smc_ism_position *VAR_1,
    void *VAR_2, size_t VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_0->ops->move_data(VAR_0, VAR_1->token, VAR_1->index, VAR_1->signal,
      VAR_1->offset, VAR_2, VAR_3);

 return VAR_4 < 0 ? VAR_4 : 0;
}
