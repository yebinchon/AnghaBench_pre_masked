
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ lu_byte ;
struct TYPE_5__ {scalar_t__ shrlen; scalar_t__ tt; scalar_t__ id; } ;
typedef TYPE_1__ TString ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;

int FUNC_3 (TString *VAR_1, TString *VAR_2) {
  lu_byte VAR_3 = VAR_1->shrlen;
  FUNC_1(VAR_2->tt == VAR_0);
  int VAR_4 = VAR_3 == VAR_2->shrlen && (FUNC_2(FUNC_0(VAR_1), FUNC_0(VAR_2), VAR_3) == 0);
  if (VAR_4) {
    if (VAR_1->id < VAR_2->id) {
      VAR_1->id = VAR_2->id;
    } else {
      VAR_2->id = VAR_1->id;
    }
  }
  return VAR_4;
}
