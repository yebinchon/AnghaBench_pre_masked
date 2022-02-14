
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int* data; } ;
struct TYPE_5__ {TYPE_1__ custdata_seg; } ;
typedef TYPE_2__ WMSFT_TLBFile ;
typedef int VARTYPE ;
typedef int VARIANT ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ,int) ;
 int FUNC_8 (int ,int ,int*,int,char*,int,int *,int *) ;
 void* FUNC_9 (int) ;
 void* FUNC_10 (int*,int ) ;

__attribute__((used)) static DWORD FUNC_11(VARIANT *VAR_1, WMSFT_TLBFile *VAR_2)
{
    VARIANT VAR_3 = *VAR_1;
    VARTYPE VAR_4 = FUNC_6(VAR_1);
    int VAR_5 = 0;
    HRESULT VAR_6;
    DWORD VAR_7 = VAR_2->custdata_seg.len;

    if(VAR_4 == 134)
        VAR_4 = 135;
    if(VAR_4 == 128)
        VAR_4 = 129;

    VAR_3 = *VAR_1;
    if(FUNC_6(VAR_1) != VAR_4) {
        VAR_6 = FUNC_7(&VAR_3, VAR_1, 0, VAR_4);
        if(FUNC_1(VAR_6)){
            FUNC_0("VariantChangeType failed: %08x\n", VAR_6);
            return -1;
        }
    }


    switch(VAR_4){
    case 135:
    case 129:
        VAR_5 = 0x3ffffff;
        if(FUNC_5(&VAR_3) > 0x3ffffff)
            break;

    case 137:
    case 131:
    case 140:
        if(!VAR_5)
            VAR_5 = 0xff;

    case 136:
    case 130:
        if(!VAR_5)
            VAR_5 = 0xffff;
        return ((0x80 + 0x4 * FUNC_6(VAR_1)) << 24) | (FUNC_5(&VAR_3) & VAR_5);
    }


    switch(VAR_4) {
    case 135:
    case 132:
    case 129:
    case 134:
    case 128:
    case 138:
    case 133: {

        int *VAR_8;

        if(VAR_2->custdata_seg.data){
            VAR_2->custdata_seg.data = FUNC_10(VAR_2->custdata_seg.data, VAR_2->custdata_seg.len + sizeof(int) * 2);
            VAR_8 = (int *)(((char *)VAR_2->custdata_seg.data) + VAR_2->custdata_seg.len);
            VAR_2->custdata_seg.len += sizeof(int) * 2;
        }else{
            VAR_2->custdata_seg.len = sizeof(int) * 2;
            VAR_8 = VAR_2->custdata_seg.data = FUNC_9(VAR_2->custdata_seg.len);
        }

        VAR_8[0] = FUNC_6(VAR_1) + (FUNC_5(&VAR_3) << 16);
        VAR_8[1] = (FUNC_5(&VAR_3) >> 16) + 0x57570000;



        return VAR_7;
    }

    case 139: {
        int VAR_9, VAR_10 = (6+FUNC_3(FUNC_4(&VAR_3))+3) & ~0x3;
        char *VAR_11;

        if(VAR_2->custdata_seg.data){
            VAR_2->custdata_seg.data = FUNC_10(VAR_2->custdata_seg.data, VAR_2->custdata_seg.len + VAR_10);
            VAR_11 = ((char *)VAR_2->custdata_seg.data) + VAR_2->custdata_seg.len;
            VAR_2->custdata_seg.len += VAR_10;
        }else{
            VAR_2->custdata_seg.len = VAR_10;
            VAR_11 = VAR_2->custdata_seg.data = FUNC_9(VAR_2->custdata_seg.len);
        }

        *((unsigned short *)VAR_11) = FUNC_6(VAR_1);
        *((unsigned int *)(VAR_11+2)) = FUNC_3(FUNC_4(&VAR_3));
        for(VAR_9=0; VAR_9<FUNC_3(FUNC_4(&VAR_3)); VAR_9++) {
            if(FUNC_4(&VAR_3)[VAR_9] <= 0x7f)
                VAR_11[VAR_9+6] = FUNC_4(&VAR_3)[VAR_9];
            else
                VAR_11[VAR_9+6] = '?';
        }
        FUNC_8(VAR_0, 0, FUNC_4(&VAR_3), FUNC_3(FUNC_4(&VAR_3)), &VAR_11[6], VAR_10-6, ((void*)0), ((void*)0));
        for(VAR_9=6+FUNC_3(FUNC_4(&VAR_3)); VAR_9<VAR_10; VAR_9++)
            VAR_11[VAR_9] = 0x57;



        return VAR_7;
    }
    default:
        FUNC_2("Argument type not yet handled\n");
        return -1;
    }
}
