
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int mime; } ;
typedef int BOOL ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int const*,int ) ;

__attribute__((used)) static BOOL FUNC_2(const WCHAR *VAR_4)
{
    unsigned VAR_5;

    for(VAR_5=0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
        if(!FUNC_1(VAR_4, VAR_3[VAR_5].mime))
            return VAR_1;
    }

    for(VAR_5=0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
        if(!FUNC_1(VAR_4, VAR_2[VAR_5].mime))
            return VAR_1;
    }

    return VAR_0;
}
