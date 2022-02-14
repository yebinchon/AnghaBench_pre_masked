
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_worker_pool_s {int dummy; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_family; struct addrinfo* ai_next; int ai_socktype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fpm_worker_pool_s*,int ,int ) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (int ,int ,char*,int) ;
 int FUNC_6 (struct addrinfo*,int ,int) ;
 int FUNC_7 (int ,char*,char const*,...) ;

__attribute__((used)) static int FUNC_8(struct fpm_worker_pool_s *VAR_6, const char *VAR_7, const char *VAR_8)
{
 struct addrinfo VAR_9, *VAR_10, *VAR_11;
 char VAR_12[VAR_1];
 int VAR_13;
 int VAR_14 = -1;

 FUNC_6(&VAR_9, 0, sizeof VAR_9);
 VAR_9.ai_family = VAR_0;
 VAR_9.ai_socktype = VAR_2;

 if ((VAR_13 = FUNC_4(VAR_7, VAR_8, &VAR_9, &VAR_10)) != 0) {
  FUNC_7(VAR_4, "getaddrinfo: %s\n", FUNC_3(VAR_13));
  return -1;
 }

 for (VAR_11 = VAR_10; VAR_11 != ((void*)0); VAR_11 = VAR_11->ai_next) {
  FUNC_5(VAR_11->ai_family, FUNC_0(VAR_11->ai_addr), VAR_12, VAR_1);
  if (VAR_14 < 0) {
   if ((VAR_14 = FUNC_1(VAR_6, VAR_11->ai_addr, VAR_11->ai_addrlen)) != -1) {
    FUNC_7(VAR_3, "Found address for %s, socket opened on %s", VAR_7, VAR_12);
   }
  } else {
   FUNC_7(VAR_5, "Found multiple addresses for %s, %s ignored", VAR_7, VAR_12);
  }
 }

 FUNC_2(VAR_10);

 return VAR_14;
}
