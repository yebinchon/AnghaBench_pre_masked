
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* cpMin; void* cpMax; } ;
typedef int LPARAM ;
typedef void* LONG ;
typedef int HWND ;
typedef TYPE_1__ CHARRANGE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(HWND VAR_1, LONG VAR_2)
{
  CHARRANGE VAR_3;
  VAR_3.cpMax = VAR_2;
  VAR_3.cpMin = VAR_2;
  FUNC_0(VAR_1, VAR_0, 0, (LPARAM)&VAR_3);
}
