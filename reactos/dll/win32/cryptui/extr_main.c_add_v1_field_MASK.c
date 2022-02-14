
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v1_field {int create_detailed_value; int id; int * (* format ) (int ) ;} ;
struct detail_data {TYPE_1__* pCertViewInfo; } ;
typedef int WCHAR ;
struct TYPE_2__ {int pCertContext; } ;
typedef int HWND ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,struct detail_data*,int ,int *,int ,int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(HWND VAR_0, struct detail_data *VAR_1,
 const struct v1_field *VAR_2)
{
    WCHAR *VAR_3 = VAR_2->format(VAR_1->pCertViewInfo->pCertContext);

    if (VAR_3)
    {
        FUNC_2(VAR_0, VAR_1, VAR_2->id, VAR_3,
         VAR_2->create_detailed_value, ((void*)0));
        FUNC_1(FUNC_0(), 0, VAR_3);
    }
}
