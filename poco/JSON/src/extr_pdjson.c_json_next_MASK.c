
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int (* peek ) (TYPE_3__*) ;int (* get ) (TYPE_3__*) ;} ;
struct TYPE_11__ {int flags; scalar_t__ next; scalar_t__ ntokens; size_t stack_top; TYPE_1__* stack; TYPE_3__ source; } ;
typedef TYPE_2__ json_stream ;
typedef enum json_type { ____Placeholder_json_type } json_type ;
struct TYPE_10__ {scalar_t__ type; int count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

enum json_type FUNC_7(json_stream *VAR_8)
{
    if (VAR_8->flags & VAR_4)
        return VAR_3;
    if (VAR_8->next != 0) {
        enum json_type VAR_9 = VAR_8->next;
        VAR_8->next = (enum json_type) 0;
        return VAR_9;
    }
    if (VAR_8->ntokens > 0 && VAR_8->stack_top == (size_t)-1) {
        int VAR_10;

        do {
            VAR_10 = VAR_8->source.peek(&VAR_8->source);
            if (FUNC_1(VAR_10)) {
                VAR_10 = VAR_8->source.get(&VAR_8->source);
            }
        } while (FUNC_1(VAR_10));

        if (!(VAR_8->flags & VAR_5) && VAR_10 != VAR_0) {
            return VAR_3;
        }

        return VAR_2;
    }
    int VAR_11 = FUNC_2(VAR_8);
    if (VAR_8->stack_top == (size_t)-1)
        return FUNC_4(VAR_8, VAR_11);
    if (VAR_8->stack[VAR_8->stack_top].type == VAR_1) {
        if (VAR_8->stack[VAR_8->stack_top].count == 0) {
            if (VAR_11 == ']') {
                return FUNC_3(VAR_8, VAR_11, VAR_1);
            }
            VAR_8->stack[VAR_8->stack_top].count++;
            return FUNC_4(VAR_8, VAR_11);
        } else if (VAR_11 == ',') {
            VAR_8->stack[VAR_8->stack_top].count++;
            return FUNC_4(VAR_8, FUNC_2(VAR_8));
        } else if (VAR_11 == ']') {
            return FUNC_3(VAR_8, VAR_11, VAR_1);
        } else {
            FUNC_0(VAR_8, "unexpected byte, '%c'", VAR_11);
            return VAR_3;
        }
    } else if (VAR_8->stack[VAR_8->stack_top].type == VAR_6) {
        if (VAR_8->stack[VAR_8->stack_top].count == 0) {
            if (VAR_11 == '}') {
                return FUNC_3(VAR_8, VAR_11, VAR_6);
            }


            enum json_type VAR_12 = FUNC_4(VAR_8, VAR_11);
            if (VAR_12 != VAR_7) {
                FUNC_0(VAR_8, "%s", "expected property name or '}'");
                return VAR_3;
            } else {
                VAR_8->stack[VAR_8->stack_top].count++;
                return VAR_12;
            }
        } else if ((VAR_8->stack[VAR_8->stack_top].count % 2) == 0) {

            if (VAR_11 != ',' && VAR_11 != '}') {
                FUNC_0(VAR_8, "%s", "expected ',' or '}'");
                return VAR_3;
            } else if (VAR_11 == '}') {
                return FUNC_3(VAR_8, VAR_11, VAR_6);
            } else {
                enum json_type VAR_13 = FUNC_4(VAR_8, FUNC_2(VAR_8));
                if (VAR_13 != VAR_7) {
                    FUNC_0(VAR_8, "%s", "expected property name");
                    return VAR_3;
                } else {
                    VAR_8->stack[VAR_8->stack_top].count++;
                    return VAR_13;
                }
            }
        } else if ((VAR_8->stack[VAR_8->stack_top].count % 2) == 1) {

            if (VAR_11 != ':') {
                FUNC_0(VAR_8, "%s", "expected ':' after property name");
                return VAR_3;
            } else {
                VAR_8->stack[VAR_8->stack_top].count++;
                return FUNC_4(VAR_8, FUNC_2(VAR_8));
            }
        }
    }
    FUNC_0(VAR_8, "%s", "invalid parser state");
    return VAR_3;
}
