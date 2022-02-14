
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* reader; TYPE_1__* funcs; scalar_t__ err; } ;
typedef TYPE_2__ redisContext ;
typedef int buf ;
struct TYPE_9__ {int errstr; int err; } ;
struct TYPE_7__ {int (* read ) (TYPE_2__*,char*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,char*,int) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;

int FUNC_3(redisContext *VAR_2) {
    char VAR_3[1024*16];
    int VAR_4;


    if (VAR_2->err)
        return VAR_0;

    VAR_4 = VAR_2->funcs->read(VAR_2, VAR_3, sizeof(VAR_3));
    if (VAR_4 > 0) {
        if (FUNC_1(VAR_2->reader, VAR_3, VAR_4) != VAR_1) {
            FUNC_0(VAR_2, VAR_2->reader->err, VAR_2->reader->errstr);
            return VAR_0;
        } else {
        }
    } else if (VAR_4 < 0) {
        return VAR_0;
    }
    return VAR_1;
}
