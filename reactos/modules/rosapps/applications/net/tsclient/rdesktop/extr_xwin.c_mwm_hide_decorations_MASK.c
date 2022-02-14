
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int Window ;
struct TYPE_5__ {scalar_t__ decorations; int flags; } ;
struct TYPE_4__ {int display; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef TYPE_2__ PropMotifWmHints ;
typedef int Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int,int ,unsigned char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(RDPCLIENT * VAR_4, Window VAR_5)
{
 PropMotifWmHints VAR_6;
 Atom VAR_7;


 VAR_6.flags = VAR_1;
 VAR_6.decorations = 0;


 VAR_7 = FUNC_1(VAR_4->display, "_MOTIF_WM_HINTS", VAR_0);
 if (!VAR_7)
 {
  FUNC_2("Failed to get atom _MOTIF_WM_HINTS: probably your window manager does not support MWM hints\n");
  return;
 }

 FUNC_0(VAR_4->display, VAR_5, VAR_7, VAR_7, 32, VAR_3,
   (unsigned char *) &VAR_6, VAR_2);

}
