
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nscontext {int count; struct nscontext* ns; int uri; int prefix; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nscontext*) ;

__attribute__((used)) static void FUNC_2(struct nscontext *VAR_0)
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
    {
        FUNC_0(VAR_0->ns[VAR_1].prefix);
        FUNC_0(VAR_0->ns[VAR_1].uri);
    }

    FUNC_1(VAR_0->ns);
    FUNC_1(VAR_0);
}
