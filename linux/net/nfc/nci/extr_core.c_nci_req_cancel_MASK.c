
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_dev {scalar_t__ req_status; int req_result; int req_completion; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nci_dev *VAR_2, int VAR_3)
{
 if (VAR_2->req_status == VAR_1) {
  VAR_2->req_result = VAR_3;
  VAR_2->req_status = VAR_0;
  FUNC_0(&VAR_2->req_completion);
 }
}
