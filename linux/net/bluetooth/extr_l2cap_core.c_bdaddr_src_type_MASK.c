
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_conn {int src_type; int type; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline u8 FUNC_1(struct hci_conn *VAR_0)
{
 return FUNC_0(VAR_0->type, VAR_0->src_type);
}
