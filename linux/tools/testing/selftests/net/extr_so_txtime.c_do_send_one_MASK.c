
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int tdeliver ;
struct timed_send {int delay_us; int data; } ;
struct msghdr {int msg_iovlen; char** msg_control; int msg_controllen; struct iovec* msg_iov; int member_0; } ;
struct iovec {int iov_len; int * iov_base; int member_0; } ;
struct cmsghdr {int cmsg_len; int cmsg_type; int cmsg_level; } ;
typedef int control ;


 int FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,int ,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,scalar_t__*,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int,struct msghdr*,int ) ;

__attribute__((used)) static void FUNC_8(int VAR_4, struct timed_send *VAR_5)
{
 char VAR_6[FUNC_3(sizeof(uint64_t))];
 struct msghdr VAR_7 = {0};
 struct iovec VAR_8 = {0};
 struct cmsghdr *VAR_9;
 uint64_t VAR_10;
 int VAR_11;

 VAR_8.iov_base = &VAR_5->data;
 VAR_8.iov_len = 1;

 VAR_7.msg_iov = &VAR_8;
 VAR_7.msg_iovlen = 1;

 if (VAR_5->delay_us >= 0) {
  FUNC_6(VAR_6, 0, sizeof(VAR_6));
  VAR_7.msg_control = &VAR_6;
  VAR_7.msg_controllen = sizeof(VAR_6);

  VAR_10 = VAR_3 + VAR_5->delay_us * 1000;

  VAR_9 = FUNC_1(&VAR_7);
  VAR_9->cmsg_level = VAR_1;
  VAR_9->cmsg_type = VAR_0;
  VAR_9->cmsg_len = FUNC_2(sizeof(VAR_10));
  FUNC_5(FUNC_0(VAR_9), &VAR_10, sizeof(VAR_10));
 }

 VAR_11 = FUNC_7(VAR_4, &VAR_7, 0);
 if (VAR_11 == -1)
  FUNC_4(1, VAR_2, "write");
 if (VAR_11 == 0)
  FUNC_4(1, 0, "write: 0B");

}
