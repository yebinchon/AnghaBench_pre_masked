
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_9__ {TYPE_2__* d; } ;
struct TYPE_7__ {scalar_t__ data; int len; } ;
struct TYPE_8__ {TYPE_1__ str; } ;
typedef TYPE_3__ DwarfBuf ;




 int FUNC_0 (TYPE_3__*) ;
 char* FUNC_1 (TYPE_3__*) ;
 char* VAR_0 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(DwarfBuf *VAR_1, int VAR_2, char **VAR_3)
{
 static int VAR_4;
 ulong VAR_5;

 switch(VAR_2){
 default:
  return -1;

 case 129:
  *VAR_3 = FUNC_1(VAR_1);
  return 0;

 case 128:
  VAR_5 = FUNC_0(VAR_1);
  if(VAR_5 >= VAR_1->d->str.len){
   if(++VAR_4 == 1)
    FUNC_2("dwarf: bad string pointer 0x%lux in attribute", VAR_5);

   *VAR_3 = VAR_0;
  }else
   *VAR_3 = (char*)VAR_1->d->str.data + VAR_5;
  return 0;

 }
}
