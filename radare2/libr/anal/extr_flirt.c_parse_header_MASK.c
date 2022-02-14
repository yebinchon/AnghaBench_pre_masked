
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char version; unsigned char arch; unsigned char* ctype; int ctypes_crc16; int library_name_len; int crc16; int old_n_functions; int features; int app_types; int os_types; int file_types; int magic; } ;
typedef TYPE_1__ idasig_v5_t ;
typedef int RBuffer ;


 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(RBuffer *VAR_0, idasig_v5_t *VAR_1) {
 if (FUNC_1 (VAR_0, 0, VAR_1->magic, sizeof(VAR_1->magic)) != sizeof(VAR_1->magic)) {
  return 0;
 }
 if (FUNC_0 (VAR_0, &VAR_1->version, sizeof(VAR_1->version)) != sizeof(VAR_1->version)) {
  return 0;
 }
 if (FUNC_0 (VAR_0, &VAR_1->arch, sizeof(VAR_1->arch)) != sizeof(VAR_1->arch)) {
  return 0;
 }
 if (FUNC_0 (VAR_0, (unsigned char *)&VAR_1->file_types, sizeof(VAR_1->file_types)) != sizeof(VAR_1->file_types)) {
  return 0;
 }
 if (FUNC_0 (VAR_0, (unsigned char *)&VAR_1->os_types, sizeof(VAR_1->os_types)) != sizeof(VAR_1->os_types)) {
  return 0;
 }
 if (FUNC_0 (VAR_0, (unsigned char *)&VAR_1->app_types, sizeof(VAR_1->app_types)) != sizeof(VAR_1->app_types)) {
  return 0;
 }
 if (FUNC_0 (VAR_0, (unsigned char *)&VAR_1->features, sizeof(VAR_1->features)) != sizeof(VAR_1->features)) {
  return 0;
 }
 if (FUNC_0 (VAR_0, (unsigned char *)&VAR_1->old_n_functions, sizeof(VAR_1->old_n_functions)) != sizeof(VAR_1->old_n_functions)) {
  return 0;
 }
 if (FUNC_0 (VAR_0, (unsigned char *)&VAR_1->crc16, sizeof(VAR_1->crc16)) != sizeof(VAR_1->crc16)) {
  return 0;
 }
 if (FUNC_0 (VAR_0, VAR_1->ctype, sizeof(VAR_1->ctype)) != sizeof(VAR_1->ctype)) {
  return 0;
 }
 if (FUNC_0 (VAR_0, (unsigned char *)&VAR_1->library_name_len, sizeof(VAR_1->library_name_len)) != sizeof(VAR_1->library_name_len)) {
  return 0;
 }
 if (FUNC_0 (VAR_0, (unsigned char *)&VAR_1->ctypes_crc16, sizeof(VAR_1->ctypes_crc16)) != sizeof(VAR_1->ctypes_crc16)) {
  return 0;
 }

 return 1;
}
