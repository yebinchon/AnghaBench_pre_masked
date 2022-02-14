
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int error; } ;
typedef TYPE_1__* HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int const*,int) ;
 int FUNC_2 (char const*) ;

HPDF_STATUS FUNC_3(HPDF_Stream VAR_2, const char *VAR_3)
{
    HPDF_STATUS VAR_4;

    if(VAR_3==((void*)0)) return VAR_0;
    if(FUNC_2(VAR_3)<16) return VAR_0;
    if(VAR_3[0]!='D'||
        VAR_3[1]!=':') return VAR_0;
    VAR_3+=2;

    VAR_4 = FUNC_1(VAR_2, (const HPDF_BYTE*)VAR_3, 4);
    if (VAR_4 != VAR_1)
        return VAR_4;
    VAR_3+=4;

    VAR_4 = FUNC_1(VAR_2, (const HPDF_BYTE*)"-", 1);
    if (VAR_4 != VAR_1)
        return VAR_4;
    VAR_4 = FUNC_1(VAR_2, (const HPDF_BYTE*)VAR_3, 2);
    if (VAR_4 != VAR_1)
        return VAR_4;
    VAR_3+=2;

    VAR_4 = FUNC_1(VAR_2, (const HPDF_BYTE*)"-", 1);
    if (VAR_4 != VAR_1)
        return VAR_4;
    VAR_4 = FUNC_1(VAR_2, (const HPDF_BYTE*)VAR_3, 2);
    if (VAR_4 != VAR_1)
        return VAR_4;
    VAR_3+=2;

    VAR_4 = FUNC_1(VAR_2, (const HPDF_BYTE*)"T", 1);
    if (VAR_4 != VAR_1)
        return VAR_4;
    VAR_4 = FUNC_1(VAR_2, (const HPDF_BYTE*)VAR_3, 2);
    if (VAR_4 != VAR_1)
        return VAR_4;
    VAR_3+=2;

    VAR_4 = FUNC_1(VAR_2, (const HPDF_BYTE*)":", 1);
    if (VAR_4 != VAR_1)
        return VAR_4;
    VAR_4 = FUNC_1(VAR_2, (const HPDF_BYTE*)VAR_3, 2);
    if (VAR_4 != VAR_1)
        return VAR_4;
    VAR_3+=2;

    VAR_4 = FUNC_1(VAR_2, (const HPDF_BYTE*)":", 1);
    if (VAR_4 != VAR_1)
        return VAR_4;
    VAR_4 = FUNC_1(VAR_2, (const HPDF_BYTE*)VAR_3, 2);
    if (VAR_4 != VAR_1)
        return VAR_4;
    VAR_3+=2;

    if(VAR_3[0]==0) {
        VAR_4 = FUNC_1(VAR_2, (const HPDF_BYTE*)"Z", 1);
        return VAR_4;
    }
    if(VAR_3[0]=='+'||VAR_3[0]=='-') {
        VAR_4 = FUNC_1(VAR_2, (const HPDF_BYTE*)VAR_3, 3);
        if (VAR_4 != VAR_1)
            return VAR_4;
        VAR_3+=4;
        VAR_4 = FUNC_1(VAR_2, (const HPDF_BYTE*)":", 1);
        if (VAR_4 != VAR_1)
            return VAR_4;
        VAR_4 = FUNC_1(VAR_2, (const HPDF_BYTE*)VAR_3, 2);
        if (VAR_4 != VAR_1)
            return VAR_4;
        return VAR_4;
    }
    return FUNC_0 (VAR_2->error, VAR_0, 0);
}
