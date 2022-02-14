
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct reader_position {int dummy; } ;
struct TYPE_11__ {struct reader_position position; } ;
struct TYPE_12__ {TYPE_1__ empty_element; int nodetype; struct reader_position position; } ;
typedef TYPE_2__ xmlreader ;
typedef char WCHAR ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int *) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_6 ;

__attribute__((used)) static HRESULT FUNC_8(xmlreader *VAR_7)
{
    static const WCHAR VAR_8[] = {'<','?','x','m','l',' ',0};
    static const WCHAR VAR_9[] = {'?','>',0};
    struct reader_position VAR_10;
    HRESULT VAR_11;


    if (FUNC_1(VAR_7, VAR_8))
        return VAR_0;

    FUNC_6(VAR_7, 2);
    VAR_10 = VAR_7->position;
    FUNC_6(VAR_7, 3);
    VAR_11 = FUNC_4(VAR_7);
    if (FUNC_0(VAR_11))
        return VAR_11;

    VAR_11 = FUNC_2(VAR_7);
    if (FUNC_0(VAR_11))
        return VAR_11;

    VAR_11 = FUNC_3(VAR_7);
    if (FUNC_0(VAR_11))
        return VAR_11;

    FUNC_7(VAR_7);
    if (FUNC_1(VAR_7, VAR_9))
        return VAR_4;


    FUNC_6(VAR_7, 2);

    VAR_7->nodetype = VAR_5;
    VAR_7->empty_element.position = VAR_10;
    FUNC_5(VAR_7, VAR_2, &VAR_6);
    FUNC_5(VAR_7, VAR_3, &VAR_6);

    return VAR_1;
}
