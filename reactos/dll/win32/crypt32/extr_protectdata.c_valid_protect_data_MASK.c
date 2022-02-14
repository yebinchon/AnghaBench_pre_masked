
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cbData; scalar_t__ pbData; } ;
struct protect_data_t {int count0; int count1; int null0; int null1; TYPE_1__ info0; } ;
typedef int LPCSTR ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static
BOOL FUNC_4(const struct protect_data_t *VAR_3)
{
    BOOL VAR_4=VAR_1;

    FUNC_1("called\n");

    if (VAR_3->count0 != 0x0001)
    {
        FUNC_0("count0 != 0x0001 !\n");
        VAR_4=VAR_0;
    }
    if (VAR_3->count1 != 0x0001)
    {
        FUNC_0("count0 != 0x0001 !\n");
        VAR_4=VAR_0;
    }
    if (VAR_3->null0 != 0x0000)
    {
        FUNC_0("null0 != 0x0000 !\n");
        VAR_4=VAR_0;
    }
    if (VAR_3->null1 != 0x0000)
    {
        FUNC_0("null1 != 0x0000 !\n");
        VAR_4=VAR_0;
    }





    if (VAR_3->info0.cbData!=FUNC_3(VAR_2)+1 ||
        FUNC_2( (LPCSTR)VAR_3->info0.pbData,VAR_2) != 0)
    {
        FUNC_0("info0 magic value not matched !\n");
        VAR_4=VAR_0;
    }

    if (!VAR_4)
    {
        FUNC_0("unrecognized CryptProtectData block\n");
    }

    return VAR_4;
}
