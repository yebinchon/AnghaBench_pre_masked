
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {scalar_t__* sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (struct sockaddr_un*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (scalar_t__*,char const*,int) ;

__attribute__((used)) static void *FUNC_6(const char *VAR_2) {
 int VAR_3;
 struct sockaddr_un VAR_4;

 VAR_3 = FUNC_4 (VAR_0, VAR_1, 0);
 if (VAR_3 == -1) {
  FUNC_3 ("socket");
  return 0;
 }

 FUNC_2 (&VAR_4, 0, sizeof (struct sockaddr_un));

 VAR_4.sun_family = VAR_0;
 FUNC_5 (VAR_4.sun_path, VAR_2, sizeof(VAR_4.sun_path));
 VAR_4.sun_path[sizeof (VAR_4.sun_path) - 1] = 0;
 if (FUNC_1 (VAR_3, (struct sockaddr *) &VAR_4, sizeof(struct sockaddr_un)) == -1) {
  FUNC_3 ("connect");
  FUNC_0 (VAR_3);
  return 0;
 }




 return (void *) (size_t) VAR_3;
}
