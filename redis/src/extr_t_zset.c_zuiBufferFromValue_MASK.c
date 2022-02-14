
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* estr; unsigned char* _buf; int ell; int elen; int * ele; } ;
typedef TYPE_1__ zsetopval ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(zsetopval *VAR_0) {
    if (VAR_0->estr == ((void*)0)) {
        if (VAR_0->ele != ((void*)0)) {
            VAR_0->elen = FUNC_1(VAR_0->ele);
            VAR_0->estr = (unsigned char*)VAR_0->ele;
        } else {
            VAR_0->elen = FUNC_0((char*)VAR_0->_buf,sizeof(VAR_0->_buf),VAR_0->ell);
            VAR_0->estr = VAR_0->_buf;
        }
    }
    return 1;
}
