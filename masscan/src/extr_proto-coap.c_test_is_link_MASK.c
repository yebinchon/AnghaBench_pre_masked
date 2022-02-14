
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CoapLink {size_t link_length; int link_offset; } ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;
 int VAR_0 ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, const unsigned char *VAR_2, struct CoapLink *VAR_3, size_t VAR_4, int VAR_5)
{
    size_t VAR_6;
    size_t VAR_7 = FUNC_2(VAR_1);
    const char *VAR_8 = (const char *)VAR_2;

    for (VAR_6=0; VAR_6<VAR_4; VAR_6++) {
        const char *VAR_9;
        if (VAR_7 != VAR_3[VAR_6].link_length)
            continue;
        VAR_9 = VAR_8 + VAR_3[VAR_6].link_offset;
        if (FUNC_1(VAR_9, VAR_1, VAR_7) != 0)
            continue;
        return 1;
    }

    FUNC_0(VAR_0, "[-] proto-coap failed at line number %d\n", VAR_5);
    return 0;
}
