
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct machine {int dummy; } ;
struct TYPE_2__ {scalar_t__ status; } ;
struct dso {TYPE_1__ data; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dso*,struct machine*,int ,int *,int) ;

ssize_t FUNC_1(struct dso *VAR_1, struct machine *VAR_2,
         u64 VAR_3, u8 *VAR_4, ssize_t VAR_5)
{
 if (VAR_1->data.status == VAR_0)
  return -1;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
