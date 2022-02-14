
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int protocol_binary_response_no_extras ;
typedef int protocol_binary_request_no_extras ;
typedef enum test_return { ____Placeholder_test_return } test_return ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,size_t,int) ;
 size_t FUNC_2 (char*,int,int ,char const*,int ,int*,int,int ,int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static enum test_return FUNC_5(const char *VAR_4, uint8_t VAR_5) {
    uint64_t VAR_6 = 0xdeadbeefdeadcafe;
    union {
        protocol_binary_request_no_extras request;
        protocol_binary_response_no_extras response;
        char bytes[1024];
    } VAR_7, VAR_8;
    size_t VAR_9 = FUNC_2(VAR_7.bytes, sizeof(VAR_7.bytes), VAR_5, VAR_4,
                                 FUNC_3(VAR_4), &VAR_6, sizeof(VAR_6),
                                 0, 0);


    int VAR_10;
    for (VAR_10 = 0; VAR_10 < 10; ++VAR_10) {
        FUNC_1(VAR_7.bytes, VAR_9, 0);
        if (VAR_10 == 0) {
            if (VAR_5 == VAR_0) {
                FUNC_0(VAR_8.bytes, sizeof(VAR_8.bytes));
                FUNC_4(&VAR_8.response, VAR_5,
                                         VAR_2);
            }
        } else {
            FUNC_0(VAR_8.bytes, sizeof(VAR_8.bytes));
            FUNC_4(&VAR_8.response, VAR_5,
                                     VAR_1);
        }
    }

    return VAR_3;
}
