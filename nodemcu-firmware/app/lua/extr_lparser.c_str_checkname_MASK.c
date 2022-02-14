
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * ts; } ;
struct TYPE_8__ {TYPE_1__ seminfo; } ;
struct TYPE_9__ {TYPE_2__ t; } ;
typedef int TString ;
typedef TYPE_3__ LexState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static TString *FUNC_2 (LexState *VAR_1) {
  TString *VAR_2;
  FUNC_0(VAR_1, VAR_0);
  VAR_2 = VAR_1->t.seminfo.ts;
  FUNC_1(VAR_1);
  return VAR_2;
}
