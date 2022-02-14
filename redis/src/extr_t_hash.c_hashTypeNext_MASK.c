
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ encoding; unsigned char* fptr; unsigned char* vptr; int di; int * de; TYPE_1__* subject; } ;
typedef TYPE_2__ hashTypeIterator ;
struct TYPE_4__ {unsigned char* ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 unsigned char* FUNC_3 (unsigned char*,int ) ;
 unsigned char* FUNC_4 (unsigned char*,unsigned char*) ;

int FUNC_5(hashTypeIterator *VAR_4) {
    if (VAR_4->encoding == VAR_3) {
        unsigned char *VAR_5;
        unsigned char *VAR_6, *VAR_7;

        VAR_5 = VAR_4->subject->ptr;
        VAR_6 = VAR_4->fptr;
        VAR_7 = VAR_4->vptr;

        if (VAR_6 == ((void*)0)) {

            FUNC_1(VAR_7 == ((void*)0));
            VAR_6 = FUNC_3(VAR_5, 0);
        } else {

            FUNC_1(VAR_7 != ((void*)0));
            VAR_6 = FUNC_4(VAR_5, VAR_7);
        }
        if (VAR_6 == ((void*)0)) return VAR_0;


        VAR_7 = FUNC_4(VAR_5, VAR_6);
        FUNC_1(VAR_7 != ((void*)0));


        VAR_4->fptr = VAR_6;
        VAR_4->vptr = VAR_7;
    } else if (VAR_4->encoding == VAR_2) {
        if ((VAR_4->de = FUNC_0(VAR_4->di)) == ((void*)0)) return VAR_0;
    } else {
        FUNC_2("Unknown hash encoding");
    }
    return VAR_1;
}
