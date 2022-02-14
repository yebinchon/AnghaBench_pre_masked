
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int keylen; int bodylen; } ;
struct TYPE_7__ {TYPE_1__ response; } ;
struct TYPE_8__ {TYPE_2__ header; } ;
struct TYPE_9__ {TYPE_3__ message; } ;
typedef TYPE_4__ protocol_binary_response_no_extras ;
typedef int protocol_binary_request_no_extras ;
typedef enum test_return { ____Placeholder_test_return } test_return ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 size_t FUNC_2 (char*,int,int ,char const*,int,char const*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,size_t,int) ;
 size_t FUNC_5 (char*,int,int ,char const*,int,char const*,int,int ,int ) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static enum test_return FUNC_8(const char *VAR_8, uint8_t VAR_9) {
    union {
        protocol_binary_request_no_extras request;
        protocol_binary_response_no_extras response;
        char bytes[1024];
    } VAR_10, VAR_11;
    const char *VAR_12 = "world";

    size_t VAR_13 = FUNC_2(VAR_10.bytes, sizeof(VAR_10.bytes), VAR_9,
                              VAR_8, FUNC_6(VAR_8), VAR_12, FUNC_6(VAR_12));


    FUNC_4(VAR_10.bytes, VAR_13, 0);
    FUNC_3(VAR_11.bytes, sizeof(VAR_11.bytes));
    FUNC_7(&VAR_11.response, VAR_9,
                             VAR_5);

    VAR_13 = FUNC_5(VAR_10.bytes, sizeof(VAR_10.bytes),
                          VAR_0,
                          VAR_8, FUNC_6(VAR_8), VAR_12, FUNC_6(VAR_12), 0, 0);
    FUNC_4(VAR_10.bytes, VAR_13, 0);
    FUNC_3(VAR_11.bytes, sizeof(VAR_11.bytes));
    FUNC_7(&VAR_11.response, VAR_0,
                             VAR_6);

    VAR_13 = FUNC_2(VAR_10.bytes, sizeof(VAR_10.bytes), VAR_9,
                      VAR_8, FUNC_6(VAR_8), VAR_12, FUNC_6(VAR_12));
    FUNC_4(VAR_10.bytes, VAR_13, 0);

    if (VAR_9 == VAR_1 || VAR_9 == VAR_4) {
        FUNC_3(VAR_11.bytes, sizeof(VAR_11.bytes));
        FUNC_7(&VAR_11.response, VAR_9,
                                 VAR_6);
    } else {
        VAR_13 = FUNC_2(VAR_10.bytes, sizeof(VAR_10.bytes), VAR_3,
                          ((void*)0), 0, ((void*)0), 0);
        FUNC_4(VAR_10.bytes, VAR_13, 0);
        FUNC_3(VAR_11.bytes, sizeof(VAR_11.bytes));
        FUNC_7(&VAR_11.response, VAR_3,
                                 VAR_6);
    }

    VAR_13 = FUNC_2(VAR_10.bytes, sizeof(VAR_10.bytes), VAR_2,
                      VAR_8, FUNC_6(VAR_8), ((void*)0), 0);

    FUNC_4(VAR_10.bytes, VAR_13, 0);
    FUNC_3(VAR_11.bytes, sizeof(VAR_11.bytes));
    FUNC_7(&VAR_11.response, VAR_2,
                             VAR_6);

    FUNC_0(VAR_11.response.message.header.response.keylen == FUNC_6(VAR_8));
    FUNC_0(VAR_11.response.message.header.response.bodylen == (FUNC_6(VAR_8) + 2*FUNC_6(VAR_12) + 4));

    char *VAR_14 = VAR_11.bytes;
    VAR_14 += sizeof(VAR_11.response);
    VAR_14 += 4;

    FUNC_0(FUNC_1(VAR_14, VAR_8, FUNC_6(VAR_8)) == 0);
    VAR_14 += FUNC_6(VAR_8);
    FUNC_0(FUNC_1(VAR_14, VAR_12, FUNC_6(VAR_12)) == 0);
    VAR_14 += FUNC_6(VAR_12);
    FUNC_0(FUNC_1(VAR_14, VAR_12, FUNC_6(VAR_12)) == 0);

    return VAR_7;
}
