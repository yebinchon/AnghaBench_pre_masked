
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taskdialog_info {int callback_data; int hwnd; int (* callback ) (int ,int ,int ,int ,int ) ;} ;
typedef int WPARAM ;
typedef int UINT ;
typedef int LPARAM ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_1(struct taskdialog_info *VAR_1, UINT VAR_2, WPARAM VAR_3, LPARAM VAR_4)
{
    return VAR_1->callback ? VAR_1->callback(VAR_1->hwnd, VAR_2, VAR_3, VAR_4,
            VAR_1->callback_data) : VAR_0;
}
