
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int length; int data; } ;
typedef TYPE_1__ ASN1_INTEGER ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,unsigned char**) ;

int FUNC_1(ASN1_INTEGER *VAR_1, unsigned char **VAR_2)
{
    return FUNC_0(VAR_1->data, VAR_1->length, VAR_1->type & VAR_0, VAR_2);
}
