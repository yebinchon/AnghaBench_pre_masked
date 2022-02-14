
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int version; int clsid; } ;
typedef int MSXML_VERSION ;
typedef int GUID ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int const*,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static MSXML_VERSION FUNC_4(const GUID *VAR_2)
{
    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
        if (FUNC_2(VAR_2, VAR_1[VAR_3].clsid))
            return VAR_1[VAR_3].version;

    FUNC_1("unknown clsid=%s\n", FUNC_3(VAR_2));
    return VAR_0;
}
