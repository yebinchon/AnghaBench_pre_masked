
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int nlmsg_seq; int nlmsg_pid; scalar_t__ nlmsg_type; int nlmsg_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct nlmsghdr*,int) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,size_t,int ) ;

__attribute__((used)) static int
FUNC_3(int VAR_3, char *VAR_4, size_t VAR_5, int VAR_6, int VAR_7)
{
    struct nlmsghdr *VAR_8;
    int VAR_9 = 0, VAR_10 = 0;

 do {

        if ((VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5 - VAR_10, 0)) < 0) {
            FUNC_1("SOCK READ: ");
            return -1;
        }

        VAR_8 = (struct nlmsghdr *) VAR_4;


        if ((FUNC_0(VAR_8, VAR_9) == 0)
            || (VAR_8->nlmsg_type == VAR_1)) {
            FUNC_1("Error in received packet");
            return -1;
        }


        if (VAR_8->nlmsg_type == VAR_0) {
            break;
        } else {

            VAR_4 += VAR_9;
            VAR_10 += VAR_9;
        }


        if ((VAR_8->nlmsg_flags & VAR_2) == 0) {

            break;
        }
    } while ((VAR_8->nlmsg_seq != VAR_6) || (VAR_8->nlmsg_pid != VAR_7));

    return VAR_10;
}
