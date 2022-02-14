
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hci_conn {scalar_t__ role; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static u32 FUNC_1(struct hci_conn *VAR_10)
{
 u32 VAR_11 = 0;

 if (VAR_10->role == VAR_9)
  VAR_11 |= VAR_7;

 if (FUNC_0(VAR_1, &VAR_10->flags))
  VAR_11 |= VAR_5;

 if (FUNC_0(VAR_0, &VAR_10->flags))
  VAR_11 |= VAR_4;

 if (FUNC_0(VAR_3, &VAR_10->flags))
  VAR_11 |= VAR_8;

 if (FUNC_0(VAR_2, &VAR_10->flags))
  VAR_11 |= VAR_6;

 return VAR_11;
}
