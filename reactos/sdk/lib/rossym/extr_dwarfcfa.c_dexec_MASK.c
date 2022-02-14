
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int e ;
struct TYPE_26__ {scalar_t__ p; scalar_t__ ep; } ;
struct TYPE_23__ {void* len; void* data; } ;
struct TYPE_25__ {long offset; long reg; TYPE_3__ loc; void* type; } ;
struct TYPE_24__ {long loc; long endloc; long iquantum; long dquantum; int nr; int nstack; TYPE_5__* r; TYPE_2__* cfa; TYPE_5__** stack; TYPE_5__* initr; } ;
struct TYPE_21__ {void* len; void* data; } ;
struct TYPE_22__ {long reg; long offset; TYPE_1__ loc; void* type; } ;
typedef TYPE_4__ State ;
typedef TYPE_5__ DwarfExpr ;
typedef TYPE_6__ DwarfBuf ;


 int FUNC_0 (void*,TYPE_5__*,int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (TYPE_4__*,long) ;
 void* FUNC_2 (TYPE_6__*) ;
 void* FUNC_3 (TYPE_6__*) ;
 long FUNC_4 (TYPE_6__*) ;
 long FUNC_5 (TYPE_6__*) ;
 long FUNC_6 (TYPE_6__*) ;
 long FUNC_7 (TYPE_6__*) ;
 void* FUNC_8 (TYPE_6__*,void*) ;
 int FUNC_9 (TYPE_5__*) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (TYPE_5__*,TYPE_5__*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static int
FUNC_13(DwarfBuf *VAR_8, State *VAR_9, int VAR_10)
{
 int VAR_11;
 long VAR_12, VAR_13;
 DwarfExpr *VAR_14;

 for(;;){
  if(VAR_8->p == VAR_8->ep){
   if(VAR_9->initr)
    VAR_9->loc = VAR_9->endloc;
   return 0;
  }
  VAR_11 = FUNC_2(VAR_8);
  if(VAR_8->p == VAR_6){
   FUNC_12("ran out of instructions during cfa program");
   if(VAR_7) FUNC_12("%r\n");
   return -1;
  }
  if(VAR_7) FUNC_12("+ loc=0x%lux op 0x%ux ", VAR_9->loc, VAR_11);
  switch(VAR_11>>6){
  case 1:
   VAR_12 = VAR_11&0x3F;
  advance:
   if(VAR_7) FUNC_12("loc += %ld\n", VAR_12*VAR_9->iquantum);
   VAR_9->loc += VAR_12 * VAR_9->iquantum;
   if(VAR_10)
    return 0;
   continue;

  case 2:
   VAR_12 = VAR_11&0x3F;
   VAR_13 = FUNC_3(VAR_8);
  offset:
   if(VAR_7) FUNC_12("r%ld += %ld\n", VAR_12, VAR_13*VAR_9->dquantum);
   if(FUNC_1(VAR_9, VAR_12) < 0)
    return -1;
   VAR_9->r[VAR_12].type = VAR_0;
   VAR_9->r[VAR_12].offset = VAR_13 * VAR_9->dquantum;
   continue;

  case 3:
   VAR_12 = VAR_11&0x3F;
  restore:
   if(VAR_7) FUNC_12("r%ld = init\n", VAR_12);
   if(FUNC_1(VAR_9, VAR_12) < 0)
    return -1;
   VAR_9->r[VAR_12] = VAR_9->initr[VAR_12];
   continue;
  }

  switch(VAR_11){
  case 0:
   if(VAR_7) FUNC_12("nop\n");
   continue;

  case 0x01:
   VAR_9->loc = FUNC_7(VAR_8);
   if(VAR_7) FUNC_12("loc = 0x%lux\n", VAR_9->loc);
   if(VAR_10)
    return 0;
   continue;

  case 0x02:
   VAR_12 = FUNC_2(VAR_8);
   goto advance;

  case 0x03:
   VAR_12 = FUNC_5(VAR_8);
   goto advance;

  case 0x04:
   VAR_12 = FUNC_6(VAR_8);
   goto advance;

  case 0x05:
   VAR_12 = FUNC_3(VAR_8);
   VAR_13 = FUNC_3(VAR_8);
   goto offset;

  case 0x06:
   VAR_12 = FUNC_3(VAR_8);
   goto restore;

  case 0x07:
   VAR_12 = FUNC_3(VAR_8);
   if(VAR_7) FUNC_12("r%ld = undef\n", VAR_12);
   if(FUNC_1(VAR_9, VAR_12) < 0)
    return -1;
   VAR_9->r[VAR_12].type = VAR_5;
   continue;

  case 0x08:
   VAR_12 = FUNC_3(VAR_8);
   if(VAR_7) FUNC_12("r%ld = same\n", VAR_12);
   if(FUNC_1(VAR_9, VAR_12) < 0)
    return -1;
   VAR_9->r[VAR_12].type = VAR_4;
   continue;

  case 0x09:
   VAR_12 = FUNC_3(VAR_8);
   VAR_13 = FUNC_3(VAR_8);
   if(VAR_7) FUNC_12("r%ld = r%ld\n", VAR_12, VAR_13);
   if(FUNC_1(VAR_9, VAR_12) < 0 || FUNC_1(VAR_9, VAR_13) < 0)
    return -1;
   VAR_9->r[VAR_12].type = VAR_3;
   VAR_9->r[VAR_12].reg = VAR_13;
   continue;

  case 0x0A:
   VAR_14 = FUNC_10(VAR_9->nr*sizeof(VAR_14[0]));
   if(VAR_7) FUNC_12("push\n");
   if(VAR_14 == VAR_6)
    return -1;
   void *VAR_15 = FUNC_10(VAR_9->nstack*sizeof(VAR_9->stack[0]));
   FUNC_0(VAR_15, *VAR_9->stack, VAR_9->nstack*sizeof(VAR_9->stack[0]));
   if (VAR_15) {
    FUNC_9(*VAR_9->stack);
    VAR_9->stack = VAR_15;
   } else {
    FUNC_9(VAR_14);
    return -1;
   }
   if(VAR_8->p == VAR_6){
    FUNC_9(VAR_14);
    return -1;
   }
   VAR_9->stack[VAR_9->nstack++] = VAR_14;
   FUNC_11(VAR_14, VAR_9->r, VAR_9->nr*sizeof(VAR_14[0]));
   continue;

  case 0x0B:
   if(VAR_7) FUNC_12("pop\n");
   if(VAR_9->nstack == 0){
    FUNC_12("restore state underflow");
    return -1;
   }
   VAR_14 = VAR_9->stack[VAR_9->nstack-1];
   FUNC_11(VAR_9->r, VAR_14, VAR_9->nr*sizeof(VAR_14[0]));
   FUNC_9(VAR_14);
   VAR_9->nstack--;
   continue;

  case 0x0C:
   VAR_12 = FUNC_3(VAR_8);
   VAR_13 = FUNC_3(VAR_8);
  defcfa:
   if(VAR_7) FUNC_12("cfa %ld(r%ld)\n", VAR_13, VAR_12);
   if(FUNC_1(VAR_9, VAR_12) < 0)
    return -1;
   VAR_9->cfa->type = VAR_2;
   VAR_9->cfa->reg = VAR_12;
   VAR_9->cfa->offset = VAR_13;
   continue;

  case 0x0D:
   VAR_12 = FUNC_3(VAR_8);
   if(VAR_7) FUNC_12("cfa reg r%ld\n", VAR_12);
   if(VAR_9->cfa->type != VAR_2){
    FUNC_12("change CFA register but CFA not in register+offset form");
    return -1;
   }
   if(FUNC_1(VAR_9, VAR_12) < 0)
    return -1;
   VAR_9->cfa->reg = VAR_12;
   continue;

  case 0x0E:
   VAR_12 = FUNC_3(VAR_8);
  cfaoffset:
   if(VAR_7) FUNC_12("cfa off %ld\n", VAR_12);
   if(VAR_9->cfa->type != VAR_2){
    FUNC_12("change CFA offset but CFA not in register+offset form");
    return -1;
   }
   VAR_9->cfa->offset = VAR_12;
   continue;

  case 0x0F:
   if(VAR_7) FUNC_12("cfa expr\n");
   VAR_9->cfa->type = VAR_1;
   VAR_9->cfa->loc.len = FUNC_3(VAR_8);
   VAR_9->cfa->loc.data = FUNC_8(VAR_8, VAR_9->cfa->loc.len);
   continue;

  case 0x10:
   VAR_12 = FUNC_3(VAR_8);
   if(VAR_7) FUNC_12("reg expr r%ld\n", VAR_12);
   if(FUNC_1(VAR_9, VAR_12) < 0)
    return -1;
   VAR_9->r[VAR_12].type = VAR_1;
   VAR_9->r[VAR_12].loc.len = FUNC_3(VAR_8);
   VAR_9->r[VAR_12].loc.data = FUNC_8(VAR_8, VAR_9->r[VAR_12].loc.len);
   continue;

  case 0x11:
   VAR_12 = FUNC_3(VAR_8);
   VAR_13 = FUNC_4(VAR_8);
   goto offset;

  case 0x12:
   VAR_12 = FUNC_3(VAR_8);
   VAR_13 = FUNC_4(VAR_8);
   goto defcfa;

  case 0x13:
   VAR_12 = FUNC_4(VAR_8);
   goto cfaoffset;

  default:
   FUNC_12("unknown opcode 0x%ux in cfa program", VAR_11);
   return -1;
  }
 }

}
