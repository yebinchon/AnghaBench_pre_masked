
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tableoid; int oid; } ;
struct TYPE_4__ {TYPE_1__ catId; } ;
typedef TYPE_2__ DumpableObject ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const DumpableObject *VAR_2 = *(DumpableObject *const *) VAR_0;
 const DumpableObject *VAR_3 = *(DumpableObject *const *) VAR_1;
 int VAR_4;





 VAR_4 = FUNC_0(VAR_2->catId.oid, VAR_3->catId.oid);
 if (VAR_4 == 0)
  VAR_4 = FUNC_0(VAR_2->catId.tableoid, VAR_3->catId.tableoid);
 return VAR_4;
}
