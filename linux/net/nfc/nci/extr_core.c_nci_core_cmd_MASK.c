
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_dev {int dummy; } ;
struct nci_cmd_param {size_t len; int * payload; int opcode; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (struct nci_dev*,int ,unsigned long,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

int FUNC_2(struct nci_dev *VAR_2, __u16 VAR_3, size_t VAR_4, __u8 *VAR_5)
{
 struct nci_cmd_param VAR_6;

 VAR_6.opcode = VAR_3;
 VAR_6.len = VAR_4;
 VAR_6.payload = VAR_5;

 return FUNC_0(VAR_2, VAR_1, (unsigned long)&VAR_6,
        FUNC_1(VAR_0));
}
