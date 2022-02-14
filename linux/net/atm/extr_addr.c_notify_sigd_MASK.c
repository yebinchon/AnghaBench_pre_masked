
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int itf; } ;
struct sockaddr_atmpvc {TYPE_1__ sap_addr; } ;
struct atm_dev {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,struct sockaddr_atmpvc*,int *) ;

__attribute__((used)) static void FUNC_1(const struct atm_dev *VAR_1)
{
 struct sockaddr_atmpvc VAR_2;

 VAR_2.sap_addr.itf = VAR_1->number;
 FUNC_0(((void*)0), VAR_0, ((void*)0), &VAR_2, ((void*)0));
}
