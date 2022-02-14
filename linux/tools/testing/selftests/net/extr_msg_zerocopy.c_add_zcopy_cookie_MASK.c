
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msghdr {scalar_t__ msg_control; } ;
struct cmsghdr {int cmsg_type; int cmsg_level; int cmsg_len; } ;
typedef int cookie ;


 int FUNC_0 (struct cmsghdr*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static void FUNC_4(struct msghdr *VAR_3, uint32_t VAR_4)
{
 struct cmsghdr *VAR_5;

 if (!VAR_3->msg_control)
  FUNC_2(1, VAR_2, "NULL cookie");
 VAR_5 = (void *)VAR_3->msg_control;
 VAR_5->cmsg_len = FUNC_1(sizeof(VAR_4));
 VAR_5->cmsg_level = VAR_1;
 VAR_5->cmsg_type = VAR_0;
 FUNC_3(FUNC_0(VAR_5), &VAR_4, sizeof(VAR_4));
}
