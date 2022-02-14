
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct socket {int dummy; } ;
struct rfcomm_session {int initiator; struct socket* sock; } ;
struct msghdr {int dummy; } ;
struct kvec {unsigned char* iov_base; int iov_len; } ;
typedef int msg ;


 int FUNC_0 (char*,struct rfcomm_session*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_1 (int ,int ) ;
 unsigned char FUNC_2 (int ,int ) ;
 unsigned char FUNC_3 (unsigned char*) ;
 int FUNC_4 (struct socket*,struct msghdr*,struct kvec*,int,int) ;
 int FUNC_5 (struct msghdr*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct rfcomm_session *VAR_3, int VAR_4, u8 *VAR_5, int VAR_6)
{
 struct socket *VAR_7 = VAR_3->sock;
 struct kvec VAR_8[3];
 struct msghdr VAR_9;
 unsigned char VAR_10[5], VAR_11[1];

 if (VAR_6 > 125)
  return -VAR_0;

 FUNC_0("%p cr %d", VAR_3, VAR_4);

 VAR_10[0] = FUNC_1(VAR_3->initiator, 0);
 VAR_10[1] = FUNC_2(VAR_2, 0);
 VAR_10[2] = 0x01 | ((VAR_6 + 2) << 1);
 VAR_10[3] = 0x01 | ((VAR_4 & 0x01) << 1) | (VAR_1 << 2);
 VAR_10[4] = 0x01 | (VAR_6 << 1);

 VAR_11[0] = FUNC_3(VAR_10);

 VAR_8[0].iov_base = VAR_10;
 VAR_8[0].iov_len = 5;
 VAR_8[1].iov_base = VAR_5;
 VAR_8[1].iov_len = VAR_6;
 VAR_8[2].iov_base = VAR_11;
 VAR_8[2].iov_len = 1;

 FUNC_5(&VAR_9, 0, sizeof(VAR_9));

 return FUNC_4(VAR_7, &VAR_9, VAR_8, 3, 6 + VAR_6);
}
