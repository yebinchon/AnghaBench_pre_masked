
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_3__ {int radius; int center; } ;
typedef int POLYGON ;
typedef TYPE_1__ CIRCLE ;


 int FUNC_0 (int *,int *) ;
 double FUNC_1 (int ,int ) ;

__attribute__((used)) static float8
FUNC_2(CIRCLE *VAR_0, POLYGON *VAR_1)
{
 float8 VAR_2;


 VAR_2 = FUNC_1(FUNC_0(&VAR_0->center, VAR_1),
        VAR_0->radius);
 if (VAR_2 < 0.0)
  VAR_2 = 0.0;

 return VAR_2;
}
