
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct msghdr {int msg_iovlen; int msg_controllen; struct cmsghdr* msg_control; TYPE_1__* msg_iov; } ;
struct cmsghdr {int dummy; } ;
typedef int cookie ;
struct TYPE_2__ {scalar_t__ iov_len; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct msghdr*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int,scalar_t__,char*) ;
 int VAR_7 ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (struct cmsghdr**,int ,int) ;
 int VAR_8 ;
 int FUNC_5 (int,struct msghdr*,int) ;
 int VAR_9 ;

__attribute__((used)) static bool FUNC_6(int VAR_10, struct msghdr *VAR_11, bool VAR_12, int VAR_13)
{
 int VAR_14, VAR_15, VAR_16, VAR_17;
 static uint32_t VAR_18;
 char VAR_19[FUNC_0(sizeof(VAR_18))];

 VAR_15 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_11->msg_iovlen; VAR_16++)
  VAR_15 += VAR_11->msg_iov[VAR_16].iov_len;

 VAR_17 = VAR_1;
 if (VAR_12) {
  VAR_17 |= VAR_2;
  if (VAR_13 == VAR_3) {
   FUNC_4(&VAR_11->msg_control, 0, sizeof(VAR_11->msg_control));
   VAR_11->msg_controllen = FUNC_0(sizeof(VAR_18));
   VAR_11->msg_control = (struct cmsghdr *)VAR_19;
   FUNC_1(VAR_11, ++VAR_18);
  }
 }

 VAR_14 = FUNC_5(VAR_10, VAR_11, VAR_17);
 if (VAR_14 == -1 && VAR_6 == VAR_0)
  return 0;
 if (VAR_14 == -1)
  FUNC_2(1, VAR_6, "send");
 if (VAR_5 && VAR_14 != VAR_15)
  FUNC_3(VAR_9, "send: ret=%u != %u\n", VAR_14, VAR_15);

 if (VAR_15) {
  VAR_8++;
  VAR_4 += VAR_14;
  if (VAR_12 && VAR_14)
   VAR_7++;
 }
 if (VAR_12 && VAR_13 == VAR_3) {
  VAR_11->msg_control = ((void*)0);
  VAR_11->msg_controllen = 0;
 }

 return 1;
}
