
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_6__ {size_t top; char** err_data; size_t* err_data_size; scalar_t__* err_data_flags; } ;
typedef TYPE_1__ ERR_STATE ;


 int FUNC_0 (char*,size_t,char const*,int ) ;
 size_t VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_1__*,size_t,int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,size_t,char*,size_t,unsigned long) ;
 int FUNC_5 (TYPE_1__*,size_t,int,int) ;

void FUNC_6(int VAR_3, int VAR_4, const char *VAR_5, va_list VAR_6)
{
    ERR_STATE *VAR_7;
    char *VAR_8 = ((void*)0);
    size_t VAR_9 = 0;
    unsigned long VAR_10 = 0;
    size_t VAR_11;

    VAR_7 = FUNC_3();
    if (VAR_7 == ((void*)0))
        return;
    VAR_11 = VAR_7->top;

    if (VAR_5 != ((void*)0)) {
        int VAR_12 = 0;
        char *VAR_13 = ((void*)0);

        VAR_8 = VAR_7->err_data[VAR_11];
        VAR_9 = VAR_7->err_data_size[VAR_11];
        VAR_7->err_data[VAR_11] = ((void*)0);
        VAR_7->err_data_flags[VAR_11] = 0;





        if (VAR_9 < VAR_0
            && (VAR_13 = FUNC_1(VAR_8, VAR_0)) != ((void*)0)) {
            VAR_8 = VAR_13;
            VAR_9 = VAR_0;
        }

        if (VAR_8 != ((void*)0)) {
            VAR_12 = FUNC_0(VAR_8, VAR_9, VAR_5, VAR_6);
        }
        if (VAR_12 < 0)
            VAR_12 = 0;
        VAR_8[VAR_12] = '\0';







        if ((VAR_13 = FUNC_1(VAR_8, VAR_12 + 1)) != ((void*)0)) {
            VAR_8 = VAR_13;
            VAR_9 = VAR_12 + 1;
        }

        if (VAR_8 != ((void*)0))
            VAR_10 = VAR_1 | VAR_2;
    }

    FUNC_2(VAR_7, VAR_7->top, 0);
    FUNC_5(VAR_7, VAR_7->top, VAR_3, VAR_4);
    if (VAR_5 != ((void*)0))
        FUNC_4(VAR_7, VAR_7->top, VAR_8, VAR_9, VAR_10);
}
