
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int* msg; } ;
struct TYPE_5__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; } ;
struct TYPE_4__ {int member_1; TYPE_2__ member_0; } ;
struct diseqc_cmd {TYPE_3__ cmd; int member_1; TYPE_1__ member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,struct diseqc_cmd*,int ,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    struct diseqc_cmd VAR_10 = { {{0xe0, 0x10, 0x38, 0xf0, 0x00, 0x00}, 4}, 0 };




    VAR_10.cmd.msg[3] = 0xf0 | (((VAR_7 * 4) & 0x0f) | (VAR_9 ? 1 : 0) | (VAR_8 ? 0 : 2));

    return FUNC_0(VAR_6, VAR_8 ? VAR_4 : VAR_5,
                           &VAR_10, VAR_9 ? VAR_3 : VAR_2,
                           ((VAR_7 / 4) % 2) ? VAR_1 : VAR_0);
}
