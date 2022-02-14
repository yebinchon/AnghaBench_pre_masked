
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int (* get ) (TYPE_2__*) ;int (* peek ) (TYPE_2__*) ;} ;
struct TYPE_14__ {TYPE_2__ source; } ;
typedef TYPE_1__ json_stream ;
typedef enum json_type { ____Placeholder_json_type } json_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (char*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static enum json_type
FUNC_13(json_stream *VAR_2, int VAR_3)
{
    if (FUNC_2(VAR_2, VAR_3) != 0)
        return VAR_0;
    if (VAR_3 == '-') {
        VAR_3 = VAR_2->source.get(&VAR_2->source);
        if (FUNC_0(VAR_3)) {
            return FUNC_13(VAR_2, VAR_3);
        } else {
            FUNC_1(VAR_2, "unexpected byte, '%c'", VAR_3);
        }
    } else if (FUNC_4("123456789", VAR_3) != ((void*)0)) {
        VAR_3 = VAR_2->source.peek(&VAR_2->source);
        if (FUNC_0(VAR_3)) {
            if (FUNC_3(VAR_2) != 0)
                return VAR_0;
        }
    }

    VAR_3 = VAR_2->source.peek(&VAR_2->source);
    if (FUNC_4(".eE", VAR_3) == ((void*)0)) {
        if (FUNC_2(VAR_2, '\0') != 0)
            return VAR_0;
        else
            return VAR_1;
    }
    if (VAR_3 == '.') {
        VAR_2->source.get(&VAR_2->source);
        if (FUNC_2(VAR_2, VAR_3) != 0)
            return VAR_0;
        if (FUNC_3(VAR_2) != 0)
            return VAR_0;
    }

    VAR_3 = VAR_2->source.peek(&VAR_2->source);
    if (VAR_3 == 'e' || VAR_3 == 'E') {
        VAR_2->source.get(&VAR_2->source);
        if (FUNC_2(VAR_2, VAR_3) != 0)
            return VAR_0;
        VAR_3 = VAR_2->source.peek(&VAR_2->source);
        if (VAR_3 == '+' || VAR_3 == '-') {
            VAR_2->source.get(&VAR_2->source);
            if (FUNC_2(VAR_2, VAR_3) != 0)
                return VAR_0;
            if (FUNC_3(VAR_2) != 0)
                return VAR_0;
        } else if (FUNC_0(VAR_3)) {
            if (FUNC_3(VAR_2) != 0)
                return VAR_0;
        } else {
            FUNC_1(VAR_2, "unexpected byte in number, '%c'", VAR_3);
            return VAR_0;
        }
    }
    if (FUNC_2(VAR_2, '\0') != 0)
        return VAR_0;
    else
        return VAR_1;
}
