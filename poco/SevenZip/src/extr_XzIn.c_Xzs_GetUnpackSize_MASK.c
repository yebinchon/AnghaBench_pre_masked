
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt64 ;
struct TYPE_3__ {size_t num; int * streams; } ;
typedef TYPE_1__ CXzs ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

UInt64 FUNC_2(const CXzs *VAR_0)
{
  UInt64 VAR_1 = 0;
  size_t VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->num; VAR_2++)
    FUNC_0(VAR_1, FUNC_1(&VAR_0->streams[VAR_2]));
  return VAR_1;
}
