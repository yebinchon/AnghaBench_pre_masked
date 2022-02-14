
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {TYPE_1__* db; } ;
struct TYPE_5__ {int storage; } ;
typedef TYPE_2__ MSIPACKAGE ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_2 (int ,char const*,int ,int **,scalar_t__*) ;

__attribute__((used)) static UINT FUNC_3(MSIPACKAGE *VAR_3)
{
    BYTE *VAR_4;
    UINT VAR_5, VAR_6;

    static const WCHAR VAR_7[] = {'A','d','m','i','n','P','r','o','p','e','r','t','i','e','s',0};

    VAR_5 = FUNC_2(VAR_3->db->storage, VAR_7, VAR_1, &VAR_4, &VAR_6);
    if (VAR_5 != VAR_0)
        return VAR_5;

    VAR_5 = FUNC_1(VAR_3, (WCHAR *)VAR_4, VAR_2);

    FUNC_0(VAR_4);
    return VAR_5;
}
