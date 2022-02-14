
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ ai_flags; scalar_t__ ai_family; scalar_t__ ai_socktype; scalar_t__ ai_protocol; scalar_t__ ai_addrlen; struct TYPE_10__* ai_canonname; int ai_addr; struct TYPE_10__* ai_next; } ;
typedef TYPE_1__ ADDRINFOW ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int,char*,...) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5 (ADDRINFOW *VAR_0, ADDRINFOW *VAR_1)
{
    for (; VAR_0 && VAR_1 ; VAR_0 = VAR_0->ai_next, VAR_1 = VAR_1->ai_next)
    {
        FUNC_3(VAR_0->ai_flags == VAR_1->ai_flags,
           "Wrong flags %d != %d\n", VAR_0->ai_flags, VAR_1->ai_flags);
        FUNC_3(VAR_0->ai_family == VAR_1->ai_family,
           "Wrong family %d != %d\n", VAR_0->ai_family, VAR_1->ai_family);
        FUNC_3(VAR_0->ai_socktype == VAR_1->ai_socktype,
           "Wrong socktype %d != %d\n", VAR_0->ai_socktype, VAR_1->ai_socktype);
        FUNC_3(VAR_0->ai_protocol == VAR_1->ai_protocol,
           "Wrong protocol %d != %d\n", VAR_0->ai_protocol, VAR_1->ai_protocol);
        FUNC_3(VAR_0->ai_addrlen == VAR_1->ai_addrlen,
           "Wrong addrlen %lu != %lu\n", VAR_0->ai_addrlen, VAR_1->ai_addrlen);
        FUNC_3(!FUNC_1(VAR_0->ai_addr, VAR_1->ai_addr, FUNC_2(VAR_0->ai_addrlen, VAR_1->ai_addrlen)),
           "Wrong address data\n");
        if (VAR_0->ai_canonname && VAR_1->ai_canonname)
        {
            FUNC_3(!FUNC_0(VAR_0->ai_canonname, VAR_1->ai_canonname), "Wrong canonical name '%s' != '%s'\n",
               FUNC_4(VAR_0->ai_canonname), FUNC_4(VAR_1->ai_canonname));
        }
        else
            FUNC_3(!VAR_0->ai_canonname && !VAR_1->ai_canonname, "Expected both names absent (%p != %p)\n",
               VAR_0->ai_canonname, VAR_1->ai_canonname);
    }
    FUNC_3(!VAR_0 && !VAR_1, "Expected both addresses null (%p != %p)\n", VAR_0, VAR_1);
}
