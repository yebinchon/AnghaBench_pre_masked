
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int readOnly; int bIsReader; int nOp; int btreeMask; int db; TYPE_4__* aOp; TYPE_3__* pParse; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_6__ {int xAdvance; } ;
struct TYPE_9__ {int opcode; scalar_t__ p2; int p1; void* p4type; TYPE_1__ p4; } ;
struct TYPE_8__ {int* aLabel; size_t nLabel; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ Op ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int*) ;
 int* VAR_6 ;

__attribute__((used)) static void FUNC_4(Vdbe *VAR_7, int *VAR_8){
  int VAR_9 = *VAR_8;
  Op *VAR_10;
  Parse *VAR_11 = VAR_7->pParse;
  int *VAR_12 = VAR_11->aLabel;
  VAR_7->readOnly = 1;
  VAR_7->bIsReader = 0;
  VAR_10 = &VAR_7->aOp[VAR_7->nOp-1];
  while(1){







    if( VAR_10->opcode<=VAR_3 ){


      switch( VAR_10->opcode ){
        case 131: {
          if( VAR_10->p2!=0 ) VAR_7->readOnly = 0;

        }
        case 138:
        case 133: {
          VAR_7->bIsReader = 1;
          break;
        }

        case 137:

        case 128:
        case 136: {
          VAR_7->readOnly = 0;
          VAR_7->bIsReader = 1;
          break;
        }
        case 135:
        case 132: {
          VAR_10->p4.xAdvance = VAR_4;
          VAR_10->p4type = VAR_2;



          FUNC_2( VAR_10->p2>=0 );
          break;
        }
        case 134: {
          VAR_10->p4.xAdvance = VAR_5;
          VAR_10->p4type = VAR_2;



          FUNC_2( VAR_10->p2>=0 );
          break;
        }

        case 129: {
          if( VAR_10->p2>VAR_9 ) VAR_9 = VAR_10->p2;
          break;
        }
        case 130: {
          int VAR_13;
          FUNC_2( (VAR_10 - VAR_7->aOp) >= 3 );
          FUNC_2( VAR_10[-1].opcode==VAR_1 );
          VAR_13 = VAR_10[-1].p1;
          if( VAR_13>VAR_9 ) VAR_9 = VAR_13;

        }

        default: {
          if( VAR_10->p2<0 ){



            FUNC_2( (VAR_6[VAR_10->opcode] & VAR_0)!=0 );
            FUNC_2( FUNC_0(VAR_10->p2)<-VAR_11->nLabel );
            VAR_10->p2 = VAR_12[FUNC_0(VAR_10->p2)];
          }
          break;
        }
      }



      FUNC_2( (VAR_6[VAR_10->opcode]&VAR_0)==0 || VAR_10->p2>=0);
    }
    if( VAR_10==VAR_7->aOp ) break;
    VAR_10--;
  }
  FUNC_3(VAR_7->db, VAR_11->aLabel);
  VAR_11->aLabel = 0;
  VAR_11->nLabel = 0;
  *VAR_8 = VAR_9;
  FUNC_2( VAR_7->bIsReader!=0 || FUNC_1(VAR_7->btreeMask) );
}
