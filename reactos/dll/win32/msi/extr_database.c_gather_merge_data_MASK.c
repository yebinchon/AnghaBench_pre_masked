
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct list {int dummy; } ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {struct list* tabledata; int * merge; int * db; } ;
struct TYPE_6__ {int hdr; } ;
typedef TYPE_1__ MSIQUERY ;
typedef int MSIDATABASE ;
typedef TYPE_2__ MERGEDATA ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*,TYPE_1__**) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static UINT FUNC_3(MSIDATABASE *VAR_2, MSIDATABASE *VAR_3,
                              struct list *VAR_4)
{
    static const WCHAR VAR_5[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        '`','_','T','a','b','l','e','s','`',0};
    MSIQUERY *VAR_6;
    MERGEDATA VAR_7;
    UINT VAR_8;

    VAR_8 = FUNC_0(VAR_3, VAR_5, &VAR_6);
    if (VAR_8 != VAR_0)
        return VAR_8;

    VAR_7.db = VAR_2;
    VAR_7.merge = VAR_3;
    VAR_7.tabledata = VAR_4;
    VAR_8 = FUNC_1(VAR_6, ((void*)0), VAR_1, &VAR_7);
    FUNC_2(&VAR_6->hdr);
    return VAR_8;
}
