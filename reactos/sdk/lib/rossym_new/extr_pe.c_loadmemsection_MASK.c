
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int len; scalar_t__ data; } ;
struct TYPE_10__ {scalar_t__ fd; } ;
struct TYPE_9__ {int VirtualAddress; int SizeOfRawData; } ;
typedef TYPE_1__ PeSect ;
typedef TYPE_2__ Pe ;
typedef char* PCHAR ;
typedef TYPE_3__ DwarfBlock ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,char*,int) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (char*,char*,scalar_t__,int) ;

int
FUNC_4(Pe *VAR_1, char *VAR_2, DwarfBlock *VAR_3)
{
 PeSect *VAR_4;

 if((VAR_4 = FUNC_2(VAR_1, VAR_2)) == VAR_0)
  return -1;
 FUNC_3("Loading section %s (ImageBase %x RVA %x)\n", VAR_2, VAR_1->fd, VAR_4->VirtualAddress);
 VAR_3->data = FUNC_0(VAR_4->SizeOfRawData);
 VAR_3->len = VAR_4->SizeOfRawData;
 PCHAR VAR_5 = ((char *)VAR_1->fd) + VAR_4->VirtualAddress;
 FUNC_3("Copying to %x from %x (%x)\n", VAR_5, VAR_3->data, VAR_3->len);
 FUNC_1(VAR_3->data, VAR_5, VAR_4->SizeOfRawData);

 return VAR_4->SizeOfRawData;
}
