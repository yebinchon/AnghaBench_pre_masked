
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct Output {int dummy; } ;
typedef enum ApplicationProtocol { ____Placeholder_ApplicationProtocol } ApplicationProtocol ;
typedef int banner_buffer ;
typedef int FILE ;


 int FUNC_0 (struct Output*) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,char*,unsigned int,char const*,unsigned int,char*,char*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (unsigned int) ;
 char* FUNC_4 (unsigned char const*,unsigned int,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct Output *VAR_0, FILE *VAR_1, time_t VAR_2,
        unsigned VAR_3, unsigned VAR_4, unsigned VAR_5,
        enum ApplicationProtocol VAR_6,
        unsigned VAR_7,
        const unsigned char *VAR_8, unsigned VAR_9)
{
    char VAR_10[4096];
    const char *VAR_11;

    switch (VAR_6) {
    case 6: VAR_11 = "syn-ack"; break;
    default: VAR_11 = "response"; break;
    }

    FUNC_0(VAR_0);

    FUNC_1(VAR_1, "<host endtime=\"%u\">"
                    "<address addr=\"%u.%u.%u.%u\" addrtype=\"ipv4\"/>"
                    "<ports>"
                    "<port protocol=\"%s\" portid=\"%u\">"
                      "<state state=\"open\" reason=\"%s\" reason_ttl=\"%u\" />"
                      "<service name=\"%s\" banner=\"%s\"></service>"
                    "</port>"
                    "</ports>"
                "</host>"
                "\r\n",
        (unsigned)VAR_2,
        (VAR_3>>24)&0xFF,
        (VAR_3>>16)&0xFF,
        (VAR_3>> 8)&0xFF,
        (VAR_3>> 0)&0xFF,
        FUNC_3(VAR_4),
        VAR_5,
        VAR_11, VAR_7,
        FUNC_2(VAR_6),
        FUNC_4(VAR_8, VAR_9, VAR_10, sizeof(VAR_10))
        );
}
