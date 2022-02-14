
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef scalar_t__ SRes ;
typedef int ISeqOutStream ;
typedef TYPE_1__ CXzStream ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_1 ;

SRes FUNC_4(ISeqOutStream *VAR_2)
{
  SRes VAR_3;
  CXzStream VAR_4;
  FUNC_0(&VAR_4);
  VAR_3 = FUNC_3(VAR_4.flags, VAR_2);
  if (VAR_3 == VAR_0)
    VAR_3 = FUNC_2(&VAR_4, VAR_2);
  FUNC_1(&VAR_4, &VAR_1);
  return VAR_3;
}
