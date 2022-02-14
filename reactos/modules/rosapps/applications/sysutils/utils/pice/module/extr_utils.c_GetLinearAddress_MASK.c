
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tagDESCRIPTOR {size_t Val; scalar_t__ Ti; } ;
typedef int USHORT ;
typedef int ULONG ;
struct TYPE_3__ {int Base_31_24; int Base_23_16; int Base_15_0; } ;
typedef TYPE_1__* PGDT ;
typedef struct tagDESCRIPTOR* PDESCRIPTOR ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;

ULONG FUNC_5(USHORT VAR_0,ULONG VAR_1)
{
    PGDT VAR_2;
    ULONG VAR_3=0;
    PDESCRIPTOR VAR_4;
    USHORT VAR_5=VAR_0;

    FUNC_1();

 VAR_4=(struct tagDESCRIPTOR*)&VAR_0;


 VAR_2=FUNC_2();
    FUNC_0((0,"GetLinearAddress(): pGDT = %.8X\n",VAR_2));
    FUNC_0((0,"GetLinearAddress(): original Segment:Offset = %.4X:%.8X\n",VAR_0,VAR_1));


 if(VAR_4->Ti)
 {
  FUNC_0((0,"GetLinearAddress(): Segment is in LDT\n"));

  __asm__("\n\t 			sldt %%ax\n\t 			mov %%ax,%0"


   :"=m" (VAR_0));
  if(VAR_0)
  {
   FUNC_0((0,"GetLinearAddress(): no LDT\n"));

   VAR_2=(PGDT)((VAR_2[VAR_4->Val].Base_31_24<<24)|
        (VAR_2[VAR_4->Val].Base_23_16<<16)|
           (VAR_2[VAR_4->Val].Base_15_0));
   if(!FUNC_3((ULONG)VAR_2,0x8) )
    VAR_2=0;
  }
  else
  {
   VAR_2=0;
  }
 }

 if(VAR_2 && VAR_0)
 {
        FUNC_0((0,"GetLinearAddress(): Segment:Offset = %.4X:%.8X\n",VAR_0,VAR_1));
  VAR_3=VAR_2[VAR_5>>3].Base_15_0|
      (VAR_2[VAR_5>>3].Base_23_16<<16)|
      (VAR_2[VAR_5>>3].Base_31_24<<24);
  VAR_3+=VAR_1;
 }
 FUNC_0((0,"GetLinearAddress(%.4X:%.8X)=%.8X\n",VAR_5,VAR_1,VAR_3));

    FUNC_4();

 return VAR_3;
}
