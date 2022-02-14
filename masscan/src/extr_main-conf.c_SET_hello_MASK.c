
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Masscan {int is_hello_ssl; int is_hello_smbv1; int is_hello_http; scalar_t__ echo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct Masscan *VAR_3, const char *VAR_4, const char *VAR_5)
{
    FUNC_1(VAR_4);
    if (VAR_3->echo) {
        if (VAR_3->is_hello_ssl) {
            FUNC_2(VAR_3->echo, "hello = ssl\n");
        } else if (VAR_3->is_hello_smbv1) {
            FUNC_2(VAR_3->echo, "hello = smbv1\n");
        } else if (VAR_3->is_hello_http) {
            FUNC_2(VAR_3->echo, "hello = http\n");
        }
        return 0;
    }
    if (FUNC_0("ssl", VAR_5))
        VAR_3->is_hello_ssl = 1;
    else if (FUNC_0("smbv1", VAR_5))
        VAR_3->is_hello_smbv1 = 1;
    else if (FUNC_0("http", VAR_5))
        VAR_3->is_hello_http = 1;
    else {
        FUNC_2(VAR_2, "FAIL: %s: unknown hello type\n", VAR_5);
        return VAR_0;
    }
    return VAR_1;
}
