
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct assembly_version {int revision; int build; int minor; int major; } ;
struct TYPE_2__ {struct assembly_version version; } ;
struct assembly {TYPE_1__ id; } ;
typedef char WCHAR ;


 int FUNC_0 (char*,char const*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct assembly *VAR_0, WCHAR *VAR_1)
{
    static const WCHAR VAR_2[] = {'%','u','.','%','u','.','%','u','.','%','u',0};
    struct assembly_version *VAR_3 = &VAR_0->id.version;
    WCHAR VAR_4[25];

    if (!VAR_1) VAR_1 = VAR_4;
    return FUNC_0(VAR_1, VAR_2, VAR_3->major, VAR_3->minor, VAR_3->build, VAR_3->revision);
}
