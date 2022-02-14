
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int value ;
typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_10__ {scalar_t__ cas; } ;
struct TYPE_11__ {TYPE_1__ response; } ;
struct TYPE_12__ {TYPE_2__ header; } ;
struct TYPE_16__ {TYPE_3__ message; } ;
typedef TYPE_7__ protocol_binary_response_no_extras ;
struct TYPE_13__ {scalar_t__ cas; } ;
struct TYPE_14__ {TYPE_4__ request; } ;
struct TYPE_15__ {TYPE_5__ header; } ;
struct TYPE_17__ {TYPE_6__ message; } ;
typedef TYPE_8__ protocol_binary_request_no_extras ;
typedef enum test_return { ____Placeholder_test_return } test_return ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,size_t,int) ;
 size_t FUNC_3 (char*,int,int ,char const*,int ,int*,int,int ,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_7__*,int ,int ) ;

__attribute__((used)) static enum test_return FUNC_7(const char *VAR_4, uint8_t VAR_5) {
    union {
        protocol_binary_request_no_extras request;
        protocol_binary_response_no_extras response;
        char bytes[1024];
    } VAR_6, VAR_7;
    uint64_t VAR_8 = 0xdeadbeefdeadcafe;
    size_t VAR_9 = FUNC_3(VAR_6.bytes, sizeof(VAR_6.bytes), VAR_5,
                                 VAR_4, FUNC_4(VAR_4), &VAR_8, sizeof(VAR_8),
                                 0, 0);


    int VAR_10;
    for (VAR_10 = 0; VAR_10 < 10; ++VAR_10) {
        FUNC_2(VAR_6.bytes, VAR_9, 0);
        if (VAR_5 == VAR_0) {
            FUNC_1(VAR_7.bytes, sizeof(VAR_7.bytes));
            FUNC_6(&VAR_7.response, VAR_5,
                                     VAR_2);
        }
    }

    if (VAR_5 == VAR_1) {
        return FUNC_5();
    }

    VAR_6.request.message.header.request.cas = VAR_7.response.message.header.response.cas;
    FUNC_2(VAR_6.bytes, VAR_9, 0);
    if (VAR_5 == VAR_0) {
        FUNC_1(VAR_7.bytes, sizeof(VAR_7.bytes));
        FUNC_6(&VAR_7.response, VAR_5,
                                 VAR_2);
        FUNC_0(VAR_7.response.message.header.response.cas != VAR_6.request.message.header.request.cas);
    } else {
        return FUNC_5();
    }

    return VAR_3;
}
