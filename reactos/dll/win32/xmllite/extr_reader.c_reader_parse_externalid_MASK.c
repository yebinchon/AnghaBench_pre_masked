
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct reader_position {int dummy; } ;
struct TYPE_9__ {struct reader_position position; } ;
typedef TYPE_1__ xmlreader ;
typedef int strval ;
typedef char WCHAR ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int *,int *,int *,struct reader_position*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (char*,int ,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static HRESULT FUNC_9(xmlreader *VAR_3)
{
    static WCHAR VAR_4[] = {'S','Y','S','T','E','M',0};
    static WCHAR VAR_5[] = {'P','U','B','L','I','C',0};
    struct reader_position VAR_6 = VAR_3->position;
    strval VAR_7, VAR_8;
    HRESULT VAR_9;
    int VAR_10;

    if (!FUNC_2(VAR_3, VAR_5)) {
        strval VAR_11;


        FUNC_6(VAR_3, 6);
        VAR_10 = FUNC_7(VAR_3);
        if (!VAR_10) return VAR_2;

        VAR_9 = FUNC_4(VAR_3, &VAR_11);
        if (FUNC_0(VAR_9)) return VAR_9;

        FUNC_3(VAR_5, FUNC_8(VAR_5), &VAR_7);
        VAR_9 = FUNC_1(VAR_3, ((void*)0), &VAR_7, ((void*)0), &VAR_11, &VAR_6, 0);
        if (FUNC_0(VAR_9)) return VAR_9;

        VAR_10 = FUNC_7(VAR_3);
        if (!VAR_10) return VAR_1;


        VAR_9 = FUNC_5(VAR_3, &VAR_8);
        if (FUNC_0(VAR_9)) return VAR_1;

        FUNC_3(VAR_4, FUNC_8(VAR_4), &VAR_7);
        VAR_9 = FUNC_1(VAR_3, ((void*)0), &VAR_7, ((void*)0), &VAR_8, &VAR_6, 0);
        if (FUNC_0(VAR_9)) return VAR_9;

        return VAR_1;
    } else if (!FUNC_2(VAR_3, VAR_4)) {

        FUNC_6(VAR_3, 6);
        VAR_10 = FUNC_7(VAR_3);
        if (!VAR_10) return VAR_2;

        VAR_9 = FUNC_5(VAR_3, &VAR_8);
        if (FUNC_0(VAR_9)) return VAR_9;

        FUNC_3(VAR_4, FUNC_8(VAR_4), &VAR_7);
        return FUNC_1(VAR_3, ((void*)0), &VAR_7, ((void*)0), &VAR_8, &VAR_6, 0);
    }

    return VAR_0;
}
