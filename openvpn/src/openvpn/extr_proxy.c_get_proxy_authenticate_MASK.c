
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socket_descriptor_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,char*,int,int,int,int *,int volatile*) ;
 char* FUNC_4 (char*,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_7(socket_descriptor_t VAR_5,
                       int VAR_6,
                       char **VAR_7,
                       volatile int *VAR_8)
{
    char VAR_9[256];
    int VAR_10 = VAR_3;
    while (1)
    {
        if (!FUNC_3(VAR_5, VAR_9, sizeof(VAR_9), VAR_6, 1, ((void*)0), VAR_8))
        {
            FUNC_1(*VAR_7);
            *VAR_7 = ((void*)0);
            return VAR_3;
        }
        FUNC_0(VAR_9);
        if (!FUNC_5(VAR_9))
        {
            return VAR_10;
        }
        if (VAR_10 == VAR_3 && !FUNC_6(VAR_9, "Proxy-Authenticate: ", 20))
        {
            if (!FUNC_6(VAR_9+20, "Basic ", 6))
            {
                FUNC_2(VAR_0, "PROXY AUTH BASIC: '%s'", VAR_9);
                *VAR_7 = FUNC_4(VAR_9+26, ((void*)0));
                VAR_10 = VAR_1;
            }
        }
    }
}
