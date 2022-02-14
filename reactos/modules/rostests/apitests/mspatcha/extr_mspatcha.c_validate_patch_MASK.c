
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int len; int data; } ;
struct TYPE_5__ {int len; int data; } ;
struct TYPE_7__ {int name; TYPE_2__ patch_header; TYPE_1__ patch; } ;
typedef TYPE_3__ patch_data ;
typedef scalar_t__ UINT ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int,char*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(patch_data* VAR_0)
{
    UINT VAR_1;

    VAR_1 = FUNC_0(~0, VAR_0->patch.data, VAR_0->patch.len);
    FUNC_1(VAR_1 == 0, "Invalid patch crc 0x%x for %s\n", VAR_1, VAR_0->name);

    VAR_1 = FUNC_0(~0, VAR_0->patch_header.data, VAR_0->patch_header.len);
    FUNC_1(VAR_1 == 0, "Invalid patch_header crc 0x%x for %s\n", VAR_1, VAR_0->name);
}
