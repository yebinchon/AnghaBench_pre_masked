
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* db; } ;
struct TYPE_8__ {int * storage; int str_index; } ;
struct TYPE_7__ {int strings; } ;
typedef TYPE_2__ STORAGE ;
typedef TYPE_3__ MSISTORAGESVIEW ;
typedef int LPCWSTR ;
typedef int IStorage ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int,int ) ;
 TYPE_2__* FUNC_2 (int) ;

__attribute__((used)) static STORAGE *FUNC_3(MSISTORAGESVIEW *VAR_1, LPCWSTR VAR_2, IStorage *VAR_3)
{
    STORAGE *VAR_4;

    VAR_4 = FUNC_2(sizeof(STORAGE));
    if (!VAR_4)
        return ((void*)0);

    VAR_4->str_index = FUNC_1(VAR_1->db->strings, VAR_2, -1, VAR_0);
    VAR_4->storage = VAR_3;

    if (VAR_4->storage)
        FUNC_0(VAR_4->storage);

    return VAR_4;
}
