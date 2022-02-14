
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int* cs; } ;
struct TYPE_7__ {int n; } ;
struct TYPE_8__ {int tag; TYPE_1__ u; } ;
typedef TYPE_2__ TTree ;
typedef TYPE_3__ Charset ;





 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (int*,int ) ;
 int* FUNC_3 (TYPE_2__*) ;

int FUNC_4 (TTree *VAR_2, Charset *VAR_3) {
  switch (VAR_2->tag) {
    case 128: {
      FUNC_1(VAR_1, VAR_3->cs[VAR_1] = FUNC_3(VAR_2)[VAR_1]);
      return 1;
    }
    case 129: {
      FUNC_0(0 <= VAR_2->u.n && VAR_2->u.n <= VAR_0);
      FUNC_1(VAR_1, VAR_3->cs[VAR_1] = 0);
      FUNC_2(VAR_3->cs, VAR_2->u.n);
      return 1;
    }
    case 130: {
      FUNC_1(VAR_1, VAR_3->cs[VAR_1] = 0xFF);
      return 1;
    }
    default: return 0;
  }
}
