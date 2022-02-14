
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int protocol_binary_response_no_extras ;
typedef int protocol_binary_request_no_extras ;
typedef int expiration ;
typedef enum test_return { ____Placeholder_test_return } test_return ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (char*,int,int ,int *,size_t,char const*,int ,int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,size_t,int) ;
 size_t FUNC_5 (char*,int,int ,char const*,int ,int *,int ,int ,int ) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static enum test_return FUNC_8(const char *VAR_6, uint8_t VAR_7) {
    union {
        protocol_binary_request_no_extras request;
        protocol_binary_response_no_extras response;
        char bytes[1024];
    } VAR_8, VAR_9;

    uint32_t VAR_10 = FUNC_1(3600);
    size_t VAR_11 = 0;
    if (VAR_7 == VAR_1 || VAR_7 == VAR_2)
        VAR_11 = sizeof(VAR_10);

    size_t VAR_12 = FUNC_0(VAR_8.bytes, sizeof(VAR_8.bytes), VAR_7,
                             VAR_11 ? &VAR_10 : ((void*)0), VAR_11,
                             VAR_6, FUNC_6(VAR_6), ((void*)0), 0);

    FUNC_4(VAR_8.bytes, VAR_12, 0);
    FUNC_3(VAR_9.bytes, sizeof(VAR_9.bytes));
    FUNC_7(&VAR_9.response, VAR_7,
                             VAR_3);

    VAR_12 = FUNC_5(VAR_8.bytes, sizeof(VAR_8.bytes),
                          VAR_0,
                          VAR_6, FUNC_6(VAR_6), ((void*)0), 0,
                          0, 0);
    FUNC_4(VAR_8.bytes, VAR_12, 0);
    FUNC_3(VAR_9.bytes, sizeof(VAR_9.bytes));
    FUNC_7(&VAR_9.response, VAR_0,
                             VAR_4);


    VAR_12 = 0;
    int VAR_13;
    for (VAR_13 = 0; VAR_13 < 10; ++VAR_13) {
        union {
            protocol_binary_request_no_extras request;
            char bytes[1024];
        } VAR_14;
        size_t VAR_15 = FUNC_0(VAR_14.bytes, sizeof(VAR_14.bytes), VAR_7,
                               VAR_11 ? &VAR_10 : ((void*)0), VAR_11,
                               VAR_6, FUNC_6(VAR_6), ((void*)0), 0);
        FUNC_2(VAR_8.bytes + VAR_12, VAR_14.bytes, VAR_15);
        VAR_12 += VAR_15;
    }

    FUNC_4(VAR_8.bytes, VAR_12, 0);
    for (VAR_13 = 0; VAR_13 < 10; ++VAR_13) {
        FUNC_3(VAR_9.bytes, sizeof(VAR_9.bytes));
        FUNC_7(&VAR_9.response, VAR_7,
                                 VAR_4);
    }

    return VAR_5;
}
