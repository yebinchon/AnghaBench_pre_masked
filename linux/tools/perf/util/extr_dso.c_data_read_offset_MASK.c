
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct machine {int dummy; } ;
struct TYPE_2__ {scalar_t__ file_size; } ;
struct dso {TYPE_1__ data; } ;
typedef int ssize_t ;


 int FUNC_0 (struct dso*,struct machine*,scalar_t__,int *,int) ;
 scalar_t__ FUNC_1 (struct dso*,struct machine*) ;

__attribute__((used)) static ssize_t FUNC_2(struct dso *VAR_0, struct machine *VAR_1,
    u64 VAR_2, u8 *VAR_3, ssize_t VAR_4)
{
 if (FUNC_1(VAR_0, VAR_1))
  return -1;


 if (VAR_2 > VAR_0->data.file_size)
  return -1;

 if (VAR_2 + VAR_4 < VAR_2)
  return -1;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
