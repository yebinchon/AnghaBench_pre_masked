
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int is_empty_element; int elements; } ;
typedef TYPE_1__ xmlreader ;
typedef int strval ;
struct reader_position {int dummy; } ;
struct element {struct reader_position position; int entry; int qname; int localname; int prefix; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 struct element* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,struct element*) ;
 int FUNC_3 (TYPE_1__*,struct element*) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_5(xmlreader *VAR_3, strval *VAR_4, strval *VAR_5,
    strval *VAR_6, const struct reader_position *VAR_7)
{
    struct element *VAR_8;
    HRESULT VAR_9;

    VAR_8 = FUNC_1(VAR_3, sizeof(*VAR_8));
    if (!VAR_8)
        return VAR_0;

    if ((VAR_9 = FUNC_4(VAR_3, VAR_4, &VAR_8->prefix)) == VAR_2 &&
            (VAR_9 = FUNC_4(VAR_3, VAR_5, &VAR_8->localname)) == VAR_2 &&
            (VAR_9 = FUNC_4(VAR_3, VAR_6, &VAR_8->qname)) == VAR_2)
    {
        FUNC_0(&VAR_3->elements, &VAR_8->entry);
        FUNC_3(VAR_3, VAR_8);
        VAR_3->is_empty_element = VAR_1;
        VAR_8->position = *VAR_7;
    }
    else
        FUNC_2(VAR_3, VAR_8);

    return VAR_9;
}
