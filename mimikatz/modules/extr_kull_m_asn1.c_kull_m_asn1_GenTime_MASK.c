
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_3__ {int wSecond; int wMinute; int wHour; int wDay; int wMonth; int wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int PFILETIME ;
typedef int BerElement ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int *,char*,int ,char*,int) ;
 scalar_t__ FUNC_2 (char*,int,char*,int ,int ,int ,int ,int ,int ) ;

void FUNC_3(BerElement * VAR_1, PFILETIME VAR_2)
{
 SYSTEMTIME VAR_3;
 char VAR_4[4 + 2 + 2 + 2 + 2 + 2 + 1 + 1];
 if(FUNC_0(VAR_2, &VAR_3))
  if(FUNC_2(VAR_4, sizeof(VAR_4), "%04hu%02hu%02hu%02hu%02hu%02huZ", VAR_3.wYear, VAR_3.wMonth, VAR_3.wDay, VAR_3.wHour, VAR_3.wMinute, VAR_3.wSecond) > 0)
   FUNC_1(VAR_1, "to", VAR_0, VAR_4, sizeof(VAR_4) - 1);
}
