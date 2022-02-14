
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ last; int data; } ;
struct trace {TYPE_1__ oe; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct trace *VAR_1)
{
 u64 VAR_2 = FUNC_0(&VAR_1->oe.data);
 u64 VAR_3 = VAR_1->oe.last - VAR_0;


 if (VAR_2 && VAR_2 < VAR_3)
  return FUNC_1(&VAR_1->oe.data, VAR_3);

 return 0;
}
