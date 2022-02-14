
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lexer {char const* start; char const* pos; char const* end; } ;
struct config_line {scalar_t__ type; } ;
struct TYPE_4__ {int strbuf; struct lexer lexer; } ;
struct TYPE_3__ {scalar_t__ sz; int * addr; } ;
struct config {TYPE_2__ parser; TYPE_1__ mapped; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct config*,char*) ;
 int FUNC_1 (struct config*) ;
 int FUNC_2 (struct config*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct config* FUNC_5 (int) ;
 int FUNC_6 (struct config*,struct config*,int) ;

struct config *FUNC_7(struct config *VAR_1,
                                      const struct config_line *VAR_2)
{
    struct lexer *VAR_3;
    struct config *VAR_4;
    const char *VAR_5;

    if (VAR_2->type != VAR_0)
        return ((void*)0);

    VAR_4 = FUNC_5(sizeof(*VAR_4));
    if (!VAR_4)
        return ((void*)0);

    FUNC_6(VAR_4, VAR_1, sizeof(*VAR_4));
    FUNC_4(&VAR_4->parser.strbuf);

    VAR_4->mapped.addr = ((void*)0);
    VAR_4->mapped.sz = 0;

    VAR_3 = &VAR_4->parser.lexer;
    VAR_3->start = VAR_3->pos;

    VAR_5 = VAR_4->parser.lexer.pos;
    if (!FUNC_1(VAR_4)) {
        FUNC_3(&VAR_4->parser.strbuf);
        FUNC_2(VAR_4);

        FUNC_0(VAR_1,
                     "Could not find section end while trying to isolate");

        return ((void*)0);
    }

    VAR_3->end = VAR_3->pos;
    VAR_3->start = VAR_3->pos = VAR_5;

    return VAR_4;
}
