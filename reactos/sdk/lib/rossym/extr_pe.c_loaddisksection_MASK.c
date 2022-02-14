
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fd; } ;
struct TYPE_7__ {int SizeOfRawData; int PointerToRawData; } ;
typedef TYPE_1__ PeSect ;
typedef TYPE_2__ Pe ;
typedef int DwarfBlock ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int ,int *,int ,int ) ;

int
FUNC_2(Pe *VAR_1, char *VAR_2, DwarfBlock *VAR_3)
{
 PeSect *VAR_4;
 if((VAR_4 = FUNC_0(VAR_1, VAR_2)) == VAR_0)
  return -1;
 return FUNC_1(VAR_1->fd, VAR_3, VAR_4->PointerToRawData, VAR_4->SizeOfRawData);
}
