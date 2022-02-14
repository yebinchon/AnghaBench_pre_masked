
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_bidi_level ;
typedef int fz_bidi_chartype ;
 int FUNC_0 (int *,size_t,size_t,int ) ;

void FUNC_1(fz_bidi_level VAR_0, const fz_bidi_chartype *VAR_1, fz_bidi_level *VAR_2,
    size_t VAR_3)
{
 size_t VAR_4 = 0;
 fz_bidi_level VAR_5 = VAR_0;
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
 {
  switch(VAR_1[VAR_6])
  {
  default:
   VAR_4 = 0;
   break;
  case 128:
   VAR_4++;
   break;

  case 131:
  case 134:
  case 133:
  case 130:
  case 132:
  case 135:
   VAR_2[VAR_6] = VAR_5;
   VAR_4++;
   break;

  case 129:
  case 136:

   FUNC_0(VAR_2, VAR_4, VAR_6, VAR_0);
   VAR_4 = 0;
   VAR_2[VAR_6] = VAR_0;
   break;
  }
  VAR_5 = VAR_2[VAR_6];
 }

 FUNC_0(VAR_2, VAR_4, VAR_6, VAR_0);
}
