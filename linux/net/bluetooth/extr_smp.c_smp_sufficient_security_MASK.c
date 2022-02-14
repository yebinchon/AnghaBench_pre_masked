
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hci_conn {scalar_t__ sec_level; int role; int dst_type; int dst; int hdev; int flags; } ;
typedef enum smp_key_pref { ____Placeholder_smp_key_pref } smp_key_pref ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

bool FUNC_2(struct hci_conn *VAR_3, u8 VAR_4,
        enum smp_key_pref VAR_5)
{
 if (VAR_4 == VAR_0)
  return 1;







 if (VAR_5 == VAR_2 &&
     FUNC_1(VAR_1, &VAR_3->flags) &&
     FUNC_0(VAR_3->hdev, &VAR_3->dst, VAR_3->dst_type, VAR_3->role))
  return 0;

 if (VAR_3->sec_level >= VAR_4)
  return 1;

 return 0;
}
