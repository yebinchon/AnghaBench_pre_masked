
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cp_static_data_t ;
struct TYPE_3__ {int doc_node; scalar_t__ window; } ;
typedef int IUnknown ;
typedef int IHTMLDocument2 ;
typedef TYPE_1__ HTMLDocument ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(IUnknown *VAR_0, cp_static_data_t *VAR_1)
{
    HTMLDocument *VAR_2 = FUNC_0((IHTMLDocument2*)VAR_0);

    if(VAR_2->window)
        FUNC_1(VAR_2->doc_node, VAR_1);
}
