
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ type; scalar_t__ encoding; TYPE_2__* subject; } ;
typedef TYPE_3__ zsetopsrc ;
struct TYPE_13__ {TYPE_1__* zsl; } ;
typedef TYPE_4__ zset ;
typedef TYPE_4__ dict ;
struct TYPE_11__ {TYPE_4__* ptr; } ;
struct TYPE_10__ {unsigned long length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long FUNC_0 (TYPE_4__*) ;
 unsigned long FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char*) ;
 unsigned long FUNC_3 (TYPE_4__*) ;

unsigned long FUNC_4(zsetopsrc *VAR_6) {
    if (VAR_6->subject == ((void*)0))
        return 0;

    if (VAR_6->type == VAR_4) {
        if (VAR_6->encoding == VAR_1) {
            return FUNC_1(VAR_6->subject->ptr);
        } else if (VAR_6->encoding == VAR_0) {
            dict *VAR_7 = VAR_6->subject->ptr;
            return FUNC_0(VAR_7);
        } else {
            FUNC_2("Unknown set encoding");
        }
    } else if (VAR_6->type == VAR_5) {
        if (VAR_6->encoding == VAR_3) {
            return FUNC_3(VAR_6->subject->ptr);
        } else if (VAR_6->encoding == VAR_2) {
            zset *VAR_8 = VAR_6->subject->ptr;
            return VAR_8->zsl->length;
        } else {
            FUNC_2("Unknown sorted set encoding");
        }
    } else {
        FUNC_2("Unsupported type");
    }
}
