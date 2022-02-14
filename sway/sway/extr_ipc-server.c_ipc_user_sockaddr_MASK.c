
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct sockaddr_un* FUNC_3 (int) ;
 int FUNC_4 (int ,int,char*,char const*,int,int) ;
 int FUNC_5 (char*) ;

struct sockaddr_un *FUNC_6(void) {
 struct sockaddr_un *VAR_1 = FUNC_3(sizeof(struct sockaddr_un));
 if (VAR_1 == ((void*)0)) {
  FUNC_5("Can't allocate ipc_sockaddr");
 }

 VAR_1->sun_family = VAR_0;
 int VAR_2 = sizeof(VAR_1->sun_path);


 const char *VAR_3 = FUNC_0("XDG_RUNTIME_DIR");
 if (!VAR_3) {
  VAR_3 = "/tmp";
 }
 if (VAR_2 <= FUNC_4(VAR_1->sun_path, VAR_2,
   "%s/sway-ipc.%i.%i.sock", VAR_3, FUNC_2(), FUNC_1())) {
  FUNC_5("Socket path won't fit into ipc_sockaddr->sun_path");
 }

 return VAR_1;
}
