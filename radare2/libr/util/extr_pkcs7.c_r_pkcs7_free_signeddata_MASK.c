
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int signerinfos; int crls; int certificates; int contentInfo; int digestAlgorithms; } ;
typedef TYPE_1__ RPKCS7SignedData ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(RPKCS7SignedData *VAR_0) {
 if (VAR_0) {
  FUNC_2 (&VAR_0->digestAlgorithms);
  FUNC_1 (&VAR_0->contentInfo);
  FUNC_3 (&VAR_0->certificates);
  FUNC_0 (&VAR_0->crls);
  FUNC_4 (&VAR_0->signerinfos);

 }
}
