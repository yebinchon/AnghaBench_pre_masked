
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Int32 ;
typedef char Char ;
typedef int Bool ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static Bool FUNC_1 ( Char* VAR_1 )
{
   Int32 VAR_2 = FUNC_0 ( VAR_1 );
   if (VAR_2 <= 4) return VAR_0;
   return
      (VAR_1[VAR_2-4] == '.' &&
       VAR_1[VAR_2-3] == 'b' &&
       VAR_1[VAR_2-2] == 'z' &&
       VAR_1[VAR_2-1] == '2');
}
