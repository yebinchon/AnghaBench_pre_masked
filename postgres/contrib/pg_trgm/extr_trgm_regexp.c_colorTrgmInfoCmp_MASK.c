
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrgm; } ;
typedef TYPE_1__ ColorTrgmInfo ;
typedef int ColorTrgm ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const ColorTrgmInfo *VAR_2 = (const ColorTrgmInfo *) VAR_0;
 const ColorTrgmInfo *VAR_3 = (const ColorTrgmInfo *) VAR_1;

 return FUNC_0(&VAR_2->ctrgm, &VAR_3->ctrgm, sizeof(ColorTrgm));
}
