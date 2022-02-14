
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct InetContext {int error; int timeout; int event; } ;
typedef int DWORD ;


 int FUNC_0 (int *,int ,int ,int *) ;
 struct InetContext* FUNC_1 (int) ;
 int FUNC_2 (struct InetContext*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct InetContext *FUNC_3(DWORD VAR_2)
{
    struct InetContext *VAR_3 = FUNC_1(sizeof(struct InetContext));

    if (VAR_3)
    {
        VAR_3->event = FUNC_0(((void*)0), VAR_1, VAR_1, ((void*)0));
        if (!VAR_3->event)
        {
            FUNC_2(VAR_3);
            VAR_3 = ((void*)0);
        }
        else
        {
            VAR_3->timeout = VAR_2;
            VAR_3->error = VAR_0;
        }
    }
    return VAR_3;
}
