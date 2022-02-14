
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut64 ;
typedef int ut32 ;
struct TYPE_10__ {int round; int * round_key_hi; int * round_key_lo; } ;
struct TYPE_9__ {TYPE_1__* anal; } ;
struct TYPE_8__ {int reg; } ;
typedef TYPE_2__ RAnalEsil ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int*) ;
 TYPE_5__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,int*,int *) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int*,int*) ;
 int FUNC_5 (int*,int*) ;
 int FUNC_6 (int*,int*,int *,int *) ;
 int FUNC_7 (int,int *,int *,int*,int*) ;

__attribute__((used)) static bool FUNC_8 (RAnalEsil *VAR_2) {
 ut64 VAR_3, VAR_4, VAR_5,VAR_6;
 ut32 VAR_7, VAR_8, VAR_9, VAR_10;
 if (!VAR_2 || !VAR_2->anal || !VAR_2->anal->reg) {
  return 0;
 }
 if (!FUNC_0 (VAR_2, &VAR_6)) {
  return 0;
 }
 FUNC_1 (VAR_2, "hf", &VAR_4, ((void*)0));
 FUNC_1 (VAR_2, "deskey", &VAR_3, ((void*)0));
 FUNC_1 (VAR_2, "text", &VAR_5, ((void*)0));

 VAR_7 = VAR_3 & VAR_0;
 VAR_8 = VAR_3 >> 32;
 VAR_9 = VAR_5 & VAR_0;
 VAR_10 = VAR_5 >> 32;

 if (VAR_6 != VAR_1.round) {
  VAR_1.round = VAR_6;
 }

 if (!VAR_1.round) {
  int VAR_11;

  FUNC_5 (&VAR_7, &VAR_8);
  for (VAR_11 = 0; VAR_11 < 16; VAR_11++) {
   FUNC_7 (VAR_11, &VAR_1.round_key_lo[VAR_11], &VAR_1.round_key_hi[VAR_11], &VAR_7, &VAR_8);
  }
  FUNC_3 (&VAR_9, &VAR_10);
 }

 if (VAR_4) {
  FUNC_6 (&VAR_9, &VAR_10, &VAR_1.round_key_lo[VAR_1.round], &VAR_1.round_key_hi[VAR_1.round]);
 } else {
  FUNC_6 (&VAR_9, &VAR_10, &VAR_1.round_key_lo[15 - VAR_1.round], &VAR_1.round_key_hi[15 - VAR_1.round]);
 }

 if (VAR_1.round == 15) {
  FUNC_4 (&VAR_10, &VAR_9);
  VAR_1.round = 0;
 } else {
  VAR_1.round++;
 }

 FUNC_2 (VAR_2, "text", VAR_5);
 return 1;
}
