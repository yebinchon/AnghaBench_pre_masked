
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct reader_position {int dummy; } ;
struct TYPE_11__ {struct reader_position position; } ;
struct TYPE_12__ {scalar_t__ resumestate; void* nodetype; scalar_t__* resume; TYPE_1__ empty_element; struct reader_position position; } ;
typedef TYPE_2__ xmlreader ;
typedef int strval ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 char* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__,scalar_t__,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int) ;

__attribute__((used)) static HRESULT FUNC_9(xmlreader *VAR_8)
{
    struct reader_position VAR_9;
    WCHAR *VAR_10;
    UINT VAR_11;

    if (VAR_8->resumestate == VAR_5)
    {
        VAR_11 = VAR_8->resume[VAR_7];
        VAR_10 = FUNC_3(VAR_8);
    }
    else
    {
        FUNC_7(VAR_8);
        VAR_10 = FUNC_3(VAR_8);
        VAR_11 = FUNC_2(VAR_8);

        if (!*VAR_10 || *VAR_10 == '<') return VAR_0;
        VAR_8->nodetype = FUNC_0(*VAR_10) ? VAR_4 : VAR_3;
        VAR_8->resume[VAR_7] = VAR_11;
        VAR_8->resumestate = VAR_5;
        FUNC_6(VAR_8, VAR_1, ((void*)0));
    }

    VAR_9 = VAR_8->position;
    while (*VAR_10)
    {
        static const WCHAR VAR_12[] = {'&',0};


        if (VAR_10[0] == ']' && VAR_10[1] == ']' && VAR_10[2] == '>')
            return VAR_2;


        if (VAR_10[0] == '<')
        {
            strval VAR_13;

            VAR_8->empty_element.position = VAR_9;
            FUNC_4(VAR_11, FUNC_2(VAR_8)-VAR_11, &VAR_13);
            FUNC_6(VAR_8, VAR_1, &VAR_13);
            VAR_8->resume[VAR_7] = 0;
            VAR_8->resumestate = VAR_6;
            return VAR_0;
        }


        if (!FUNC_0(*VAR_10)) VAR_8->nodetype = VAR_3;

        if (!FUNC_1(VAR_8, VAR_12))
            FUNC_5(VAR_8);
        else
            FUNC_8(VAR_8, 1);

        VAR_10 = FUNC_3(VAR_8);
    }

    return VAR_0;
}
