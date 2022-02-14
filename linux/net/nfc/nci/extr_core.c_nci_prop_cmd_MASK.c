
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_dev {int dummy; } ;
struct nci_cmd_param {size_t len; int * payload; int opcode; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nci_dev*,int ,unsigned long,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct nci_dev *VAR_3, __u8 VAR_4, size_t VAR_5, __u8 *VAR_6)
{
 struct nci_cmd_param VAR_7;

 VAR_7.opcode = FUNC_2(VAR_1, VAR_4);
 VAR_7.len = VAR_5;
 VAR_7.payload = VAR_6;

 return FUNC_0(VAR_3, VAR_2, (unsigned long)&VAR_7,
        FUNC_1(VAR_0));
}
