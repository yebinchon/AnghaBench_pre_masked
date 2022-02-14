
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; } ;
typedef TYPE_1__ CBuf ;


 int FUNC_0 (TYPE_1__*,size_t,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(CBuf *VAR_1, size_t VAR_2)
{
  if (VAR_1->size >= VAR_2)
    return 1;
  FUNC_1(VAR_1, &VAR_0);
  return FUNC_0(VAR_1, VAR_2, &VAR_0);
}
