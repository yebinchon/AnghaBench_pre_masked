
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int * title; int filename; } ;
typedef TYPE_1__ SearchItem ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,int const*,int) ;

__attribute__((used)) static SearchItem *FUNC_4(WCHAR *VAR_0, const WCHAR *VAR_1)
{
    int VAR_2 = VAR_1 ? (FUNC_2(VAR_1)+1)*sizeof(WCHAR) : 0;
    SearchItem *VAR_3;

    VAR_3 = FUNC_1(sizeof(SearchItem));
    if(VAR_1)
    {
        VAR_3->filename = FUNC_0(VAR_2);
        FUNC_3(VAR_3->filename, VAR_1, VAR_2);
    }
    VAR_3->title = VAR_0;

    return VAR_3;
}
