
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; } ;
typedef TYPE_1__ robj ;
struct TYPE_11__ {size_t resp; int * argv; } ;
typedef TYPE_2__ client ;
struct TYPE_12__ {int wrongtypeerr; int * null; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int ,int ) ;
 TYPE_3__ VAR_3 ;

int FUNC_3(client *VAR_4) {
    robj *VAR_5;

    if ((VAR_5 = FUNC_2(VAR_4,VAR_4->argv[1],VAR_3.null[VAR_4->resp])) == ((void*)0))
        return VAR_1;

    if (VAR_5->type != VAR_2) {
        FUNC_0(VAR_4,VAR_3.wrongtypeerr);
        return VAR_0;
    } else {
        FUNC_1(VAR_4,VAR_5);
        return VAR_1;
    }
}
