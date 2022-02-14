
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VARTYPE ;
typedef int UINT_PTR ;
struct TYPE_4__ {int fFeatures; int cbElements; } ;
typedef int SF_TYPE ;
typedef TYPE_1__ SAFEARRAY ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_1__*,int*) ;

__attribute__((used)) static inline SF_TYPE FUNC_2(SAFEARRAY *VAR_13)
{
    VARTYPE VAR_14;
    HRESULT VAR_15;

    VAR_15 = FUNC_1(VAR_13, &VAR_14);
    if (FUNC_0(VAR_15))
    {
        if(VAR_13->fFeatures & VAR_1) return VAR_12;

        switch(VAR_13->cbElements)
        {
        case 1: VAR_14 = 144; break;
        case 2: VAR_14 = 143; break;
        case 4: VAR_14 = 142; break;
        case 8: VAR_14 = 141; break;
        default: return 0;
        }
    }

    if (VAR_13->fFeatures & VAR_0)
        return VAR_5;

    switch (VAR_14)
    {
    case 144:
    case 135: return VAR_6;
    case 149:
    case 143:
    case 134: return VAR_7;
    case 140:
    case 131:
    case 142:
    case 133:
    case 138: return VAR_8;
    case 146:
    case 147:
    case 137:
    case 141:
    case 132: return VAR_9;
    case 139:
    case 130: return (sizeof(UINT_PTR) == 4 ? VAR_8 : VAR_9);
    case 148: return VAR_2;
    case 145: return VAR_3;
    case 128: return VAR_12;
    case 129: return VAR_11;



    case 136: return VAR_10;
    default: return VAR_4;
    }
}
