
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_5__ {TYPE_1__* rd_rel; int rd_backend; int rd_node; } ;
struct TYPE_4__ {int reltoastrelid; } ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ ForkNumber ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int64
FUNC_3(Relation VAR_1)
{
 int64 VAR_2 = 0;
 ForkNumber VAR_3;




 for (VAR_3 = 0; VAR_3 <= VAR_0; VAR_3++)
  VAR_2 += FUNC_1(&(VAR_1->rd_node), VAR_1->rd_backend,
          VAR_3);




 if (FUNC_0(VAR_1->rd_rel->reltoastrelid))
  VAR_2 += FUNC_2(VAR_1->rd_rel->reltoastrelid);

 return VAR_2;
}
