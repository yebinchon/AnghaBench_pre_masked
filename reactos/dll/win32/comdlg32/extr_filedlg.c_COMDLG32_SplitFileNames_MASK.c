
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef char* LPWSTR ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

int FUNC_3(LPWSTR VAR_0, UINT VAR_1, LPWSTR *VAR_2, UINT *VAR_3)
{
 UINT VAR_4 = 0;
 UINT VAR_5 = 0;
 UINT VAR_6 = 0;



 *VAR_2 = FUNC_0((VAR_1 + 2) * sizeof(WCHAR));
 *VAR_3 = 0;


 while ( VAR_4 <= VAR_1 )
 {
   if ( VAR_0[VAR_4]=='"' )
   {
     VAR_4++;
     while ((VAR_4 <= VAR_1) && (VAR_0[VAR_4]!='"'))
     {
       (*VAR_2)[VAR_5++] = VAR_0[VAR_4];
       VAR_4++;
     }
     (*VAR_2)[VAR_5++] = 0;
     VAR_6++;
   }
   VAR_4++;
 }


 if ((VAR_1 > 0) && (VAR_5 == 0) )
 {
   FUNC_1(*VAR_2, VAR_0);
   VAR_5 = FUNC_2(VAR_0) + 1;
   VAR_6 = 1;
 }


        (*VAR_2)[VAR_5++] = '\0';

        *VAR_3 = VAR_5;
 return VAR_6;
}
