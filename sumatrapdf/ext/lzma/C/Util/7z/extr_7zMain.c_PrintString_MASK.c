
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UInt16 ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef scalar_t__ SRes ;
typedef TYPE_1__ CBuf ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int const*,int ) ;
 int FUNC_3 (char const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static SRes FUNC_4(const UInt16 *VAR_3)
{
  CBuf VAR_4;
  SRes VAR_5;
  FUNC_1(&VAR_4);
  VAR_5 = FUNC_2(&VAR_4, VAR_3, 0);
  if (VAR_5 == VAR_0)
    FUNC_3((const char *)VAR_4.data, VAR_2);
  FUNC_0(&VAR_4, &VAR_1);
  return VAR_5;
}
