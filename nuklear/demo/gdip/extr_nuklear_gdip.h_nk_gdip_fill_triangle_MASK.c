
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nk_color {int dummy; } ;
struct TYPE_5__ {int brush; int memory; } ;
struct TYPE_4__ {short member_0; short member_1; } ;
typedef TYPE_1__ POINT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nk_color) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(short VAR_2, short VAR_3, short VAR_4,
    short VAR_5, short VAR_6, short VAR_7, struct nk_color VAR_8)
{
    POINT VAR_9[] = {
        { VAR_2, VAR_3 },
        { VAR_4, VAR_5 },
        { VAR_6, VAR_7 },
    };

    FUNC_1(VAR_1.brush, FUNC_2(VAR_8));
    FUNC_0(VAR_1.memory, VAR_1.brush, VAR_9, 3, VAR_0);
}
