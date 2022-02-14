
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct machine {int dummy; } ;
struct TYPE_2__ {int file_size; } ;
struct dso {TYPE_1__ data; } ;
typedef int off_t ;


 scalar_t__ FUNC_0 (struct dso*,struct machine*) ;

off_t FUNC_1(struct dso *VAR_0, struct machine *VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1))
  return -1;


 return VAR_0->data.file_size;
}
