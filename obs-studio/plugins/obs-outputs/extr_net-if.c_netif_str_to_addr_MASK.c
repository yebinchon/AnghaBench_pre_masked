
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int sin_addr; } ;
typedef int LPSTR ;
typedef int LPSOCKADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *,int ,int*) ;
 scalar_t__ FUNC_2 (int ,char const*,int *) ;
 int FUNC_3 (struct sockaddr_storage*,int ,int) ;
 int * FUNC_4 (char const*,char) ;
 int FUNC_5 (char*,int ) ;

bool FUNC_6(struct sockaddr_storage *VAR_3, int *VAR_4,
         const char *VAR_5)
{
 bool VAR_6;

 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 *VAR_4 = 0;

 if (!VAR_5)
  return 0;

 VAR_6 = (FUNC_4(VAR_5, ':') != ((void*)0));
 VAR_3->ss_family = VAR_6 ? VAR_1 : VAR_0;
 *VAR_4 = sizeof(*VAR_3);
 struct sockaddr_in *VAR_7 = (struct sockaddr_in *)VAR_3;
 if (FUNC_2(VAR_3->ss_family, VAR_5, &VAR_7->sin_addr)) {
  *VAR_4 = VAR_6 ? sizeof(struct sockaddr_in6)
     : sizeof(struct sockaddr_in);
  return 1;
 }

 return 0;

}
