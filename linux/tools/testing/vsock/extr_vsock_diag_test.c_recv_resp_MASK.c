
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_nl {int nl_family; } ;
struct msghdr {int msg_namelen; int msg_iovlen; struct iovec* msg_iov; struct sockaddr_nl* msg_name; } ;
struct iovec {void* iov_base; size_t iov_len; } ;
typedef scalar_t__ ssize_t ;
typedef int nladdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,struct msghdr*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(int VAR_4, void *VAR_5, size_t VAR_6)
{
 struct sockaddr_nl VAR_7 = {
  .nl_family = VAR_0,
 };
 struct iovec VAR_8 = {
  .iov_base = VAR_5,
  .iov_len = VAR_6,
 };
 struct msghdr VAR_9 = {
  .msg_name = &VAR_7,
  .msg_namelen = sizeof(VAR_7),
  .msg_iov = &VAR_8,
  .msg_iovlen = 1,
 };
 ssize_t VAR_10;

 do {
  VAR_10 = FUNC_2(VAR_4, &VAR_9, 0);
 } while (VAR_10 < 0 && VAR_3 == VAR_1);

 if (VAR_10 < 0) {
  FUNC_1("recvmsg");
  FUNC_0(VAR_2);
 }

 return VAR_10;
}
