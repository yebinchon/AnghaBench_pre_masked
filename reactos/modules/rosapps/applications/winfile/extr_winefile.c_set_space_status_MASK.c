
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int buffer ;
typedef int __ms_va_list ;
typedef int WCHAR ;
struct TYPE_6__ {int QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
struct TYPE_7__ {int hstatusbar; } ;
typedef int LPARAM ;
typedef scalar_t__ DWORD_PTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int ,int *,int,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(void)
{
 ULARGE_INTEGER VAR_7, VAR_8, VAR_9;
 WCHAR VAR_10[64], VAR_11[64], VAR_12[64], VAR_13[VAR_0];

 if (FUNC_1(((void*)0), &VAR_7, &VAR_8, &VAR_9)) {
  DWORD_PTR VAR_14[2];
  FUNC_4(VAR_11, VAR_7.QuadPart);
  FUNC_4(VAR_12, VAR_8.QuadPart);
  VAR_14[0] = (DWORD_PTR)VAR_11;
  VAR_14[1] = (DWORD_PTR)VAR_12;
  FUNC_0(VAR_2|VAR_1,
                 FUNC_2(VAR_10,VAR_4), 0, 0, VAR_13,
                 sizeof(VAR_13)/sizeof(*VAR_13), (__ms_va_list*)VAR_14);
 } else
  FUNC_5(VAR_13, VAR_6);

 FUNC_3(VAR_3.hstatusbar, VAR_5, 0, (LPARAM)VAR_13);
}
