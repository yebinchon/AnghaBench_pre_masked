
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 long FUNC_2 (int ,int ,int ,long) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7( HWND VAR_2, int VAR_3 )
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 long VAR_9;
 char VAR_10[30];

 FUNC_1(VAR_2, VAR_10, FUNC_0(VAR_10));
 VAR_6 = FUNC_6(VAR_10);
 VAR_7 = 0;

 for (VAR_4 = 0 ; VAR_4 < VAR_6 ; VAR_4++)
  if (VAR_10[VAR_4] < '0' || VAR_10[VAR_4] > '9')
  {
   for (VAR_5 = VAR_4 + 1; VAR_5 <= VAR_6; VAR_5++)
   {
    VAR_10[VAR_4] = VAR_10[VAR_5];
    VAR_6--;
   }
   VAR_10[VAR_6] = 0;
   VAR_7 = 1;
  }

 VAR_8 = FUNC_4(VAR_10);
 if (VAR_8 > VAR_3)
 {
  FUNC_5(VAR_10, "%d", VAR_3);
  VAR_7 = 2;
 }
 if (VAR_7)
 {
  VAR_9 = FUNC_2(VAR_2, VAR_0, 0, 0);
  FUNC_3(VAR_2, VAR_10 );
  FUNC_2(VAR_2, VAR_1, 0, VAR_9);
 }
 return VAR_8;
}
