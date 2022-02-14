
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prevrawlensize; int lensize; int headersize; unsigned char* p; int len; int encoding; int prevrawlen; } ;
typedef TYPE_1__ zlentry ;


 int FUNC_0 (unsigned char*,int ,int,int ) ;
 int FUNC_1 (unsigned char*,int,int ) ;

void FUNC_2(unsigned char *VAR_0, zlentry *VAR_1) {

    FUNC_1(VAR_0, VAR_1->prevrawlensize, VAR_1->prevrawlen);
    FUNC_0(VAR_0 + VAR_1->prevrawlensize, VAR_1->encoding, VAR_1->lensize, VAR_1->len);
    VAR_1->headersize = VAR_1->prevrawlensize + VAR_1->lensize;
    VAR_1->p = VAR_0;
}
