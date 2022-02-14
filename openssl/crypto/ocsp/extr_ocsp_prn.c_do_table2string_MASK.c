
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long t; char const* m; } ;
typedef TYPE_1__ OCSP_TBLSTR ;



__attribute__((used)) static const char *FUNC_0(long VAR_0, const OCSP_TBLSTR *VAR_1, size_t VAR_2)
{
    size_t VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_1++)
        if (VAR_1->t == VAR_0)
            return VAR_1->m;
    return "(UNKNOWN)";
}
