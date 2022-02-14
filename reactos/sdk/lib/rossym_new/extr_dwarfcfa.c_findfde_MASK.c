
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
 scalar_t__ VAR_1 ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(Dwarf *VAR_2, ulong VAR_3, State *VAR_4, DwarfBuf *VAR_5)
{
 static int VAR_6;
 char *VAR_7;
 uchar *VAR_8;
 int VAR_9, VAR_10;
 ulong VAR_11, VAR_12, VAR_13, VAR_14;
 DwarfBuf VAR_15;

 if(VAR_2->frame.data == VAR_0){
  FUNC_6("no frame debugging information");
  return -1;
 }
 VAR_15.d = VAR_2;
 VAR_15.p = VAR_2->frame.data;
 VAR_15.ep = VAR_15.p + VAR_2->frame.len;
 VAR_15.addrsize = VAR_2->addrsize;
 if(VAR_15.addrsize == 0)
  VAR_15.addrsize = 4;

 for(; VAR_15.p < VAR_15.ep; VAR_15.p = VAR_8){
  if((VAR_9 = (VAR_15.p - VAR_2->frame.data) % VAR_15.addrsize))
   VAR_15.p += VAR_15.addrsize - VAR_9;
  VAR_11 = FUNC_3(&VAR_15);
  if(VAR_11 > VAR_15.ep-VAR_15.p){
   FUNC_6("bad length in cie/fde header");
   return -1;
  }
  VAR_8 = VAR_15.p+VAR_11;
  VAR_12 = FUNC_3(&VAR_15);
  if(VAR_12 == 0xFFFFFFFF){
   VAR_10 = FUNC_0(&VAR_15);
   if (VAR_1) FUNC_6("CIE len %x id %x vers %x", VAR_11, VAR_12, VAR_10);
   if(VAR_10 != 1 && VAR_10 != 2 && VAR_10 != 3){
    if(++VAR_6 == 1)
     FUNC_6("unknown cie version %d (wanted 1-3)", VAR_10);
    continue;
   }
   VAR_7 = FUNC_5(&VAR_15);
   if(VAR_7 && *VAR_7){
    if(++VAR_6 == 1)
     FUNC_6("unknown augmentation: %s", VAR_7);
    continue;
   }
   VAR_4->iquantum = FUNC_1(&VAR_15);
   VAR_4->dquantum = FUNC_2(&VAR_15);
   VAR_4->rareg = FUNC_1(&VAR_15);
   if(VAR_4->rareg > VAR_4->nr){
    FUNC_6("return address is register %d but only have %d registers",
     VAR_4->rareg, VAR_4->nr);
    return -1;
   }
   VAR_4->init.p = VAR_15.p;
   VAR_4->init.ep = VAR_8;
  }else{
   VAR_13 = FUNC_4(&VAR_15);
   VAR_14 = FUNC_4(&VAR_15);
            if (VAR_1) FUNC_6("FDE: base %x-%x (want pc %x)", VAR_13, VAR_13+VAR_14, VAR_3);
   VAR_5->p = VAR_15.p;
   VAR_5->ep = VAR_8;
   VAR_4->loc = VAR_13;
   VAR_4->endloc = VAR_13+VAR_14;
   if(VAR_13 <= VAR_3 && VAR_3 < VAR_13+VAR_14)
    return 0;
  }
 }
 FUNC_6("cannot find call frame information for pc 0x%lx", VAR_3);
 return -1;

}
