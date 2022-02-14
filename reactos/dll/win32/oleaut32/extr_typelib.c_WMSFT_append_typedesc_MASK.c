
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int encoded ;
struct TYPE_9__ {char* data; int len; } ;
struct TYPE_10__ {TYPE_2__ typdesc_seg; } ;
typedef TYPE_3__ WMSFT_TLBFile ;
typedef int VARTYPE ;
struct TYPE_8__ {int hreftype; int lpadesc; TYPE_4__* lptdesc; } ;
struct TYPE_11__ {int vt; TYPE_1__ u; } ;
typedef TYPE_4__ TYPEDESC ;
typedef int INT16 ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;

 int FUNC_1 (int ,TYPE_3__*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int*,int) ;
 int FUNC_5 (char*,int*,int) ;

__attribute__((used)) static DWORD FUNC_6(TYPEDESC *VAR_9, WMSFT_TLBFile *VAR_10, DWORD *VAR_11, INT16 *VAR_12)
{
    DWORD VAR_13;
    INT16 VAR_14;
    DWORD VAR_15 = 0;
    DWORD VAR_16[2];
    VARTYPE VAR_17, VAR_18;
    char *VAR_19;

    if(!VAR_9)
        return -1;

    if(!VAR_11)
        VAR_11 = &VAR_13;
    if(!VAR_12)
        VAR_12 = &VAR_14;

    VAR_17 = VAR_9->vt & VAR_6;

    if(VAR_17 == VAR_4 || VAR_17 == VAR_5){
        DWORD VAR_20;
        VAR_16[1] = FUNC_6(VAR_9->u.lptdesc, VAR_10, &VAR_20, VAR_12);
        VAR_16[0] = VAR_9->vt | ((VAR_20 | VAR_0) << 16);
        *VAR_11 = 0x7FFF;
        *VAR_12 += 2 * sizeof(DWORD);
    }else if(VAR_17 == VAR_1){
        VAR_16[0] = VAR_9->vt | (0x7FFE << 16);
        VAR_16[1] = FUNC_1(VAR_9->u.lpadesc, VAR_10);
        *VAR_11 = 0x7FFE;
    }else if(VAR_17 == VAR_8){
        VAR_16[0] = VAR_9->vt | (0x7FFF << 16);
        VAR_16[1] = VAR_9->u.hreftype;
        *VAR_11 = 0x7FFF;
    }else{
        FUNC_0("Mixing in-place, VT: 0x%x\n", VAR_9->vt);

        switch(VAR_17){
        case 130:
            VAR_18 = VAR_3;
            break;
        case 129:
            VAR_18 = VAR_7;
            break;
        case 128:
            VAR_18 = VAR_2;
            break;
        default:
            VAR_18 = VAR_17;
            break;
        }

        *VAR_11 = VAR_18;
        return 0x80000000 | (VAR_18 << 16) | VAR_9->vt;
    }

    VAR_19 = VAR_10->typdesc_seg.data;
    while(VAR_15 < VAR_10->typdesc_seg.len){
        if(!FUNC_4(&VAR_19[VAR_15], VAR_16, sizeof(VAR_16)))
            return VAR_15;
        VAR_15 += sizeof(VAR_16);
    }

    VAR_10->typdesc_seg.len += sizeof(VAR_16);
    if(!VAR_10->typdesc_seg.data)
        VAR_19 = VAR_10->typdesc_seg.data = FUNC_2(VAR_10->typdesc_seg.len);
    else
        VAR_19 = VAR_10->typdesc_seg.data = FUNC_3(VAR_10->typdesc_seg.data, VAR_10->typdesc_seg.len);

    FUNC_5(&VAR_19[VAR_15], VAR_16, sizeof(VAR_16));

    return VAR_15;
}
