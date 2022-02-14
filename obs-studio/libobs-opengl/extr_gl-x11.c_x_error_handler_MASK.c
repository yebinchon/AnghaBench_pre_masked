
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int str3 ;
typedef int str2 ;
typedef int str1 ;
struct TYPE_3__ {int serial; int minor_code; int request_code; int error_code; } ;
typedef TYPE_1__ XErrorEvent ;
typedef int Display ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (int ,char*,char*,char*,char*,int ) ;

__attribute__((used)) static int FUNC_2(Display *VAR_1, XErrorEvent *VAR_2)
{
 char VAR_3[512];
 char VAR_4[512];
 char VAR_5[512];
 FUNC_0(VAR_1, VAR_2->error_code, VAR_3, sizeof(VAR_3));
 FUNC_0(VAR_1, VAR_2->request_code, VAR_4, sizeof(VAR_4));
 FUNC_0(VAR_1, VAR_2->minor_code, VAR_5, sizeof(VAR_5));

 FUNC_1(VAR_0,
      "X Error: %s, Major opcode: %s, "
      "Minor opcode: %s, Serial: %lu",
      VAR_3, VAR_4, VAR_5, VAR_2->serial);
 return 0;
}
