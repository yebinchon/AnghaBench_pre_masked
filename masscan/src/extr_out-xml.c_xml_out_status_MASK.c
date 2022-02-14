
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct Output {int dummy; } ;
typedef int reason_buffer ;
typedef int FILE ;


 int FUNC_0 (struct Output*) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,char*,unsigned int,char*,char*,unsigned int) ;
 char* FUNC_2 (unsigned int) ;
 char* FUNC_3 (unsigned int,char*,int) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct Output *VAR_0, FILE *VAR_1, time_t VAR_2, int VAR_3,
               unsigned VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned VAR_7, unsigned VAR_8)
{
    char VAR_9[128];
    FUNC_0(VAR_0);
    FUNC_1(VAR_1, "<host endtime=\"%u\">"
                    "<address addr=\"%u.%u.%u.%u\" addrtype=\"ipv4\"/>"
                    "<ports>"
                    "<port protocol=\"%s\" portid=\"%u\">"
                    "<state state=\"%s\" reason=\"%s\" reason_ttl=\"%u\"/>"
                    "</port>"
                    "</ports>"
                "</host>"
                "\r\n",
        (unsigned)VAR_2,
        (VAR_4>>24)&0xFF,
        (VAR_4>>16)&0xFF,
        (VAR_4>> 8)&0xFF,
        (VAR_4>> 0)&0xFF,
        FUNC_2(VAR_5),
        VAR_6,
        FUNC_4(VAR_3),
        FUNC_3(VAR_7, VAR_9, sizeof(VAR_9)),
        VAR_8
        );
}
