
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int length; int reallocs; scalar_t__ debug; } ;
typedef TYPE_1__ strbuf_t ;


 int FUNC_0 (int ,char*,long,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(strbuf_t *VAR_1)
{
    if (VAR_1->debug) {
        FUNC_0(VAR_0, "strbuf(%lx) reallocs: %d, length: %d, size: %d\n",
                (long)VAR_1, VAR_1->reallocs, VAR_1->length, VAR_1->size);
    }
}
