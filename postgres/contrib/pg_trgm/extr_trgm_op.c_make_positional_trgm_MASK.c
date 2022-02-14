
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trgm ;
struct TYPE_3__ {int index; int trg; } ;
typedef TYPE_1__ pos_trgm ;


 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static pos_trgm *
FUNC_2(trgm *VAR_0, int VAR_1, trgm *VAR_2, int VAR_3)
{
 pos_trgm *VAR_4;
 int VAR_5,
    VAR_6 = VAR_1 + VAR_3;

 VAR_4 = (pos_trgm *) FUNC_1(sizeof(pos_trgm) * VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
 {
  FUNC_0(&VAR_4[VAR_5].trg, &VAR_0[VAR_5], sizeof(trgm));
  VAR_4[VAR_5].index = -1;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
 {
  FUNC_0(&VAR_4[VAR_5 + VAR_1].trg, &VAR_2[VAR_5], sizeof(trgm));
  VAR_4[VAR_5 + VAR_1].index = VAR_5;
 }

 return VAR_4;
}
