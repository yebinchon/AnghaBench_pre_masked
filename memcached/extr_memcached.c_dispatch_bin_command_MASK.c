
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_13__ {scalar_t__ extlen; scalar_t__ keylen; scalar_t__ bodylen; } ;
struct TYPE_14__ {TYPE_1__ request; } ;
struct TYPE_15__ {int noreply; int cmd; void* write_and_go; int rbytes; int rcurr; int sfd; TYPE_2__ binary_header; } ;
typedef TYPE_3__ conn ;
struct TYPE_16__ {scalar_t__ sasl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_4 (TYPE_3__*,void*) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_6__ VAR_13 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int ,int *,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_9(conn *VAR_14) {
    int VAR_15 = 0;

    uint8_t VAR_16 = VAR_14->binary_header.request.extlen;
    uint16_t VAR_17 = VAR_14->binary_header.request.keylen;
    uint32_t VAR_18 = VAR_14->binary_header.request.bodylen;

    if (VAR_17 > VAR_18 || VAR_17 + VAR_16 > VAR_18) {
        FUNC_7(VAR_14, VAR_2, ((void*)0), 0);
        VAR_14->write_and_go = VAR_12;
        return;
    }

    if (VAR_13.sasl && !FUNC_1(VAR_14)) {
        FUNC_7(VAR_14, VAR_1, ((void*)0), 0);
        VAR_14->write_and_go = VAR_12;
        return;
    }

    FUNC_0(VAR_14->sfd, VAR_14->rcurr, VAR_14->rbytes);
    VAR_14->noreply = 1;


    if (VAR_17 > VAR_0) {
        FUNC_5(VAR_14);
        return;
    }

    switch (VAR_14->cmd) {
    case 131:
        VAR_14->cmd = 132;
        break;
    case 161:
        VAR_14->cmd = 162;
        break;
    case 136:
        VAR_14->cmd = 137;
        break;
    case 155:
        VAR_14->cmd = 156;
        break;
    case 143:
        VAR_14->cmd = 144;
        break;
    case 157:
        VAR_14->cmd = 158;
        break;
    case 138:
        VAR_14->cmd = 139;
        break;
    case 153:
        VAR_14->cmd = 154;
        break;
    case 159:
        VAR_14->cmd = 160;
        break;
    case 140:
        VAR_14->cmd = 141;
        break;
    case 145:
        VAR_14->cmd = 148;
        break;
    case 146:
        VAR_14->cmd = 147;
        break;
    case 149:
        VAR_14->cmd = 152;
        break;
    case 150:
        VAR_14->cmd = 151;
        break;
    default:
        VAR_14->noreply = 0;
    }

    switch (VAR_14->cmd) {
        case 128:
            if (VAR_16 == 0 && VAR_17 == 0 && VAR_18 == 0) {
                FUNC_8(VAR_14, VAR_3, 0, 0, FUNC_6(VAR_3));
            } else {
                VAR_15 = 1;
            }
            break;
        case 154:
            if (VAR_17 == 0 && VAR_18 == VAR_16 && (VAR_16 == 0 || VAR_16 == 4)) {
                FUNC_3(VAR_14, VAR_4, VAR_16);
            } else {
                VAR_15 = 1;
            }
            break;
        case 142:
            if (VAR_16 == 0 && VAR_17 == 0 && VAR_18 == 0) {
                FUNC_8(VAR_14, ((void*)0), 0, 0, 0);
            } else {
                VAR_15 = 1;
            }
            break;
        case 132:
        case 162:
        case 137:
            if (VAR_16 == 8 && VAR_17 != 0 && VAR_18 >= (VAR_17 + 8)) {
                FUNC_3(VAR_14, VAR_9, 8);
            } else {
                VAR_15 = 1;
            }
            break;
        case 145:
        case 148:
        case 146:
        case 147:
            if (VAR_16 == 0 && VAR_18 == VAR_17 && VAR_17 > 0) {
                FUNC_3(VAR_14, VAR_6, 0);
            } else {
                VAR_15 = 1;
            }
            break;
        case 156:
            if (VAR_17 > 0 && VAR_16 == 0 && VAR_18 == VAR_17) {
                FUNC_3(VAR_14, VAR_5, VAR_16);
            } else {
                VAR_15 = 1;
            }
            break;
        case 144:
        case 158:
            if (VAR_17 > 0 && VAR_16 == 20 && VAR_18 == (VAR_17 + VAR_16)) {
                FUNC_3(VAR_14, VAR_7, 20);
            } else {
                VAR_15 = 1;
            }
            break;
        case 160:
        case 141:
            if (VAR_17 > 0 && VAR_16 == 0) {
                FUNC_3(VAR_14, VAR_9, 0);
            } else {
                VAR_15 = 1;
            }
            break;
        case 130:
            if (VAR_16 == 0) {
                FUNC_3(VAR_14, VAR_10, 0);
            } else {
                VAR_15 = 1;
            }
            break;
        case 139:
            if (VAR_17 == 0 && VAR_16 == 0 && VAR_18 == 0) {
                FUNC_8(VAR_14, ((void*)0), 0, 0, 0);
                VAR_14->write_and_go = VAR_12;
                if (VAR_14->noreply) {
                    FUNC_4(VAR_14, VAR_12);
                }
            } else {
                VAR_15 = 1;
            }
            break;
        case 134:
            if (VAR_16 == 0 && VAR_17 == 0 && VAR_18 == 0) {
                FUNC_2(VAR_14);
            } else {
                VAR_15 = 1;
            }
            break;
        case 135:
        case 133:
            if (VAR_16 == 0 && VAR_17 != 0) {
                FUNC_3(VAR_14, VAR_8, 0);
            } else {
                VAR_15 = 1;
            }
            break;
        case 129:
        case 152:
        case 149:
        case 151:
        case 150:
            if (VAR_16 == 4 && VAR_17 != 0) {
                FUNC_3(VAR_14, VAR_11, 4);
            } else {
                VAR_15 = 1;
            }
            break;
        default:
            FUNC_7(VAR_14, VAR_2, ((void*)0),
                            VAR_18);
    }

    if (VAR_15)
        FUNC_5(VAR_14);
}
