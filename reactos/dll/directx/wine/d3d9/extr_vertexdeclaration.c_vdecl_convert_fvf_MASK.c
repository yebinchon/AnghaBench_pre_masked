
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int component_count; unsigned int component_size; } ;
struct TYPE_6__ {size_t Type; int UsageIndex; unsigned int Offset; int Method; scalar_t__ Stream; void* Usage; } ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_1__ D3DVERTEXELEMENT9 ;
typedef int BOOL ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 size_t VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 TYPE_1__ FUNC_0 () ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;




 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (char*,int) ;
 TYPE_4__* VAR_31 ;
 TYPE_1__* FUNC_2 (unsigned int) ;

HRESULT FUNC_3(
    DWORD VAR_32,
    D3DVERTEXELEMENT9** VAR_33) {

    unsigned int VAR_34, VAR_35;
    unsigned int VAR_36;
    BOOL VAR_37 = (VAR_32 & VAR_20) != 0;
    BOOL VAR_38 = (VAR_32 & VAR_27) > VAR_28;
    BOOL VAR_39 = VAR_38 &&
       (((VAR_32 & VAR_27) == VAR_27) ||
        (VAR_32 & VAR_17) ||
        (VAR_32 & VAR_18));
    BOOL VAR_40 = (VAR_32 & VAR_19) != 0;
    BOOL VAR_41 = (VAR_32 & VAR_21) != 0;

    BOOL VAR_42 = (VAR_32 & VAR_16) != 0;
    BOOL VAR_43 = (VAR_32 & VAR_22) !=0;

    DWORD VAR_44 = (VAR_32 & VAR_23) >> VAR_24;
    DWORD VAR_45 = (VAR_32 & 0xFFFF0000) >> 16;

    D3DVERTEXELEMENT9 VAR_46 = FUNC_0();
    D3DVERTEXELEMENT9 *VAR_47 = ((void*)0);

    unsigned int VAR_48;
    DWORD VAR_49 = 1 + (((VAR_32 & VAR_27) - VAR_25) >> 1);
    if (VAR_39) VAR_49--;


    VAR_48 = VAR_37 + (VAR_38 && VAR_49 > 0) + VAR_39 + VAR_40 +
           VAR_41 + VAR_42 + VAR_43 + VAR_44 + 1;


    if (!(VAR_47 = FUNC_2(VAR_48 * sizeof(*VAR_47))))
        return VAR_15;

    VAR_47[VAR_48-1] = VAR_46;
    VAR_34 = 0;
    if (VAR_37) {
        if (!VAR_38 && (VAR_32 & VAR_28)) {
            VAR_47[VAR_34].Type = VAR_5;
            VAR_47[VAR_34].Usage = VAR_12;
        }
        else if (!VAR_38 && (VAR_32 & VAR_29) == VAR_29) {
            VAR_47[VAR_34].Type = VAR_5;
            VAR_47[VAR_34].Usage = VAR_11;
        }
        else {
            VAR_47[VAR_34].Type = VAR_4;
            VAR_47[VAR_34].Usage = VAR_11;
        }
        VAR_47[VAR_34].UsageIndex = 0;
        VAR_34++;
    }
    if (VAR_38 && (VAR_49 > 0)) {
        if (((VAR_32 & VAR_27) == VAR_26) && (VAR_32 & VAR_17))
            VAR_47[VAR_34].Type = VAR_1;
        else {
            switch(VAR_49) {
                case 1: VAR_47[VAR_34].Type = VAR_2; break;
                case 2: VAR_47[VAR_34].Type = VAR_3; break;
                case 3: VAR_47[VAR_34].Type = VAR_4; break;
                case 4: VAR_47[VAR_34].Type = VAR_5; break;
                default:
                    FUNC_1("Unexpected amount of blend values: %u\n", VAR_49);
            }
        }
        VAR_47[VAR_34].Usage = VAR_8;
        VAR_47[VAR_34].UsageIndex = 0;
        VAR_34++;
    }
    if (VAR_39) {
        if (VAR_32 & VAR_18 ||
            (((VAR_32 & VAR_27) == VAR_26) && (VAR_32 & VAR_17)))
            VAR_47[VAR_34].Type = VAR_6;
        else if (VAR_32 & VAR_17)
            VAR_47[VAR_34].Type = VAR_1;
        else
            VAR_47[VAR_34].Type = VAR_2;
        VAR_47[VAR_34].Usage = VAR_7;
        VAR_47[VAR_34].UsageIndex = 0;
        VAR_34++;
    }
    if (VAR_40) {
        VAR_47[VAR_34].Type = VAR_4;
        VAR_47[VAR_34].Usage = VAR_10;
        VAR_47[VAR_34].UsageIndex = 0;
        VAR_34++;
    }
    if (VAR_41) {
        VAR_47[VAR_34].Type = VAR_2;
        VAR_47[VAR_34].Usage = VAR_13;
        VAR_47[VAR_34].UsageIndex = 0;
        VAR_34++;
    }
    if (VAR_42) {
        VAR_47[VAR_34].Type = VAR_1;
        VAR_47[VAR_34].Usage = VAR_9;
        VAR_47[VAR_34].UsageIndex = 0;
        VAR_34++;
    }
    if (VAR_43) {
        VAR_47[VAR_34].Type = VAR_1;
        VAR_47[VAR_34].Usage = VAR_9;
        VAR_47[VAR_34].UsageIndex = 1;
        VAR_34++;
    }
    for (VAR_35 = 0; VAR_35 < VAR_44; VAR_35++) {
        unsigned int VAR_50 = (VAR_45 >> (VAR_35*2)) & 0x03;
        switch (VAR_50) {
            case 131:
                VAR_47[VAR_34].Type = VAR_2;
                break;
            case 130:
                VAR_47[VAR_34].Type = VAR_3;
                break;
            case 129:
                VAR_47[VAR_34].Type = VAR_4;
                break;
            case 128:
                VAR_47[VAR_34].Type = VAR_5;
                break;
        }
        VAR_47[VAR_34].Usage = VAR_14;
        VAR_47[VAR_34].UsageIndex = VAR_35;
        VAR_34++;
    }


    for (VAR_34 = 0, VAR_36 = 0; VAR_34 < VAR_48-1; VAR_34++) {
        VAR_47[VAR_34].Stream = 0;
        VAR_47[VAR_34].Method = VAR_0;
        VAR_47[VAR_34].Offset = VAR_36;
        VAR_36 += VAR_31[VAR_47[VAR_34].Type].component_count
                * VAR_31[VAR_47[VAR_34].Type].component_size;
    }

    *VAR_33 = VAR_47;
    return VAR_30;
}
