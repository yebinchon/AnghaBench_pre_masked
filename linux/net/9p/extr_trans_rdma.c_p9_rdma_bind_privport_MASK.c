
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ushort ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct p9_trans_rdma {int cm_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct sockaddr*) ;

__attribute__((used)) static int FUNC_3(struct p9_trans_rdma *VAR_6)
{
 struct sockaddr_in VAR_7 = {
  .sin_family = VAR_0,
  .sin_addr.s_addr = FUNC_0(VAR_3),
 };
 int VAR_8, VAR_9 = -VAR_2;

 for (VAR_8 = VAR_4; VAR_8 >= VAR_5; VAR_8--) {
  VAR_7.sin_port = FUNC_1((ushort)VAR_8);
  VAR_9 = FUNC_2(VAR_6->cm_id, (struct sockaddr *)&VAR_7);
  if (VAR_9 != -VAR_1)
   break;
 }
 return VAR_9;
}
