
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u_int ;
struct rtmsg {scalar_t__ rtm_family; scalar_t__ rtm_table; } ;
struct rtattr {int rta_type; } ;
struct TYPE_6__ {void* s_addr; } ;
struct TYPE_5__ {void* s_addr; } ;
struct TYPE_4__ {void* s_addr; } ;
struct route_info {int priority; TYPE_3__ dstAddr; TYPE_2__ srcAddr; TYPE_1__ gateWay; int ifName; } ;
struct nlmsghdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct nlmsghdr*) ;
 scalar_t__ FUNC_1 (struct rtattr*) ;


 struct rtattr* FUNC_2 (struct rtattr*,int) ;

 scalar_t__ FUNC_3 (struct rtattr*,int) ;


 int FUNC_4 (struct nlmsghdr*) ;
 scalar_t__ FUNC_5 (struct rtmsg*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct nlmsghdr *VAR_2, struct route_info *VAR_3)
{
    struct rtmsg *VAR_4;
    struct rtattr *VAR_5;
    int VAR_6 = 0;

    VAR_4 = (struct rtmsg *) FUNC_0(VAR_2);


    if (VAR_4->rtm_family != VAR_0)
        return 1;


    if (VAR_4->rtm_table != VAR_1)
        return 1;


    VAR_5 = (struct rtattr *)FUNC_5(VAR_4);
    VAR_6 = FUNC_4(VAR_2);

    for (; FUNC_3(VAR_5, VAR_6); VAR_5 = FUNC_2(VAR_5, VAR_6)) {
        switch (VAR_5->rta_type) {
        case 130:
            FUNC_6(*(int *) FUNC_1(VAR_5), VAR_3->ifName);

            break;
        case 131:
            VAR_3->gateWay.s_addr = *(u_int *)FUNC_1(VAR_5);

            break;
        case 129:
            VAR_3->srcAddr.s_addr = *(u_int *)FUNC_1(VAR_5);

            break;
        case 132:
            VAR_3->dstAddr .s_addr = *(u_int *)FUNC_1(VAR_5);

            break;
        case 128:
            VAR_3->priority = *(int*)FUNC_1(VAR_5);

            break;
        default:

            ;
        }
    }


    return 0;
}
