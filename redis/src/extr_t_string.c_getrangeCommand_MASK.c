
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ encoding; char* ptr; } ;
typedef TYPE_1__ robj ;
typedef int llbuf ;
struct TYPE_13__ {int * argv; } ;
typedef TYPE_2__ client ;
struct TYPE_14__ {int emptybulk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*,long long) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,long long*,int *) ;
 size_t FUNC_4 (char*,int,long) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,int ,int ) ;
 size_t FUNC_6 (char*) ;
 TYPE_3__ VAR_3 ;

void FUNC_7(client *VAR_4) {
    robj *VAR_5;
    long long VAR_6, VAR_7;
    char *VAR_8, VAR_9[32];
    size_t VAR_10;

    if (FUNC_3(VAR_4,VAR_4->argv[2],&VAR_6,((void*)0)) != VAR_0)
        return;
    if (FUNC_3(VAR_4,VAR_4->argv[3],&VAR_7,((void*)0)) != VAR_0)
        return;
    if ((VAR_5 = FUNC_5(VAR_4,VAR_4->argv[1],VAR_3.emptybulk)) == ((void*)0) ||
        FUNC_2(VAR_4,VAR_5,VAR_2)) return;

    if (VAR_5->encoding == VAR_1) {
        VAR_8 = VAR_9;
        VAR_10 = FUNC_4(VAR_9,sizeof(VAR_9),(long)VAR_5->ptr);
    } else {
        VAR_8 = VAR_5->ptr;
        VAR_10 = FUNC_6(VAR_8);
    }


    if (VAR_6 < 0 && VAR_7 < 0 && VAR_6 > VAR_7) {
        FUNC_0(VAR_4,VAR_3.emptybulk);
        return;
    }
    if (VAR_6 < 0) VAR_6 = VAR_10+VAR_6;
    if (VAR_7 < 0) VAR_7 = VAR_10+VAR_7;
    if (VAR_6 < 0) VAR_6 = 0;
    if (VAR_7 < 0) VAR_7 = 0;
    if ((unsigned long long)VAR_7 >= VAR_10) VAR_7 = VAR_10-1;



    if (VAR_6 > VAR_7 || VAR_10 == 0) {
        FUNC_0(VAR_4,VAR_3.emptybulk);
    } else {
        FUNC_1(VAR_4,(char*)VAR_8+VAR_6,VAR_7-VAR_6+1);
    }
}
