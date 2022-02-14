
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sock_extended_err {scalar_t__ ee_origin; scalar_t__ ee_errno; scalar_t__ ee_data; scalar_t__ ee_info; int ee_code; } ;
struct msghdr {char* msg_control; int msg_controllen; int msg_flags; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;
typedef int control ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int,scalar_t__,char*,...) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (int,struct msghdr*,int ) ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static bool FUNC_6(int VAR_18, int VAR_19)
{
 struct sock_extended_err *VAR_20;
 struct msghdr VAR_21 = {};
 struct cmsghdr *VAR_22;
 uint32_t VAR_23, VAR_24, VAR_25;
 int VAR_26, VAR_27;
 char VAR_28[100];

 if (VAR_19 == VAR_6)
  return FUNC_2(VAR_18);

 VAR_21.msg_control = VAR_28;
 VAR_21.msg_controllen = sizeof(VAR_28);

 VAR_26 = FUNC_5(VAR_18, &VAR_21, VAR_4);
 if (VAR_26 == -1 && VAR_14 == VAR_0)
  return 0;
 if (VAR_26 == -1)
  FUNC_3(1, VAR_14, "recvmsg notification");
 if (VAR_21.msg_flags & VAR_3)
  FUNC_3(1, VAR_14, "recvmsg notification: truncated");

 VAR_22 = FUNC_1(&VAR_21);
 if (!VAR_22)
  FUNC_3(1, 0, "cmsg: no cmsg");
 if (!((VAR_22->cmsg_level == VAR_7 && VAR_22->cmsg_type == VAR_2) ||
       (VAR_22->cmsg_level == VAR_8 && VAR_22->cmsg_type == VAR_1) ||
       (VAR_22->cmsg_level == VAR_9 && VAR_22->cmsg_type == VAR_5)))
  FUNC_3(1, 0, "serr: wrong type: %d.%d",
        VAR_22->cmsg_level, VAR_22->cmsg_type);

 VAR_20 = (void *) FUNC_0(VAR_22);

 if (VAR_20->ee_origin != VAR_11)
  FUNC_3(1, 0, "serr: wrong origin: %u", VAR_20->ee_origin);
 if (VAR_20->ee_errno != 0)
  FUNC_3(1, 0, "serr: wrong error code: %u", VAR_20->ee_errno);

 VAR_23 = VAR_20->ee_data;
 VAR_24 = VAR_20->ee_info;
 VAR_25 = VAR_23 - VAR_24 + 1;




 if (VAR_24 != VAR_15)
  FUNC_4(VAR_16, "gap: %ld..%ld does not append to %ld\n",
   VAR_24, VAR_23, VAR_15);
 VAR_15 = VAR_23 + 1;

 VAR_27 = !(VAR_20->ee_code & VAR_10);
 if (VAR_17 == -1)
  VAR_17 = VAR_27;
 else if (VAR_17 != VAR_27) {
  FUNC_4(VAR_16, "serr: inconsistent\n");
  VAR_17 = VAR_27;
 }

 if (VAR_12 >= 2)
  FUNC_4(VAR_16, "completed: %ld (h=%ld l=%ld)\n",
   VAR_25, VAR_23, VAR_24);

 VAR_13 += VAR_25;
 return 1;
}
