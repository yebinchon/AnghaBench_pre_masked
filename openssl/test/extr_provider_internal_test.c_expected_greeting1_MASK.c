
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int expected_greeting ;


 int FUNC_0 (char*,int,char*,int ,char const*) ;
 int VAR_0 ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_1)
{
    static char VAR_2[256] = "";

    FUNC_0(VAR_2, sizeof(VAR_2),
                 "Hello OpenSSL %.20s, greetings from %s!",
                 VAR_0, VAR_1);

    return VAR_2;
}
