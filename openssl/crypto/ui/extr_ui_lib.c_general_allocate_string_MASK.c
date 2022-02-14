
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef enum UI_string_types { ____Placeholder_UI_string_types } UI_string_types ;
struct TYPE_11__ {int result_minsize; int result_maxsize; char const* test_buf; } ;
struct TYPE_12__ {TYPE_1__ string_data; } ;
struct TYPE_13__ {TYPE_2__ _; } ;
typedef TYPE_3__ UI_STRING ;
struct TYPE_14__ {int strings; } ;
typedef TYPE_4__ UI ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,char const*,int,int,int,char*) ;
 int FUNC_3 (int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(UI *VAR_0, const char *VAR_1,
                                   int VAR_2,
                                   enum UI_string_types VAR_3, int VAR_4,
                                   char *VAR_5, int VAR_6, int VAR_7,
                                   const char *VAR_8)
{
    int VAR_9 = -1;
    UI_STRING *VAR_10 = FUNC_2(VAR_0, VAR_1, VAR_2,
                                           VAR_3, VAR_4, VAR_5);

    if (VAR_10 != ((void*)0)) {
        if (FUNC_0(VAR_0) >= 0) {
            VAR_10->_.string_data.result_minsize = VAR_6;
            VAR_10->_.string_data.result_maxsize = VAR_7;
            VAR_10->_.string_data.test_buf = VAR_8;
            VAR_9 = FUNC_3(VAR_0->strings, VAR_10);

            if (VAR_9 <= 0) {
                VAR_9--;
                FUNC_1(VAR_10);
            }
        } else
            FUNC_1(VAR_10);
    }
    return VAR_9;
}
