
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_multi {int * session; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ,int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct tls_multi*,int *) ;

__attribute__((used)) static void
FUNC_7(struct tls_multi *VAR_3, int VAR_4, int VAR_5, bool VAR_6)
{
    FUNC_2(VAR_1, "TLS: move_session: dest=%s src=%s reinit_src=%d",
        FUNC_4(VAR_4),
        FUNC_4(VAR_5),
        VAR_6);
    FUNC_0(VAR_5 != VAR_4);
    FUNC_0(VAR_5 >= 0 && VAR_5 < VAR_2);
    FUNC_0(VAR_4 >= 0 && VAR_4 < VAR_2);
    FUNC_5(&VAR_3->session[VAR_4], 0);
    VAR_3->session[VAR_4] = VAR_3->session[VAR_5];

    if (VAR_6)
    {
        FUNC_6(VAR_3, &VAR_3->session[VAR_5]);
    }
    else
    {
        FUNC_3(&VAR_3->session[VAR_5], sizeof(VAR_3->session[VAR_5]));
    }

    FUNC_1(VAR_0, "TLS: move_session: exit");
}
