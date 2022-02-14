
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct machine {int dummy; } ;
struct TYPE_2__ {scalar_t__ status; scalar_t__ fd; } ;
struct dso {TYPE_1__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dso*,struct machine*) ;

int FUNC_3(struct dso *VAR_2, struct machine *VAR_3)
{
 if (VAR_2->data.status == VAR_0)
  return -1;

 if (FUNC_0(&VAR_1) < 0)
  return -1;

 FUNC_2(VAR_2, VAR_3);

 if (VAR_2->data.fd < 0)
  FUNC_1(&VAR_1);

 return VAR_2->data.fd;
}
