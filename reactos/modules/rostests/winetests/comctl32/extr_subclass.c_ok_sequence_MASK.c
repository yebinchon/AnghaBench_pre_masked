
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {scalar_t__ procnum; scalar_t__ wParam; int member_1; int member_0; } ;


 int FUNC_0 (struct message const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*,...) ;
 struct message* VAR_0 ;

__attribute__((used)) static void FUNC_3(const struct message *VAR_1, const char *VAR_2)
{
    static const struct message VAR_3 = { 0, 0 };
    const struct message *VAR_4;

    FUNC_0(&VAR_3);

    VAR_4 = VAR_0;

    while(VAR_1->procnum && VAR_4->procnum)
    {
        FUNC_2(VAR_1->procnum == VAR_4->procnum,
            "%s: the procnum %d was expected, but got procnum %d instead\n",
            VAR_2, VAR_1->procnum, VAR_4->procnum);
        FUNC_2(VAR_1->wParam == VAR_4->wParam,
            "%s: in procnum %d expecting wParam 0x%lx got 0x%lx\n",
            VAR_2, VAR_1->procnum, VAR_1->wParam, VAR_4->wParam);
        VAR_1++;
        VAR_4++;
    }
    FUNC_2(!VAR_1->procnum, "Received fewer messages than expected\n");
    FUNC_2(!VAR_4->procnum, "Received more messages than expected\n");
    FUNC_1();
}
