
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rfcomm_session {int sock; } ;
struct msghdr {int dummy; } ;
struct kvec {int member_1; int * member_0; } ;
typedef int msg ;


 int FUNC_0 (char*,struct rfcomm_session*,int) ;
 int FUNC_1 (int ,struct msghdr*,struct kvec*,int,int) ;
 int FUNC_2 (struct msghdr*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct rfcomm_session *VAR_0, u8 *VAR_1, int VAR_2)
{
 struct kvec VAR_3 = { *VAR_1, &VAR_2 };
 struct msghdr VAR_4;

 FUNC_0("session %p len %d", VAR_0, VAR_2);

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));

 return FUNC_1(VAR_0->sock, &VAR_4, &VAR_3, 1, VAR_2);
}
