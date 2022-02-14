
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct reader_position {int dummy; } ;
struct element {struct reader_position position; int localname; int qname; int prefix; } ;
struct TYPE_12__ {int is_empty_element; struct element empty_element; struct reader_position position; } ;
typedef TYPE_1__ xmlreader ;
typedef int strval ;
typedef char WCHAR ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 char const* VAR_1 ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,struct element*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_6 (TYPE_1__*,int *,int *,int *,struct reader_position*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_10(xmlreader *VAR_2, strval *VAR_3, strval *VAR_4, strval *VAR_5)
{
    struct reader_position VAR_6 = VAR_2->position;
    HRESULT VAR_7;

    VAR_7 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);
    if (FUNC_0(VAR_7)) return VAR_7;

    for (;;)
    {
        static const WCHAR VAR_8[] = {'/','>',0};

        FUNC_8(VAR_2);


        if ((VAR_2->is_empty_element = !FUNC_1(VAR_2, VAR_8)))
        {
            struct element *VAR_9 = &VAR_2->empty_element;


            FUNC_7(VAR_2, 2);

            FUNC_2(VAR_2, &VAR_9->qname);
            FUNC_2(VAR_2, &VAR_9->localname);

            VAR_9->prefix = *VAR_3;
            FUNC_9(VAR_2, VAR_5, &VAR_9->qname);
            FUNC_9(VAR_2, VAR_4, &VAR_9->localname);
            VAR_9->position = VAR_6;
            FUNC_3(VAR_2, VAR_9);
            return VAR_0;
        }


        if (!FUNC_1(VAR_2, VAR_1))
        {

            FUNC_7(VAR_2, 1);
            return FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6);
        }

        VAR_7 = FUNC_4(VAR_2);
        if (FUNC_0(VAR_7)) return VAR_7;
    }

    return VAR_0;
}
