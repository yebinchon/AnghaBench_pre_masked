
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nodes_test {TYPE_1__* nodes; int xml; } ;
struct TYPE_2__ {scalar_t__ type; int value; } ;
typedef int IXmlReader ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,void**,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct nodes_test VAR_3 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
    struct nodes_test *VAR_4 = &VAR_3;
    IXmlReader *VAR_5;
    HRESULT VAR_6;
    int VAR_7;

    VAR_6 = FUNC_0(&VAR_0, (void**)&VAR_5, ((void*)0));
    FUNC_2(VAR_6 == VAR_1, "S_OK, got %08x\n", VAR_6);

    FUNC_5(VAR_5, VAR_4->xml);

    VAR_7 = 0;
    do
    {
        FUNC_3(VAR_5, VAR_4->nodes[VAR_7].type);
        FUNC_4(VAR_5, VAR_4->nodes[VAR_7].value);
    } while(VAR_4->nodes[VAR_7++].type != VAR_2);

    FUNC_1(VAR_5);
}
