
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct listening_socket_s {scalar_t__ refcount; int const type; int key; int sock; } ;
struct fpm_worker_pool_s {int listen_address_domain; int listening_socket; int scoreboard; struct fpm_worker_pool_s* next; } ;
struct TYPE_4__ {unsigned int used; struct listening_socket_s* data; } ;




 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int,int,int,int,int,int,int ,int ,int ) ;
 int FUNC_6 (struct fpm_worker_pool_s*) ;
 int FUNC_7 (struct fpm_worker_pool_s*) ;
 scalar_t__ FUNC_8 (int,int *,unsigned int*) ;
 int VAR_5 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,int ,char*,int,int ) ;
 int FUNC_11 (struct fpm_worker_pool_s*) ;
 struct fpm_worker_pool_s* VAR_6 ;
 int FUNC_12 (int ) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (char*,char*,int) ;
 TYPE_1__ VAR_7 ;
 int FUNC_15 (char*,char*,unsigned int) ;
 char* FUNC_16 (char*,char) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,char*,int,char*) ;

int FUNC_20()
{
 unsigned VAR_8, VAR_9;
 struct fpm_worker_pool_s *VAR_10;
 char VAR_11[32];
 char VAR_12[256];
 char *VAR_13;
 struct listening_socket_s *VAR_14;

 if (0 == FUNC_2(&VAR_7, sizeof(struct listening_socket_s), 10)) {
  return -1;
 }


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (!VAR_8) {
   FUNC_17(VAR_11, "FPM_SOCKETS");
  } else {
   FUNC_15(VAR_11, "FPM_SOCKETS_%d", VAR_8);
  }
  VAR_13 = FUNC_13(VAR_11);
  if (!VAR_13) {
   break;
  }

  while (VAR_13 && *VAR_13) {
   char *VAR_15 = FUNC_16(VAR_13, ',');
   int VAR_16, VAR_17;
   char *VAR_18;

   if (VAR_15) {
    *VAR_15 = '\0';
   }

   VAR_18 = FUNC_16(VAR_13, '=');
   if (VAR_18) {
    int VAR_19 = VAR_18 - VAR_13;
    if (VAR_19 > 255) {

     VAR_19 = 255;
    }
    FUNC_14(VAR_12, VAR_13, VAR_19);
    VAR_12[VAR_19] = '\0';
    VAR_17 = FUNC_0(VAR_18 + 1);
    VAR_16 = FUNC_9(VAR_12);
    FUNC_19(VAR_4, "using inherited socket fd=%d, \"%s\"", VAR_17, VAR_12);
    FUNC_10(VAR_17, 0, VAR_12, VAR_16, VAR_3);
   }

   if (VAR_15) {
    VAR_13 = VAR_15 + 1;
   } else {
    VAR_13 = 0;
   }
  }
 }


 for (VAR_10 = VAR_6; VAR_10; VAR_10 = VAR_10->next) {
  switch (VAR_10->listen_address_domain) {
   case 129 :
    VAR_10->listening_socket = FUNC_6(VAR_10);
    break;

   case 128 :
    if (0 > FUNC_11(VAR_10)) {
     return -1;
    }
    VAR_10->listening_socket = FUNC_7(VAR_10);
    break;
  }

  if (VAR_10->listening_socket == -1) {
   return -1;
  }

 if (VAR_10->listen_address_domain == 129 && FUNC_8(VAR_10->listening_socket, ((void*)0), &VAR_9) >= 0) {
   FUNC_5(-1, -1, -1, (int)VAR_9, -1, -1, 0, VAR_2, VAR_10->scoreboard);
  }
 }


 VAR_14 = VAR_7.data;

 for (VAR_8 = 0; VAR_8 < VAR_7.used; ) {
  if (VAR_14->refcount == 0) {
   FUNC_1(VAR_14->sock);
   if (VAR_14->type == 128) {
    FUNC_18(VAR_14->key);
   }
   FUNC_12(VAR_14->key);
   FUNC_3(&VAR_7, VAR_8);
  } else {
   ++VAR_8;
   ++VAR_14;
  }
 }

 if (0 > FUNC_4(VAR_0, VAR_5, 0)) {
  return -1;
 }
 return 0;
}
