
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct hci_dev {int rpa_expired; int service_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_2 (struct hci_dev*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_4, struct hci_dev *VAR_5)
{
 if (FUNC_2(VAR_5, VAR_1))
  return;

 FUNC_0(&VAR_5->service_cache, VAR_3);
 FUNC_0(&VAR_5->rpa_expired, VAR_2);






 FUNC_1(VAR_5, VAR_0);
}
