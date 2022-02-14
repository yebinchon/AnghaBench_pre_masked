
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,size_t,int) ;
 size_t FUNC_2 (char*,int,int ,char const*,int ,int*,int,int ,int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static enum test_return FUNC_6(const char* VAR_6, uint8_t VAR_7) {
    uint64_t VAR_8 = 0xdeadbeefdeadcafe;
    union {
        protocol_binary_request_no_extras request;
        protocol_binary_response_no_extras response;
        char bytes[1024];
    } VAR_9, VAR_10;
    size_t VAR_11 = FUNC_2(VAR_9.bytes, sizeof(VAR_9.bytes), VAR_7,
                                 VAR_6, FUNC_3(VAR_6), &VAR_8, sizeof(VAR_8),
                                 0, 0);
    FUNC_1(VAR_9.bytes, VAR_11, 0);
    FUNC_0(VAR_10.bytes, sizeof(VAR_10.bytes));
    FUNC_5(&VAR_10.response, VAR_7,
                             VAR_3);
    VAR_11 = FUNC_2(VAR_9.bytes, sizeof(VAR_9.bytes),
                          VAR_0,
                          VAR_6, FUNC_3(VAR_6), &VAR_8, sizeof(VAR_8), 0, 0);
    FUNC_1(VAR_9.bytes, VAR_11, 0);
    FUNC_0(VAR_10.bytes, sizeof(VAR_10.bytes));
    FUNC_5(&VAR_10.response, VAR_0,
                             VAR_4);

    VAR_11 = FUNC_2(VAR_9.bytes, sizeof(VAR_9.bytes), VAR_7,
                          VAR_6, FUNC_3(VAR_6), &VAR_8, sizeof(VAR_8), 0, 0);
    int VAR_12;
    for (VAR_12 = 0; VAR_12 < 10; ++VAR_12) {
        FUNC_1(VAR_9.bytes, VAR_11, 0);
        if (VAR_7 == VAR_1) {
            FUNC_0(VAR_10.bytes, sizeof(VAR_10.bytes));
            FUNC_5(&VAR_10.response,
                                     VAR_1,
                                     VAR_4);
        }
    }

    if (VAR_7 == VAR_2) {
        FUNC_4();
    }

    return VAR_5;
}
