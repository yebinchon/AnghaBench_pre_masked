
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct listening_socket_s {unsigned int sock; char* key; scalar_t__ type; } ;
struct TYPE_3__ {unsigned int used; struct listening_socket_s* data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*,char*,int) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(int VAR_6, void *VAR_7)
{
 unsigned VAR_8;
 unsigned VAR_9 = 0;
 unsigned VAR_10[VAR_3];
 unsigned VAR_11 = 0;
 char VAR_12[32];
 char *VAR_13 = 0;
 int VAR_14 = 0;
 struct listening_socket_s *VAR_15 = VAR_5.data;

 for (VAR_8 = 0; VAR_8 < VAR_5.used; VAR_8++, VAR_15++) {
  if (VAR_6 != VAR_1) {
   FUNC_0(VAR_15->sock);
  } else {
   char VAR_16[32];
   FUNC_5(VAR_16, "%d", VAR_15->sock);

   VAR_11 = (VAR_8 % VAR_4 == 0 && VAR_8) ? 1 : 0;
   VAR_13 = FUNC_3(VAR_13, VAR_14 + (VAR_14 ? 1 : 0) + FUNC_7(VAR_15->key) + 1 + FUNC_7(VAR_16) + VAR_11 + 1);

   if (VAR_8 % VAR_4 == 0) {
    VAR_10[VAR_9] = VAR_14 + VAR_11;
    VAR_9++;
    if (VAR_8) {
     *(VAR_13 + VAR_14 + 1) = 0;
    }
   }

   VAR_14 += FUNC_5(VAR_13 + VAR_14 + VAR_11, "%s%s=%s", (VAR_14 && !VAR_11) ? "," : "", VAR_15->key, VAR_16);
   VAR_14 += VAR_11;
  }

  if (VAR_6 == VAR_2) {
   if (VAR_15->type == VAR_0) {
    FUNC_8(VAR_15->key);
   }
  }
  FUNC_2(VAR_15->key);
 }

 if (VAR_13) {
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   if (!VAR_8) {
    FUNC_6(VAR_12, "FPM_SOCKETS");
   } else {
    FUNC_5(VAR_12, "FPM_SOCKETS_%d", VAR_8);
   }
   FUNC_4(VAR_12, VAR_13 + VAR_10[VAR_8], 1);
  }
  FUNC_2(VAR_13);
 }

 FUNC_1(&VAR_5);
}
