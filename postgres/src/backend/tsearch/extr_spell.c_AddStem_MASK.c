
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nstem; int lenstem; char** stem; } ;
typedef TYPE_1__ SplitVar ;


 scalar_t__ FUNC_0 (char**,int) ;

__attribute__((used)) static void
FUNC_1(SplitVar *VAR_0, char *VAR_1)
{
 if (VAR_0->nstem >= VAR_0->lenstem)
 {
  VAR_0->lenstem *= 2;
  VAR_0->stem = (char **) FUNC_0(VAR_0->stem, sizeof(char *) * VAR_0->lenstem);
 }

 VAR_0->stem[VAR_0->nstem] = VAR_1;
 VAR_0->nstem++;
}
