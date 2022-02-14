
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int * children; } ;
typedef TYPE_1__ JsonbContainer ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

uint32
FUNC_2(const JsonbContainer *VAR_0, int VAR_1)
{
 uint32 VAR_2 = 0;
 int VAR_3;






 for (VAR_3 = VAR_1 - 1; VAR_3 >= 0; VAR_3--)
 {
  VAR_2 += FUNC_1(VAR_0->children[VAR_3]);
  if (FUNC_0(VAR_0->children[VAR_3]))
   break;
 }

 return VAR_2;
}
