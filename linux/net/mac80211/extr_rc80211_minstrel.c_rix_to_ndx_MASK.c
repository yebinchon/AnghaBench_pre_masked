
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct minstrel_sta_info {TYPE_1__* r; } ;
struct TYPE_2__ {int rix; } ;



__attribute__((used)) static inline int
FUNC_0(struct minstrel_sta_info *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_1;
 for (VAR_2 = VAR_1; VAR_2 >= 0; VAR_2--)
  if (VAR_0->r[VAR_2].rix == VAR_1)
   break;
 return VAR_2;
}
