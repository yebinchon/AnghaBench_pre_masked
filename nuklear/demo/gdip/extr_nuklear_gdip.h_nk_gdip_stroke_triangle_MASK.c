
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nk_color {int dummy; } ;
struct TYPE_5__ {int pen; int memory; } ;
struct TYPE_4__ {short member_0; short member_1; } ;
typedef int REAL ;
typedef TYPE_1__ POINT ;


 int FUNC_0 (int ,int ,TYPE_1__*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct nk_color) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_4(short VAR_1, short VAR_2, short VAR_3,
    short VAR_4, short VAR_5, short VAR_6, unsigned short VAR_7, struct nk_color VAR_8)
{
    POINT VAR_9[] = {
        { VAR_1, VAR_2 },
        { VAR_3, VAR_4 },
        { VAR_5, VAR_6 },
        { VAR_1, VAR_2 },
    };
    FUNC_2(VAR_0.pen, (REAL)VAR_7);
    FUNC_1(VAR_0.pen, FUNC_3(VAR_8));
    FUNC_0(VAR_0.memory, VAR_0.pen, VAR_9, 4);
}
