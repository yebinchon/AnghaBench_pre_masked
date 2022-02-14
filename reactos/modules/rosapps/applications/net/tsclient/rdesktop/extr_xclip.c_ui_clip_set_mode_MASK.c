
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* auto_mode; } ;
struct TYPE_5__ {void* rdpclip; TYPE_1__ xclip; } ;
typedef TYPE_2__ RDPCLIENT ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,char const*) ;

void
FUNC_2(RDPCLIENT * VAR_2, const char *VAR_3)
{
 VAR_2->rdpclip = VAR_1;

 if (FUNC_0(VAR_3, "PRIMARYCLIPBOARD"))
  VAR_2->xclip.auto_mode = VAR_1;
 else if (FUNC_0(VAR_3, "CLIPBOARD"))
  VAR_2->xclip.auto_mode = VAR_0;
 else
 {
  FUNC_1("Invalid clipboard mode '%s'.\n", VAR_3);
  VAR_2->rdpclip = VAR_0;
 }
}
