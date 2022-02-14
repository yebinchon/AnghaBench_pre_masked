
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* rpc_socket_path; int seaf_dir; } ;
typedef int SearpcNamedPipeServer ;
typedef int DWORD ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,int*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,int ) ;
 int FUNC_6 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_7 (char*,...) ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10 ()
{
    FUNC_6 ();
    char *VAR_2 = FUNC_3 (VAR_1->seaf_dir, VAR_0, ((void*)0));


    SearpcNamedPipeServer *VAR_3 = FUNC_8 (VAR_2);
    if (!VAR_3) {
        FUNC_7 ("Failed to create named pipe server.\n");
        FUNC_4 (VAR_2);
        return -1;
    }

    VAR_1->rpc_socket_path = VAR_2;

    return FUNC_9 (VAR_3);
}
