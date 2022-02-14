
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c; } ;
typedef TYPE_1__ spgNodePtr ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const spgNodePtr *VAR_2 = (const spgNodePtr *) VAR_0;
 const spgNodePtr *VAR_3 = (const spgNodePtr *) VAR_1;

 return VAR_2->c - VAR_3->c;
}
