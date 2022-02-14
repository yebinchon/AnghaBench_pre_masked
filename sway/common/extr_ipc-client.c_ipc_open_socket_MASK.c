
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {scalar_t__* sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (scalar_t__*,char const*,int) ;
 int FUNC_3 (char*,...) ;

int FUNC_4(const char *VAR_2) {
 struct sockaddr_un VAR_3;
 int VAR_4;
 if ((VAR_4 = FUNC_1(VAR_0, VAR_1, 0)) == -1) {
  FUNC_3("Unable to open Unix socket");
 }
 VAR_3.sun_family = VAR_0;
 FUNC_2(VAR_3.sun_path, VAR_2, sizeof(VAR_3.sun_path) - 1);
 VAR_3.sun_path[sizeof(VAR_3.sun_path) - 1] = 0;
 int VAR_5 = sizeof(struct sockaddr_un);
 if (FUNC_0(VAR_4, (struct sockaddr *)&VAR_3, VAR_5) == -1) {
  FUNC_3("Unable to connect to %s", VAR_2);
 }
 return VAR_4;
}
