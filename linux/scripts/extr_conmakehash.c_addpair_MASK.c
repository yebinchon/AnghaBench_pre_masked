
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int* VAR_2 ;
 int** VAR_3 ;

__attribute__((used)) static void FUNC_2(int VAR_4, int VAR_5)
{
  int VAR_6;

  if ( VAR_5 <= 0xfffe )
    {


      for ( VAR_6 = 0 ; VAR_6 < VAR_2[VAR_4] ; VAR_6++ )
 if ( VAR_3[VAR_4][VAR_6] == VAR_5 )
   return;



      if ( VAR_2[VAR_4] > 254 )
 {
   FUNC_1(VAR_1, "ERROR: Only 255 unicodes/glyph permitted!\n");
   FUNC_0(VAR_0);
 }

      VAR_3[VAR_4][VAR_2[VAR_4]] = VAR_5;
      VAR_2[VAR_4]++;
    }


}
