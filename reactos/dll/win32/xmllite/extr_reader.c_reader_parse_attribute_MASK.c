
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct reader_position {int dummy; } ;
struct TYPE_10__ {struct reader_position position; } ;
typedef TYPE_1__ xmlreader ;
typedef int strval ;
typedef enum attribute_flags { ____Placeholder_attribute_flags } attribute_flags ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *,int *,int *,struct reader_position*,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_7 (TYPE_1__*,int *,int *,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_9(xmlreader *VAR_3)
{
    struct reader_position VAR_4 = VAR_3->position;
    strval VAR_5, VAR_6, VAR_7, VAR_8;
    enum attribute_flags VAR_9 = 0;
    HRESULT VAR_10;

    VAR_10 = FUNC_6(VAR_3, &VAR_5, &VAR_6, &VAR_7);
    if (FUNC_0(VAR_10)) return VAR_10;

    if (FUNC_8(VAR_3, &VAR_5, &VAR_2))
        VAR_9 |= VAR_1;

    if (FUNC_8(VAR_3, &VAR_7, &VAR_2))
        VAR_9 |= VAR_0;

    VAR_10 = FUNC_5(VAR_3);
    if (FUNC_0(VAR_10)) return VAR_10;

    VAR_10 = FUNC_4(VAR_3, &VAR_8);
    if (FUNC_0(VAR_10)) return VAR_10;

    if (VAR_9 & (VAR_1 | VAR_0))
        FUNC_7(VAR_3, &VAR_6, &VAR_8, !!(VAR_9 & VAR_0));

    FUNC_1("%s=%s\n", FUNC_2(VAR_3, &VAR_6), FUNC_2(VAR_3, &VAR_8));
    return FUNC_3(VAR_3, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_4, VAR_9);
}
