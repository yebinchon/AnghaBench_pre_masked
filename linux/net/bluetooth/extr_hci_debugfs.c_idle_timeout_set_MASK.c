
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hci_dev {int idle_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, u64 VAR_2)
{
 struct hci_dev *VAR_3 = VAR_1;

 if (VAR_2 != 0 && (VAR_2 < 500 || VAR_2 > 3600000))
  return -VAR_0;

 FUNC_0(VAR_3);
 VAR_3->idle_timeout = VAR_2;
 FUNC_1(VAR_3);

 return 0;
}
