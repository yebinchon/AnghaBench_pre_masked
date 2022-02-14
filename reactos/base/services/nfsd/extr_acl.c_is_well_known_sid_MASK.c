
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WELL_KNOWN_SID_TYPE ;
typedef int PSID ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_13 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(PSID VAR_14, char *VAR_15)
{
    int VAR_16, VAR_17;
    for (VAR_17 = 0; VAR_17 < 78; VAR_17++) {
        VAR_16 = FUNC_0(VAR_14, (WELL_KNOWN_SID_TYPE)VAR_17);
        if (!VAR_16) continue;
        else {
            FUNC_1(VAR_11, "WELL_KNOWN_SID_TYPE %d\n", VAR_17);
            switch((WELL_KNOWN_SID_TYPE)VAR_17) {
            case 136:
                FUNC_2(VAR_15, VAR_9, FUNC_3(VAR_9)+1);
                return VAR_13;
            case 130:
                FUNC_2(VAR_15, VAR_8, FUNC_3(VAR_8)+1);
                return VAR_13;
            case 141:
                FUNC_2(VAR_15, VAR_0, FUNC_3(VAR_0)+1);
                return VAR_13;
            case 128:
                FUNC_2(VAR_15, VAR_4, FUNC_3(VAR_4)+1);
                return VAR_13;
            case 137:
            case 138:
                FUNC_2(VAR_15, VAR_5, FUNC_3(VAR_5)+1);
                return VAR_13;
            case 140:
                FUNC_2(VAR_15, VAR_1, FUNC_3(VAR_1)+1);
                return VAR_13;
            case 135:
                FUNC_2(VAR_15, VAR_3, FUNC_3(VAR_3)+1);
                return VAR_13;
            case 131:
                FUNC_2(VAR_15, VAR_7, FUNC_3(VAR_7)+1);
                return VAR_13;
            case 139:
                FUNC_2(VAR_15, VAR_2, FUNC_3(VAR_2)+1);
                return VAR_13;
            case 134:
                FUNC_2(VAR_15, VAR_6, FUNC_3(VAR_6)+1);
                return VAR_13;
            case 132:
            case 133:
            case 129:
                FUNC_2(VAR_15, VAR_10, FUNC_3(VAR_10)+1);
                return VAR_13;
            default: return VAR_12;
            }
        }
    }
    return VAR_12;
}
