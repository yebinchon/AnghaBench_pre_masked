
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int tokenType; int len; int const* name; } ;
typedef TYPE_1__ Keyword ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ,int ,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(const WCHAR *VAR_4, int VAR_5){
  Keyword VAR_6, *VAR_7;

  if( VAR_5>VAR_0 )
    return VAR_1;

  VAR_6.tokenType = 0;
  VAR_6.name = VAR_4;
  VAR_6.len = VAR_5;
  VAR_7 = FUNC_1( &VAR_6, VAR_2, FUNC_0(VAR_2), sizeof(Keyword), VAR_3 );
  if( VAR_7 )
    return VAR_7->tokenType;
  return VAR_1;
}
