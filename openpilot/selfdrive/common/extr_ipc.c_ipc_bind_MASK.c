
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int,char*,char const*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char const*) ;

int FUNC_6(const char* VAR_2) {
  int VAR_3;

  FUNC_5(VAR_2);

  int VAR_4 = FUNC_4(VAR_0, VAR_1, 0);
  struct sockaddr_un VAR_5 = {
    .sun_family = VAR_0,
  };
  FUNC_3(VAR_5.sun_path, sizeof(VAR_5.sun_path), "%s", VAR_2);
  VAR_3 = FUNC_1(VAR_4, (struct sockaddr *)&VAR_5, sizeof(VAR_5));
  FUNC_0(VAR_3 == 0);

  VAR_3 = FUNC_2(VAR_4, 3);
  FUNC_0(VAR_3 == 0);

  return VAR_4;
}
