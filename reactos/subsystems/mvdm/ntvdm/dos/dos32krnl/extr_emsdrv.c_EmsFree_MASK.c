
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_9__ {struct TYPE_9__* Flink; } ;
struct TYPE_10__ {TYPE_1__ PageList; } ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef int PEMS_PAGE ;
typedef TYPE_2__* PEMS_HANDLE ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static UCHAR FUNC_7(USHORT VAR_6)
{
    PLIST_ENTRY VAR_7;
    PEMS_HANDLE VAR_8 = FUNC_3(VAR_6);

    if (!FUNC_6(VAR_8))
        return VAR_2;

    for (VAR_7 = VAR_8->PageList.Flink;
         VAR_7 != &VAR_8->PageList;
         VAR_7 = VAR_7->Flink)
    {
        PEMS_PAGE VAR_9 = (PEMS_PAGE)FUNC_1(VAR_7, VAR_1, VAR_7);
        ULONG VAR_10 = FUNC_0(VAR_9, VAR_5);


        FUNC_5(&VAR_0, VAR_10, 1);
    }

    FUNC_4(&VAR_8->PageList);

    if (VAR_6 != VAR_4)
        FUNC_2(VAR_8);

    return VAR_3;
}
