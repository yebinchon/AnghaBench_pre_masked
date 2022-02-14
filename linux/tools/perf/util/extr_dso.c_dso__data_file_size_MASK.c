
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct machine {int dummy; } ;
struct TYPE_2__ {scalar_t__ status; scalar_t__ file_size; } ;
struct dso {scalar_t__ binary_type; TYPE_1__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dso*) ;
 int FUNC_1 (struct dso*,struct machine*) ;

int FUNC_2(struct dso *VAR_2, struct machine *VAR_3)
{
 if (VAR_2->data.file_size)
  return 0;

 if (VAR_2->data.status == VAR_1)
  return -1;

 if (VAR_2->binary_type == VAR_0)
  return FUNC_0(VAR_2);

 return FUNC_1(VAR_2, VAR_3);
}
