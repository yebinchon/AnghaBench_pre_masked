
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FLOAT ;
typedef int D3DDECLTYPE ;
typedef int BOOL ;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (void*,void*,int ) ;
 int FUNC_3 (void*,void*,int ) ;
 int FUNC_4 (void*,void*,int ) ;
 int FUNC_5 (void*,void*,int ) ;
 int FUNC_6 (void*,void*,int ) ;
 int FUNC_7 (void*,void*,int ) ;
 int FUNC_8 (void*,void*,int ) ;
 int FUNC_9 (void*,void*,int ) ;
 int FUNC_10 (void*,void*,int ) ;
 int FUNC_11 (void*,void*,int ) ;
 int FUNC_12 (void*,void*,int ) ;
 int FUNC_13 (void*,void*,int ) ;
 int FUNC_14 (void*,void*,int ) ;
 int FUNC_15 (void*,void*,int ) ;
 int FUNC_16 (void*,void*,int ) ;
 int FUNC_17 (void*,void*,int ) ;

__attribute__((used)) static BOOL FUNC_18(void *VAR_1, void *VAR_2, D3DDECLTYPE VAR_3, FLOAT VAR_4)
{

    BOOL VAR_5 = VAR_0;
    BOOL VAR_6 = VAR_0;

    switch (VAR_3)
    {
        case 143:
            return FUNC_3(VAR_1, VAR_2, VAR_4);

        case 140:
            return FUNC_6(VAR_1, VAR_2, VAR_4);

        case 139:
            return FUNC_7(VAR_1, VAR_2, VAR_4);

        case 138:
            return FUNC_8(VAR_1, VAR_2, VAR_4);

        case 145:
            return FUNC_1(VAR_1, VAR_2, VAR_4);

        case 133:
            return FUNC_13(VAR_1, VAR_2, VAR_4);

        case 137:
            return FUNC_9(VAR_1, VAR_2, VAR_4);

        case 135:
            return FUNC_11(VAR_1, VAR_2, VAR_4);

        case 132:
            return FUNC_14(VAR_1, VAR_2, VAR_4);

        case 136:
            return FUNC_10(VAR_1, VAR_2, VAR_4);

        case 134:
            return FUNC_12(VAR_1, VAR_2, VAR_4);

        case 129:
            return FUNC_16(VAR_1, VAR_2, VAR_4);

        case 128:
            return FUNC_17(VAR_1, VAR_2, VAR_4);

        case 131:
            return FUNC_15(VAR_1, VAR_2, VAR_4);

        case 144:
            return FUNC_2(VAR_1, VAR_2, VAR_4);

        case 142:
            return FUNC_4(VAR_1, VAR_2, VAR_4);

        case 141:
            return FUNC_5(VAR_1, VAR_2, VAR_4);

        case 130:
            if (!VAR_5++)
                FUNC_0("D3DDECLTYPE_UNUSED welding not implemented.\n");
            break;

        default:
            if (!VAR_6++)
                FUNC_0("Welding of unknown declaration type %d is not implemented.\n", VAR_3);
            break;
    }

    return VAR_0;
}
