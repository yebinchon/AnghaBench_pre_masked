
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct in_addr {int s_addr; } ;
struct ip_mreq_source {struct in_addr imr_interface; int imr_sourceaddr; int imr_multiaddr; int member_0; } ;
struct TYPE_6__ {scalar_t__ ss_family; } ;
struct group_source_req {unsigned int gsr_interface; TYPE_3__ gsr_source; TYPE_3__ gsr_group; int member_0; } ;
typedef int socklen_t ;
struct TYPE_5__ {scalar_t__ type; int bsd_socket; } ;
typedef TYPE_1__ php_socket ;
typedef int mreqs ;
typedef int gsreq ;
typedef enum source_op { ____Placeholder_source_op } source_op ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,struct sockaddr*,int) ;
 int FUNC_6 (int *,int ,char*,int ) ;
 scalar_t__ FUNC_7 (unsigned int,TYPE_1__*,struct in_addr*) ;
 int FUNC_8 (int ,int,int ,char*,int) ;

__attribute__((used)) static int FUNC_9(
 php_socket *VAR_5,
 int VAR_6,
 struct sockaddr *VAR_7,
 socklen_t VAR_8,
 struct sockaddr *VAR_9,
 socklen_t VAR_10,
 unsigned int VAR_11,
 enum source_op VAR_12)
{
 if (VAR_5->type == VAR_0) {
  struct ip_mreq_source VAR_13 = {0};
  struct in_addr VAR_14;

  VAR_13.imr_multiaddr = ((struct sockaddr_in*)VAR_7)->sin_addr;
  VAR_13.imr_sourceaddr = ((struct sockaddr_in*)VAR_9)->sin_addr;

  FUNC_3(VAR_8 == sizeof(struct sockaddr_in));
  FUNC_3(VAR_10 == sizeof(struct sockaddr_in));

  if (VAR_11 != 0) {
   if (FUNC_7(VAR_11, VAR_5, &VAR_14) ==
     VAR_3)
    return -2;
   VAR_13.imr_interface = VAR_14;
  } else {
   VAR_13.imr_interface.s_addr = FUNC_4(VAR_4);
  }

  return FUNC_8(VAR_5->bsd_socket, VAR_6,
    FUNC_0(VAR_12), (char*)&VAR_13, sizeof(VAR_13));
 }
 else {
  FUNC_6(((void*)0), VAR_2,
   "Option %s is inapplicable to this socket type",
   FUNC_2(VAR_12));
  return -2;
 }

}
