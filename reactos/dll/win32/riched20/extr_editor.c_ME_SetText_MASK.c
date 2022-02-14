
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pBuffer; } ;
struct TYPE_5__ {int pDefaultStyle; } ;
typedef TYPE_2__ ME_TextEditor ;
typedef int LPWSTR ;
typedef int LONG ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int,int ) ;
 int FUNC_2 (int ,void*,int*) ;

__attribute__((used)) static void FUNC_3(ME_TextEditor *VAR_2, void *VAR_3, BOOL VAR_4)
{
  LONG VAR_5 = VAR_4 ? VAR_1 : VAR_0;
  int VAR_6;

  LPWSTR VAR_7 = FUNC_2(VAR_5, VAR_3, &VAR_6);
  FUNC_1(VAR_2, 0, VAR_7, VAR_6, VAR_2->pBuffer->pDefaultStyle);
  FUNC_0(VAR_5, VAR_7);
}
