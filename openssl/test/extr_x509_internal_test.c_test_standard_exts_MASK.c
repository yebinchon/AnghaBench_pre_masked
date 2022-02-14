
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ext_nid; } ;
typedef TYPE_1__ X509V3_EXT_METHOD ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_1__**) ;
 size_t VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int ) ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static int FUNC_4(void)
{
    size_t VAR_2;
    int VAR_3 = -1, VAR_4 = 1;
    const X509V3_EXT_METHOD **VAR_5;

    VAR_5 = VAR_1;
    for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1); VAR_2++, VAR_5++) {
        if ((*VAR_5)->ext_nid < VAR_3)
            VAR_4 = 0;
        VAR_3 = (*VAR_5)->ext_nid;

    }
    if (!VAR_4) {
        VAR_5 = VAR_1;
        FUNC_2("Extensions out of order!");
        for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++, VAR_5++)
            FUNC_3("%d : %s", (*VAR_5)->ext_nid, FUNC_0((*VAR_5)->ext_nid));
    }
    return VAR_4;
}
