
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef enum UI_string_types { ____Placeholder_UI_string_types } UI_string_types ;
struct TYPE_11__ {char const* action_desc; char const* ok_chars; char const* cancel_chars; } ;
struct TYPE_12__ {TYPE_1__ boolean_data; } ;
struct TYPE_13__ {TYPE_2__ _; } ;
typedef TYPE_3__ UI_STRING ;
struct TYPE_14__ {int strings; } ;
typedef TYPE_4__ UI ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,char const*,int,int,int,char*) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int * FUNC_5 (char const*,char const) ;

__attribute__((used)) static int FUNC_6(UI *VAR_3,
                                    const char *VAR_4,
                                    const char *VAR_5,
                                    const char *VAR_6,
                                    const char *VAR_7,
                                    int VAR_8,
                                    enum UI_string_types VAR_9,
                                    int VAR_10, char *VAR_11)
{
    int VAR_12 = -1;
    UI_STRING *VAR_13;
    const char *VAR_14;

    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_0);
    } else if (VAR_7 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_0);
    } else {
        for (VAR_14 = VAR_6; *VAR_14 != '\0'; VAR_14++) {
            if (FUNC_5(VAR_7, *VAR_14) != ((void*)0)) {
                FUNC_0(VAR_1,
                      VAR_2);
            }
        }

        VAR_13 = FUNC_3(VAR_3, VAR_4, VAR_8,
                                    VAR_9, VAR_10, VAR_11);

        if (VAR_13 != ((void*)0)) {
            if (FUNC_1(VAR_3) >= 0) {
                VAR_13->_.boolean_data.action_desc = VAR_5;
                VAR_13->_.boolean_data.ok_chars = VAR_6;
                VAR_13->_.boolean_data.cancel_chars = VAR_7;
                VAR_12 = FUNC_4(VAR_3->strings, VAR_13);



                if (VAR_12 <= 0) {
                    VAR_12--;
                    FUNC_2(VAR_13);
                }
            } else
                FUNC_2(VAR_13);
        }
    }
    return VAR_12;
}
