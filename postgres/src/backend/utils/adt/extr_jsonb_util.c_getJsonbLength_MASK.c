
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_4__ {int * children; } ;
typedef TYPE_1__ JsonbContainer ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,int) ;

uint32
FUNC_3(const JsonbContainer *VAR_0, int VAR_1)
{
 uint32 VAR_2;
 uint32 VAR_3;






 if (FUNC_0(VAR_0->children[VAR_1]))
 {
  VAR_2 = FUNC_2(VAR_0, VAR_1);
  VAR_3 = FUNC_1(VAR_0->children[VAR_1]) - VAR_2;
 }
 else
  VAR_3 = FUNC_1(VAR_0->children[VAR_1]);

 return VAR_3;
}
