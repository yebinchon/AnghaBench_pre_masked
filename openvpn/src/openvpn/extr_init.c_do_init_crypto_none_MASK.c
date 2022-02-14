
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int test_crypto; } ;
struct context {TYPE_1__ options; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(const struct context *VAR_1)
{
    FUNC_0(!VAR_1->options.test_crypto);
    FUNC_1(VAR_0,
        "******* WARNING *******: All encryption and authentication features "
        "disabled -- All data will be tunnelled as clear text and will not be "
        "protected against man-in-the-middle changes. "
        "PLEASE DO RECONSIDER THIS CONFIGURATION!");
}
