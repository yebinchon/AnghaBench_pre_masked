
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int sz_ip ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_2, unsigned VAR_3, unsigned VAR_4, const char *VAR_5, va_list VAR_6)
{
    if (VAR_2 <= VAR_0) {
        char VAR_7[16];

        FUNC_2(VAR_7, sizeof(VAR_7), "%u.%u.%u.%u",
            (VAR_3>>24)&0xFF, (VAR_3>>16)&0xFF, (VAR_3>>8)&0xFF, (VAR_3>>0)&0xFF);
        FUNC_1(VAR_1, "%-15s:%5u: ", VAR_7, VAR_4);
        FUNC_3(VAR_1, VAR_5, VAR_6);
        FUNC_0(VAR_1);
    }
}
