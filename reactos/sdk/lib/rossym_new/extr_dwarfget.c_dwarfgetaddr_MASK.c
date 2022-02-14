
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_9__ {int addrsize; int p; TYPE_1__* d; } ;
struct TYPE_8__ {int addrsize; } ;
typedef TYPE_2__ DwarfBuf ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_4 (char*,int) ;

ulong
FUNC_5(DwarfBuf *VAR_1)
{
 static int VAR_2;

 if(VAR_1->addrsize == 0)
  VAR_1->addrsize = VAR_1->d->addrsize;

 switch(VAR_1->addrsize){
 case 1:
  return FUNC_0(VAR_1);
 case 2:
  return FUNC_1(VAR_1);
 case 4:
  return FUNC_2(VAR_1);
 case 8:
  return FUNC_3(VAR_1);
 default:
  if(++VAR_2 == 1)
   FUNC_4("dwarf: unexpected address size %lud in dwarfgetaddr", VAR_1->addrsize);
  VAR_1->p = VAR_0;
  return 0;
 }
}
