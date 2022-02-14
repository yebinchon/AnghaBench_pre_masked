
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ nAlloc; scalar_t__ accError; } ;
typedef TYPE_1__ StrAccum ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(StrAccum *VAR_2, u8 VAR_3){
  FUNC_0( VAR_3==VAR_0 || VAR_3==VAR_1 );
  VAR_2->accError = VAR_3;
  VAR_2->nAlloc = 0;
}
