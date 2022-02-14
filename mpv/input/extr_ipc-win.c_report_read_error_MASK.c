
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client_arg {int dummy; } ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct client_arg*,char*,int ) ;
 int FUNC_2 (struct client_arg*,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct client_arg *VAR_0, DWORD VAR_1)
{

    if (FUNC_4(VAR_1)) {
        FUNC_1(VAR_0, "Error reading from pipe: %s\n",
            FUNC_3(FUNC_0(VAR_1)));
    } else {
        FUNC_2(VAR_0, "Client disconnected\n");
    }
}
