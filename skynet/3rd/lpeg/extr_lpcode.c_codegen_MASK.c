
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int n; } ;
struct TYPE_16__ {int tag; TYPE_1__ u; } ;
typedef TYPE_2__ TTree ;
typedef int CompileState ;
typedef int Charset ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_2__*,int,int const*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,TYPE_2__*,int,int const*) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ,int,int const*) ;
 int FUNC_12 (int *,TYPE_2__*,int) ;
 int FUNC_13 (int *,int ,TYPE_2__*,int,int const*) ;
 int FUNC_14 (TYPE_2__*) ;
 TYPE_2__* FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_17 (CompileState *VAR_2, TTree *VAR_3, int VAR_4, int VAR_5,
                     const Charset *VAR_6) {
 tailcall:
  switch (VAR_3->tag) {
    case 137: FUNC_6(VAR_2, VAR_3->u.n, VAR_5); break;
    case 141: FUNC_0(VAR_2, VAR_0, 0); break;
    case 129: FUNC_7(VAR_2, FUNC_16(VAR_3), VAR_5); break;
    case 128: break;
    case 135: FUNC_0(VAR_2, VAR_1, 0); break;
    case 136: FUNC_8(VAR_2, FUNC_14(VAR_3), FUNC_15(VAR_3), VAR_4, VAR_6); break;
    case 132: FUNC_11(VAR_2, FUNC_14(VAR_3), VAR_4, VAR_6); break;
    case 140: FUNC_3(VAR_2, VAR_3); break;
    case 133: FUNC_10(VAR_2, FUNC_14(VAR_3)); break;
    case 142: FUNC_2(VAR_2, FUNC_14(VAR_3), VAR_5); break;
    case 138: FUNC_5(VAR_2, VAR_3, VAR_5, VAR_6); break;
    case 131: FUNC_12(VAR_2, VAR_3, VAR_5); break;
    case 134: FUNC_9(VAR_2, VAR_3); break;
    case 139: FUNC_4(VAR_2, VAR_3); break;
    case 130: {
      VAR_5 = FUNC_13(VAR_2, FUNC_14(VAR_3), FUNC_15(VAR_3), VAR_5, VAR_6);

      VAR_3 = FUNC_15(VAR_3); goto tailcall;
    }
    default: FUNC_1(0);
  }
}
