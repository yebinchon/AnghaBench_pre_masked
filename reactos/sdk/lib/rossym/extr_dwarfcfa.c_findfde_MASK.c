
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int ulong ;
typedef int uchar ;
struct TYPE_15__ {int len; int * data; } ;
struct TYPE_19__ {int addrsize; TYPE_1__ frame; } ;
struct TYPE_18__ {int addrsize; int * ep; int * p; TYPE_5__* d; } ;
struct TYPE_16__ {int * ep; int * p; } ;
struct TYPE_17__ {int loc; int endloc; TYPE_2__ init; void* nr; void* rareg; int dquantum; void* iquantum; } ;
typedef TYPE_3__ State ;
typedef TYPE_4__ DwarfBuf ;
typedef TYPE_5__ Dwarf ;


 int FUNC_0 (TYPE_4__*) ;
 void* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 char* FUNC_5 (TYPE_4__*) ;
 int * VAR_0 ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(Dwarf *VAR_1, ulong VAR_2, State *VAR_3, DwarfBuf *VAR_4)
{
 static int VAR_5;
 char *VAR_6;
 uchar *VAR_7;
 int VAR_8, VAR_9;
 ulong VAR_10, VAR_11, VAR_12, VAR_13;
 DwarfBuf VAR_14;

 if(VAR_1->frame.data == VAR_0){
  FUNC_6("no frame debugging information");
  return -1;
 }
 VAR_14.d = VAR_1;
 VAR_14.p = VAR_1->frame.data;
 VAR_14.ep = VAR_14.p + VAR_1->frame.len;
 VAR_14.addrsize = VAR_1->addrsize;
 if(VAR_14.addrsize == 0)
  VAR_14.addrsize = 4;

 for(; VAR_14.p < VAR_14.ep; VAR_14.p = VAR_7){
  if((VAR_8 = (VAR_14.p - VAR_1->frame.data) % VAR_14.addrsize))
   VAR_14.p += VAR_14.addrsize - VAR_8;
  VAR_10 = FUNC_3(&VAR_14);
  if(VAR_10 > VAR_14.ep-VAR_14.p){
   FUNC_6("bad length in cie/fde header");
   return -1;
  }
  VAR_7 = VAR_14.p+VAR_10;
  VAR_11 = FUNC_3(&VAR_14);
  if(VAR_11 == 0xFFFFFFFF){
   VAR_9 = FUNC_0(&VAR_14);
   if(VAR_9 != 1 && VAR_9 != 2 && VAR_9 != 3){
    if(++VAR_5 == 1)
     FUNC_6("unknown cie version %d (wanted 1-3)\n", VAR_9);
    continue;
   }
   VAR_6 = FUNC_5(&VAR_14);
   if(VAR_6 && *VAR_6){
    if(++VAR_5 == 1)
     FUNC_6("unknown augmentation: %s\n", VAR_6);
    continue;
   }
   VAR_3->iquantum = FUNC_1(&VAR_14);
   VAR_3->dquantum = FUNC_2(&VAR_14);
   VAR_3->rareg = FUNC_1(&VAR_14);
   if(VAR_3->rareg > VAR_3->nr){
    FUNC_6("return address is register %d but only have %d registers",
     VAR_3->rareg, VAR_3->nr);
    return -1;
   }
   VAR_3->init.p = VAR_14.p;
   VAR_3->init.ep = VAR_7;
  }else{
   VAR_12 = FUNC_4(&VAR_14);
   VAR_13 = FUNC_4(&VAR_14);
   VAR_4->p = VAR_14.p;
   VAR_4->ep = VAR_7;
   VAR_3->loc = VAR_12;
   VAR_3->endloc = VAR_12+VAR_13;
   if(VAR_12 <= VAR_2 && VAR_2 < VAR_12+VAR_13)
    return 0;
  }
 }
 FUNC_6("cannot find call frame information for pc 0x%lux", VAR_2);
 return -1;

}
