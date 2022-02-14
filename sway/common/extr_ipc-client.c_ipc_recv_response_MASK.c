
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipc_response {int size; int type; char* payload; } ;
typedef scalar_t__ ssize_t ;
typedef int ipc_magic ;
typedef int data32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipc_response*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int*,int *,int) ;
 scalar_t__ FUNC_3 (int,char*,size_t,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*) ;

struct ipc_response *FUNC_6(int VAR_2) {
 char VAR_3[VAR_0];
 uint32_t *VAR_4 = (uint32_t *)(VAR_3 + sizeof(ipc_magic));

 size_t VAR_5 = 0;
 while (VAR_5 < VAR_0) {
  ssize_t VAR_6 = FUNC_3(VAR_2, VAR_3 + VAR_5, VAR_0 - VAR_5, 0);
  if (VAR_6 <= 0) {
   FUNC_4("Unable to receive IPC response");
  }
  VAR_5 += VAR_6;
 }

 struct ipc_response *VAR_7 = FUNC_1(sizeof(struct ipc_response));
 if (!VAR_7) {
  goto error_1;
 }

 VAR_5 = 0;
 FUNC_2(&VAR_7->size, &VAR_4[0], sizeof(VAR_4[0]));
 FUNC_2(&VAR_7->type, &VAR_4[1], sizeof(VAR_4[1]));

 char *VAR_8 = FUNC_1(VAR_7->size + 1);
 if (!VAR_8) {
  goto error_2;
 }

 while (VAR_5 < VAR_7->size) {
  ssize_t VAR_9 = FUNC_3(VAR_2, VAR_8 + VAR_5, VAR_7->size - VAR_5, 0);
  if (VAR_9 < 0) {
   FUNC_4("Unable to receive IPC response");
  }
  VAR_5 += VAR_9;
 }
 VAR_8[VAR_7->size] = '\0';
 VAR_7->payload = VAR_8;

 return VAR_7;
error_2:
 FUNC_0(VAR_7);
error_1:
 FUNC_5(VAR_1, "Unable to allocate memory for IPC response");
 return ((void*)0);
}
