
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ntodelete; int latestRemovedXid; } ;
typedef TYPE_1__ gistxlogDelete ;
typedef int StringInfo ;


 int FUNC_0 (int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(StringInfo VAR_0, gistxlogDelete *VAR_1)
{
 FUNC_0(VAR_0, "delete: latestRemovedXid %u, nitems: %u",
      VAR_1->latestRemovedXid, VAR_1->ntodelete);

}
