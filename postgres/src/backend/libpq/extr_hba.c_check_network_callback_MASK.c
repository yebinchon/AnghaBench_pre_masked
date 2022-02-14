
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_2__ {scalar_t__ method; int raddr; void* result; } ;
typedef TYPE_1__ check_network_data ;


 void* FUNC_0 (int ,struct sockaddr*,struct sockaddr*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct sockaddr_storage*,int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct sockaddr *VAR_1, struct sockaddr *VAR_2,
        void *VAR_3)
{
 check_network_data *VAR_4 = (check_network_data *) VAR_3;
 struct sockaddr_storage VAR_5;


 if (VAR_4->result)
  return;

 if (VAR_4->method == VAR_0)
 {

  FUNC_1(&VAR_5, ((void*)0), VAR_1->sa_family);
  VAR_4->result = FUNC_0(VAR_4->raddr, VAR_1, (struct sockaddr *) &VAR_5);
 }
 else
 {

  VAR_4->result = FUNC_0(VAR_4->raddr, VAR_1, VAR_2);
 }
}
