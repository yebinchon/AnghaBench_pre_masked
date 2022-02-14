
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_3__ {scalar_t__ sdb_addrinfo; } ;
typedef TYPE_1__ RBinFile ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__,char*,int ) ;
 char* FUNC_2 (int ,char*,int) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(RBinFile *VAR_0, ut64 VAR_1, char *VAR_2, int VAR_3, int *VAR_4) {
 if (VAR_0->sdb_addrinfo) {
  char VAR_5[64];
  char *VAR_6 = FUNC_2 (VAR_1, VAR_5, 16);
  char *VAR_7 = FUNC_1 (VAR_0->sdb_addrinfo, VAR_6, 0);
  if (VAR_7) {
   char *VAR_8 = FUNC_3 (VAR_7, '|');
   if (VAR_8) {
    *VAR_8 = '\0';
    FUNC_4 (VAR_2, VAR_7, VAR_3);
    *VAR_4 = FUNC_0 (VAR_8 + 1);
    return 1;
   }
  }
 }
 return 0;
}
