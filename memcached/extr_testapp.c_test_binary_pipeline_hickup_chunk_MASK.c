
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int protocol_binary_request_no_extras ;
typedef int off_t ;
typedef enum test_return { ____Placeholder_test_return } test_return ;
 int VAR_0 ;
 size_t FUNC_0 (char*,int,int,char**,size_t,int,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 () ;
 size_t FUNC_3 (char*,int,int const,char**,size_t,int*,int) ;
 int FUNC_4 (void*,int,int) ;
 size_t FUNC_5 (char*,int,int,char**,size_t,int*,int,int ,int ) ;
 size_t FUNC_6 (char*,int,int,char**,size_t,int) ;

__attribute__((used)) static enum test_return FUNC_7(void *VAR_2, size_t VAR_3) {
    off_t VAR_4 = 0;
    char *VAR_5[256];
    uint64_t VAR_6 = 0xfeedfacedeadbeef;

    while (VAR_1 &&
           VAR_4 + sizeof(protocol_binary_request_no_extras) < VAR_3) {
        union {
            protocol_binary_request_no_extras request;
            char bytes[65 * 1024];
        } VAR_7;
        uint8_t VAR_8 = (uint8_t)(FUNC_2() & 0xff);
        size_t VAR_9;
        size_t VAR_10 = (FUNC_2() % 250) + 1;

        switch (VAR_8) {
        case 162:
        case 161:
        case 137:
        case 136:
        case 132:
        case 131:
            VAR_9 = FUNC_5(VAR_7.bytes, sizeof(VAR_7.bytes), VAR_8,
                                  VAR_5, VAR_10 , &VAR_6, sizeof(VAR_6),
                                  0, 0);
            break;
        case 160:
        case 159:
        case 141:
        case 140:
            VAR_9 = FUNC_3(VAR_7.bytes, sizeof(VAR_7.bytes), VAR_8,
                              VAR_5, VAR_10, &VAR_6, sizeof(VAR_6));
            break;
        case 154:
        case 153:
            VAR_9 = FUNC_3(VAR_7.bytes, sizeof(VAR_7.bytes), VAR_8,
                              ((void*)0), 0, ((void*)0), 0);
            break;
        case 142:
            VAR_9 = FUNC_3(VAR_7.bytes, sizeof(VAR_7.bytes), VAR_8,
                              ((void*)0), 0, ((void*)0), 0);
            break;
        case 156:
        case 155:
            VAR_9 = FUNC_3(VAR_7.bytes, sizeof(VAR_7.bytes), VAR_8,
                             VAR_5, VAR_10, ((void*)0), 0);
            break;
        case 158:
        case 157:
        case 144:
        case 143:
            VAR_9 = FUNC_0(VAR_7.bytes, sizeof(VAR_7.bytes), VAR_8,
                                     VAR_5, VAR_10, 1, 0, 0);
            break;
        case 128:
            VAR_9 = FUNC_3(VAR_7.bytes, sizeof(VAR_7.bytes),
                             128,
                             ((void*)0), 0, ((void*)0), 0);
            break;
        case 148:
        case 147:
        case 146:
        case 145:
            VAR_9 = FUNC_3(VAR_7.bytes, sizeof(VAR_7.bytes), VAR_8,
                             VAR_5, VAR_10, ((void*)0), 0);
            break;

        case 129:
        case 152:
        case 149:
        case 151:
        case 150:
            VAR_9 = FUNC_6(VAR_7.bytes, sizeof(VAR_7.bytes), VAR_8,
                                VAR_5, VAR_10, 10);
            break;

        case 130:
            VAR_9 = FUNC_3(VAR_7.bytes, sizeof(VAR_7.bytes),
                              130,
                              ((void*)0), 0, ((void*)0), 0);
            break;

        case 134:
        case 135:
        case 133:

        case 138:
        case 139:

            VAR_8 |= 0xf0;

        default:
            VAR_9 = FUNC_3(VAR_7.bytes, sizeof(VAR_7.bytes),
                              VAR_8, ((void*)0), 0, ((void*)0), 0);
        }

        if ((VAR_9 + VAR_4) < VAR_3) {
            FUNC_1(((char*)VAR_2) + VAR_4, VAR_7.bytes, VAR_9);
            VAR_4 += VAR_9;
        } else {
            break;
        }
    }
    FUNC_4(VAR_2, VAR_4, 1);

    return VAR_0;
}
