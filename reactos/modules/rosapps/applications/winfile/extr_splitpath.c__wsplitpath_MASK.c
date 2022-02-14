
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (char const*) ;

void FUNC_1(const WCHAR* VAR_0, WCHAR* VAR_1, WCHAR* VAR_2, WCHAR* VAR_3, WCHAR* VAR_4)
{
        const WCHAR* VAR_5;
 const WCHAR* VAR_6;
 const WCHAR* VAR_7;


 if (VAR_0[0] && VAR_0[1]==':') {
  if (VAR_1) {
   *VAR_1++ = *VAR_0++;
   *VAR_1++ = *VAR_0++;
   *VAR_1 = '\0';
  }
 } else if (VAR_1)
  *VAR_1 = '\0';


    VAR_5 = VAR_0 + FUNC_0(VAR_0);


 for(VAR_6=VAR_5; VAR_6>VAR_0 && *--VAR_6!='\\' && *VAR_6!='/'; )
  if (*VAR_6 == '.') {
   VAR_5 = VAR_6;
   break;
  }

 if (VAR_4)
  for(VAR_7=VAR_5; (*VAR_4=*VAR_7++); )
   VAR_4++;


 for(VAR_6=VAR_5; VAR_6>VAR_0; )
  if (*--VAR_6=='\\' || *VAR_6=='/') {
   VAR_6++;
   break;
  }

 if (VAR_3) {
  for(VAR_7=VAR_6; VAR_7<VAR_5; )
   *VAR_3++ = *VAR_7++;

  *VAR_3 = '\0';
 }

 if (VAR_2) {
  for(VAR_7=VAR_0; VAR_7<VAR_6; )
   *VAR_2++ = *VAR_7++;

  *VAR_2 = '\0';
 }
}
