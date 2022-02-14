
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_6__ {int graph; int config; } ;
typedef TYPE_1__ RCore ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int,char*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_6(RCore *VAR_5, ut64 VAR_6, int VAR_7) {
        int VAR_8 = VAR_0 | VAR_1;
        int VAR_9 = FUNC_2 (VAR_5->config, "scr.utf8");
        FUNC_1(VAR_5->graph);
        switch (VAR_7) {
        case 135:
                FUNC_5 (VAR_5, VAR_6, VAR_8);
                break;
        case 129:
                FUNC_5 (VAR_5, VAR_6, VAR_8 | VAR_4);
                break;
        case 128:
                FUNC_0 (VAR_5, VAR_6);
                FUNC_4 (VAR_5, VAR_9, "t");
                break;
        case 133:
                FUNC_0 (VAR_5, VAR_6);
                FUNC_4 (VAR_5, VAR_9, "v");
                FUNC_3 ();
                break;
        case 130:
                FUNC_0 (VAR_5, VAR_6);
                FUNC_4 (VAR_5, VAR_9, "k");
                break;
        case 134:
                FUNC_0 (VAR_5, VAR_6);
                FUNC_4 (VAR_5, VAR_9, "g");
                break;
        case 131:
                FUNC_5 (VAR_5, VAR_6, VAR_8 | VAR_2);
                break;
        case 132:
                FUNC_5 (VAR_5, VAR_6, VAR_8 | VAR_2 | VAR_3);
                break;
        case 136:
        default:
                FUNC_0 (VAR_5, VAR_6);
                FUNC_4 (VAR_5, VAR_9, "");
                FUNC_3 ();
        break;
        }
}
