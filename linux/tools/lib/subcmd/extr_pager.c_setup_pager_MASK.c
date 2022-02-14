
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct winsize {int ws_col; } ;
struct TYPE_5__ {char const** argv; int in; int preexec_cb; } ;
struct TYPE_4__ {char* pager_env; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 char* VAR_2 ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,int ,struct winsize*) ;
 scalar_t__ FUNC_6 (int) ;
 char const** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (char const*,char*) ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_10(void)
{
 const char *VAR_11 = FUNC_4(VAR_8.pager_env);
 struct winsize VAR_12;

 if (VAR_2)
  VAR_11 = VAR_2;
 if (!FUNC_6(1) && !VAR_2)
  return;
 if (FUNC_5(1, VAR_0, &VAR_12) == 0)
  VAR_4 = VAR_12.ws_col;
 if (!VAR_11)
  VAR_11 = FUNC_4("PAGER");
 if (!(VAR_11 || FUNC_0("/usr/bin/pager", VAR_1)))
  VAR_11 = "/usr/bin/pager";
 if (!(VAR_11 || FUNC_0("/usr/bin/less", VAR_1)))
  VAR_11 = "/usr/bin/less";
 if (!VAR_11)
  VAR_11 = "cat";
 if (!*VAR_11 || !FUNC_9(VAR_11, "cat"))
  return;

 VAR_7 = 1;


 VAR_3[2] = VAR_11;
 VAR_6.argv = VAR_3;
 VAR_6.in = -1;
 VAR_6.preexec_cb = VAR_5;

 if (FUNC_8(&VAR_6))
  return;


 FUNC_3(VAR_6.in, 1);
 if (FUNC_6(2))
  FUNC_3(VAR_6.in, 2);
 FUNC_2(VAR_6.in);


 FUNC_7(VAR_10);
 FUNC_1(VAR_9);
}
