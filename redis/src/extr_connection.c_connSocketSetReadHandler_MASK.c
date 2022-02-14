
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ read_handler; TYPE_1__* type; int fd; } ;
typedef TYPE_2__ connection ;
struct TYPE_8__ {int el; } ;
struct TYPE_6__ {int ae_handler; } ;
typedef scalar_t__ ConnectionCallbackFunc ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static int FUNC_2(connection *VAR_5, ConnectionCallbackFunc VAR_6) {
    if (VAR_6 == VAR_5->read_handler) return VAR_3;

    VAR_5->read_handler = VAR_6;
    if (!VAR_5->read_handler)
        FUNC_1(VAR_4.el,VAR_5->fd,VAR_1);
    else
        if (FUNC_0(VAR_4.el,VAR_5->fd,
                    VAR_1,VAR_5->type->ae_handler,VAR_5) == VAR_0) return VAR_2;
    return VAR_3;
}
