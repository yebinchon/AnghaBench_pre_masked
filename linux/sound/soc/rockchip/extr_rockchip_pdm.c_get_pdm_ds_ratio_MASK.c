
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int sr; unsigned int ratio; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;

 VAR_4 = 0;
 if (!VAR_1)
  return VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if (VAR_1 == VAR_0[VAR_2].sr)
   VAR_4 = VAR_0[VAR_2].ratio;
 }
 return VAR_4;
}
