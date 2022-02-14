
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_3__ {int A; int B; } ;
typedef TYPE_1__ LINE ;


 double VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 double FUNC_1 (int ,int ) ;

__attribute__((used)) static inline float8
FUNC_2(LINE *VAR_1)
{
 if (FUNC_0(VAR_1->A))
  return VAR_0;
 if (FUNC_0(VAR_1->B))
  return 0.0;
 return FUNC_1(VAR_1->B, VAR_1->A);
}
