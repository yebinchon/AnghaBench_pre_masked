
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ fz_bidi_chartype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(fz_bidi_chartype *VAR_2, int VAR_3)
{
 int VAR_4;


 for(VAR_4 = 0; VAR_4 < VAR_3 && VAR_2[VAR_4] != VAR_0; VAR_4++)
  ;

 if (VAR_4 < VAR_3 && VAR_2[VAR_4] == VAR_0)
  VAR_2[VAR_4++] = VAR_1;
 return VAR_4;
}
