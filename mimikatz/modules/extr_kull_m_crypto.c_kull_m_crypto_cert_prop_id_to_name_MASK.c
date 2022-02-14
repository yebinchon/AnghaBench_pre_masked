
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t const id; char* name; } ;
typedef char* PCWCHAR ;
typedef size_t DWORD ;


 size_t FUNC_0 (TYPE_1__*) ;
 size_t const VAR_0 ;
 size_t const VAR_1 ;
 size_t const VAR_2 ;
 TYPE_1__* VAR_3 ;

PCWCHAR FUNC_1(const DWORD VAR_4)
{
 DWORD VAR_5;
 PCWCHAR VAR_6 = ((void*)0);
 for(VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++)
  if(VAR_3[VAR_5].id == VAR_4)
  {
   VAR_6 = VAR_3[VAR_5].name;
   break;
  }

 if(!VAR_6)
 {
  if((VAR_4 >= 36) && (VAR_4 <= 62))
   VAR_6 = L"CERT_unk_future_use";
  else if(VAR_4 == 63)
   VAR_6 = L"CERT_unk_63_maybe_future_use";
  else if ((VAR_4 >= 116) && (VAR_4 <= VAR_1))
   VAR_6 = L"CERT_reserved_prop_id";
  else if ((VAR_4 >= VAR_0) && (VAR_4 <= VAR_2))
   VAR_6 = L"CERT_user_prop_id";
 }
 return VAR_6 + 5;
}
