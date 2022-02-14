
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_9__ {int expanded; scalar_t__ down; int etype; } ;
struct TYPE_8__ {TYPE_2__ entry; } ;
typedef int SORT_ORDER ;
typedef TYPE_1__ Root ;
typedef char* PWSTR ;
typedef char* LPCWSTR ;
typedef int HWND ;
typedef int HCURSOR ;
typedef TYPE_2__ Entry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int ) ;

__attribute__((used)) static Entry* FUNC_4(Root* VAR_4, LPCWSTR VAR_5, SORT_ORDER VAR_6, HWND VAR_7)
{
 WCHAR VAR_8[VAR_2];
 Entry* VAR_9 = &VAR_4->entry;
 LPCWSTR VAR_10 = VAR_5;
 PWSTR VAR_11 = VAR_8;

 HCURSOR VAR_12 = FUNC_1(FUNC_0(0, (LPCWSTR)VAR_1));

 VAR_9->etype = VAR_0;
 while(VAR_9) {
  while(*VAR_10 && *VAR_10 != '\\' && *VAR_10 != '/')
   *VAR_11++ = *VAR_10++;

  while(*VAR_10 == '\\' || *VAR_10 == '/')
   VAR_10++;

  *VAR_11++ = '\\';
  *VAR_11 = '\0';

  FUNC_3(VAR_9, VAR_8, VAR_6, VAR_7);

  if (VAR_9->down)
   VAR_9->expanded = VAR_3;

  if (!*VAR_10)
   break;

  VAR_9 = FUNC_2(VAR_9, VAR_10);
 }

 FUNC_1(VAR_12);

 return VAR_9;
}
