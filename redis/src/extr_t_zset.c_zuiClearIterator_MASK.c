
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int di; } ;
struct TYPE_11__ {TYPE_1__ ht; } ;
struct TYPE_9__ {TYPE_4__ zset; TYPE_4__ set; } ;
struct TYPE_10__ {scalar_t__ type; scalar_t__ encoding; TYPE_2__ iter; int * subject; } ;
typedef TYPE_3__ zsetopsrc ;
typedef TYPE_4__ iterzset ;
typedef TYPE_4__ iterset ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

void FUNC_3(zsetopsrc *VAR_6) {
    if (VAR_6->subject == ((void*)0))
        return;

    if (VAR_6->type == VAR_4) {
        iterset *VAR_7 = &VAR_6->iter.set;
        if (VAR_6->encoding == VAR_1) {
            FUNC_0(VAR_7);
        } else if (VAR_6->encoding == VAR_0) {
            FUNC_1(VAR_7->ht.di);
        } else {
            FUNC_2("Unknown set encoding");
        }
    } else if (VAR_6->type == VAR_5) {
        iterzset *VAR_8 = &VAR_6->iter.zset;
        if (VAR_6->encoding == VAR_3) {
            FUNC_0(VAR_8);
        } else if (VAR_6->encoding == VAR_2) {
            FUNC_0(VAR_8);
        } else {
            FUNC_2("Unknown sorted set encoding");
        }
    } else {
        FUNC_2("Unsupported type");
    }
}
