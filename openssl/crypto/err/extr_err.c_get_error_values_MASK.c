
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bottom; int top; int* err_flags; unsigned long* err_buffer; char** err_file; int* err_line; char** err_func; int* err_data_flags; char** err_data; } ;
typedef TYPE_1__ ERR_STATE ;
typedef scalar_t__ ERR_GET_ACTION ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 TYPE_1__* FUNC_2 () ;

__attribute__((used)) static unsigned long FUNC_3(ERR_GET_ACTION VAR_4,
                                      const char **VAR_5, int *VAR_6,
                                      const char **VAR_7,
                                      const char **VAR_8, int *VAR_9)
{
    int VAR_10 = 0;
    ERR_STATE *VAR_11;
    unsigned long VAR_12;

    VAR_11 = FUNC_2();
    if (VAR_11 == ((void*)0))
        return 0;





    while (VAR_11->bottom != VAR_11->top) {
        if (VAR_11->err_flags[VAR_11->top] & VAR_0) {
            FUNC_0(VAR_11, VAR_11->top, 0);
            VAR_11->top = VAR_11->top > 0 ? VAR_11->top - 1 : VAR_1 - 1;
            continue;
        }
        VAR_10 = (VAR_11->bottom + 1) % VAR_1;
        if (VAR_11->err_flags[VAR_10] & VAR_0) {
            VAR_11->bottom = VAR_10;
            FUNC_0(VAR_11, VAR_11->bottom, 0);
            continue;
        }
        break;
    }


    if (VAR_11->bottom == VAR_11->top)
        return 0;


    if (VAR_4 == VAR_2)
        VAR_10 = VAR_11->top;
    else
        VAR_10 = (VAR_11->bottom + 1) % VAR_1;

    VAR_12 = VAR_11->err_buffer[VAR_10];
    if (VAR_4 == VAR_3) {
        VAR_11->bottom = VAR_10;
        VAR_11->err_buffer[VAR_10] = 0;
    }

    if (VAR_5 != ((void*)0)) {
        *VAR_5 = VAR_11->err_file[VAR_10];
        if (*VAR_5 == ((void*)0))
            *VAR_5 = "";
    }
    if (VAR_6 != ((void*)0))
        *VAR_6 = VAR_11->err_line[VAR_10];
    if (VAR_7 != ((void*)0)) {
        *VAR_7 = VAR_11->err_func[VAR_10];
        if (*VAR_7 == ((void*)0))
            *VAR_7 = "";
    }
    if (VAR_9 != ((void*)0))
        *VAR_9 = VAR_11->err_data_flags[VAR_10];
    if (VAR_8 == ((void*)0)) {
        if (VAR_4 == VAR_3) {
            FUNC_1(VAR_11, VAR_10, 0);
        }
    } else {
        *VAR_8 = VAR_11->err_data[VAR_10];
        if (*VAR_8 == ((void*)0)) {
            *VAR_8 = "";
            if (VAR_9 != ((void*)0))
                *VAR_9 = 0;
        }
    }
    return VAR_12;
}
