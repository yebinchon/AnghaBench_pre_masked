
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ai_flags; scalar_t__ ai_family; scalar_t__ ai_socktype; scalar_t__ ai_protocol; scalar_t__ ai_addrlen; struct TYPE_8__* ai_canonname; int ai_addr; struct TYPE_8__* ai_next; } ;
typedef TYPE_1__ ADDRINFO ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4 (ADDRINFO *VAR_0, ADDRINFO *VAR_1)
{
    for (; VAR_0 && VAR_1 ; VAR_0 = VAR_0->ai_next, VAR_1 = VAR_1->ai_next)
    {
        FUNC_2(VAR_0->ai_flags == VAR_1->ai_flags,
           "Wrong flags %d != %d\n", VAR_0->ai_flags, VAR_1->ai_flags);
        FUNC_2(VAR_0->ai_family == VAR_1->ai_family,
           "Wrong family %d != %d\n", VAR_0->ai_family, VAR_1->ai_family);
        FUNC_2(VAR_0->ai_socktype == VAR_1->ai_socktype,
           "Wrong socktype %d != %d\n", VAR_0->ai_socktype, VAR_1->ai_socktype);
        FUNC_2(VAR_0->ai_protocol == VAR_1->ai_protocol,
           "Wrong protocol %d != %d\n", VAR_0->ai_protocol, VAR_1->ai_protocol);
        FUNC_2(VAR_0->ai_addrlen == VAR_1->ai_addrlen,
           "Wrong addrlen %lu != %lu\n", VAR_0->ai_addrlen, VAR_1->ai_addrlen);
        FUNC_2(!FUNC_0(VAR_0->ai_addr, VAR_1->ai_addr, FUNC_1(VAR_0->ai_addrlen, VAR_1->ai_addrlen)),
           "Wrong address data\n");
        if (VAR_0->ai_canonname && VAR_1->ai_canonname)
        {
            FUNC_2(!FUNC_3(VAR_0->ai_canonname, VAR_1->ai_canonname), "Wrong canonical name '%s' != '%s'\n",
               VAR_0->ai_canonname, VAR_1->ai_canonname);
        }
        else
            FUNC_2(!VAR_0->ai_canonname && !VAR_1->ai_canonname, "Expected both names absent (%p != %p)\n",
               VAR_0->ai_canonname, VAR_1->ai_canonname);
    }
    FUNC_2(!VAR_0 && !VAR_1, "Expected both addresses null (%p != %p)\n", VAR_0, VAR_1);
}
