
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
struct TYPE_6__ {int (* cb_printf ) (char*,int ) ;} ;
typedef int RIODesc ;
typedef TYPE_1__ RIO ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char const*,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static char *FUNC_7(RIO *VAR_1, RIODesc *VAR_2, const char *VAR_3) {
        FUNC_2 ("system command (%s)\n", VAR_3);
        if (!FUNC_3 (VAR_3, "help")) {
                FUNC_2 ("Usage: =!cmd args\n"
                        " =!:<bochscmd>      - Send a bochs command.\n"
                        " =!dobreak          - pause bochs.\n");
  FUNC_2 ("io_system: Enviando commando bochs\n");
  FUNC_1 (VAR_0, &VAR_3[1], 1);
  VAR_1->cb_printf ("%s\n", VAR_0->data);
 } else if (!FUNC_4 (VAR_3, "dobreak", 7)) {
  FUNC_0 (VAR_0);
  VAR_1->cb_printf ("%s\n", VAR_0->data);
 }
        return ((void*)0);
}
