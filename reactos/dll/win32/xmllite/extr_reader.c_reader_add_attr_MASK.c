
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int attr_count; int attrs; } ;
typedef TYPE_1__ xmlreader ;
typedef void* strval ;
struct reader_position {int dummy; } ;
struct attribute {unsigned int flags; int entry; struct reader_position position; void* qname; void* prefix; int value; int localname; } ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (void**,int ,int) ;
 struct attribute* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,struct attribute*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,void**,int *) ;

__attribute__((used)) static HRESULT FUNC_6(xmlreader *VAR_2, strval *VAR_3, strval *VAR_4, strval *VAR_5,
    strval *VAR_6, const struct reader_position *VAR_7, unsigned int VAR_8)
{
    struct attribute *VAR_9;
    HRESULT VAR_10;

    VAR_9 = FUNC_2(VAR_2, sizeof(*VAR_9));
    if (!VAR_9) return VAR_0;

    VAR_10 = FUNC_5(VAR_2, VAR_4, &VAR_9->localname);
    if (VAR_10 == VAR_1)
    {
        VAR_10 = FUNC_5(VAR_2, VAR_6, &VAR_9->value);
        if (VAR_10 != VAR_1)
            FUNC_4(VAR_2, &VAR_9->value);
    }
    if (VAR_10 != VAR_1)
    {
        FUNC_3(VAR_2, VAR_9);
        return VAR_10;
    }

    if (VAR_3)
        VAR_9->prefix = *VAR_3;
    else
        FUNC_1(&VAR_9->prefix, 0, sizeof(VAR_9->prefix));
    VAR_9->qname = VAR_5 ? *VAR_5 : *VAR_4;
    VAR_9->position = *VAR_7;
    VAR_9->flags = VAR_8;
    FUNC_0(&VAR_2->attrs, &VAR_9->entry);
    VAR_2->attr_count++;

    return VAR_1;
}
