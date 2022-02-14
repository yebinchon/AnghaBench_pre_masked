
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sa ;
typedef int new_name ;
struct TYPE_5__ {int handle; } ;
typedef TYPE_1__ ipc_pipe_server_t ;
struct TYPE_6__ {int nLength; int bInheritHandle; void* lpSecurityDescriptor; } ;
typedef TYPE_2__ SECURITY_ATTRIBUTES ;
typedef int DWORD ;


 int FUNC_0 (char*,int const,int const,int,int ,int ,int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 () ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char*,int,char const*) ;
 int FUNC_4 (char*,int,char*) ;

__attribute__((used)) static inline bool FUNC_5(ipc_pipe_server_t *VAR_7,
       const char *VAR_8)
{
 SECURITY_ATTRIBUTES VAR_9;
 char VAR_10[512];
 void *VAR_11;
 const DWORD VAR_12 = VAR_3 | VAR_0;
 const DWORD VAR_13 = VAR_5 | VAR_4 |
       VAR_6;

 FUNC_4(VAR_10, sizeof(VAR_10), "\\\\.\\pipe\\");
 FUNC_3(VAR_10, sizeof(VAR_10), VAR_8);

 VAR_11 = FUNC_1();
 if (!VAR_11) {
  return 0;
 }

 VAR_9.nLength = sizeof(VAR_9);
 VAR_9.lpSecurityDescriptor = VAR_11;
 VAR_9.bInheritHandle = 0;

 VAR_7->handle = FUNC_0(VAR_10, VAR_12, VAR_13, 1,
     VAR_2, VAR_2, 0,
     &VAR_9);
 FUNC_2(VAR_11);

 return VAR_7->handle != VAR_1;
}
