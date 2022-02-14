
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int downlinkOffset; int deleteXid; } ;
typedef TYPE_1__ gistxlogPageDelete ;
typedef int StringInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(StringInfo VAR_0, gistxlogPageDelete *VAR_1)
{
 FUNC_2(VAR_0, "deleteXid %u:%u; downlink %u",
      FUNC_0(VAR_1->deleteXid),
      FUNC_1(VAR_1->deleteXid),
      VAR_1->downlinkOffset);
}
