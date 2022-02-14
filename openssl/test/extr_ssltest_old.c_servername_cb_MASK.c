
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_3 (char const*,int *) ;

__attribute__((used)) static int FUNC_4(SSL *VAR_6, int *VAR_7, void *VAR_8)
{
    const char *VAR_9 = FUNC_1(VAR_6, VAR_2);
    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_3, "Servername 2 is NULL\n");
        return VAR_0;
    }

    if (VAR_9) {
        if (VAR_4 != ((void*)0) && VAR_5 != ((void*)0) &&
            !FUNC_3(VAR_9, VAR_5)) {
            FUNC_0(VAR_3, "Switching server context.\n");
            FUNC_2(VAR_6, VAR_4);
        }
    }
    return VAR_1;
}
