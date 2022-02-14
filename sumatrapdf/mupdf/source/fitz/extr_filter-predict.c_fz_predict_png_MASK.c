
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bpp; unsigned char* ref; } ;
typedef TYPE_1__ fz_predict ;
typedef int fz_context ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_predict *VAR_1, unsigned char *VAR_2, unsigned char *VAR_3, size_t VAR_4, int VAR_5)
{
 int VAR_6 = VAR_1->bpp;
 size_t VAR_7;
 unsigned char *VAR_8 = VAR_1->ref;

 if ((size_t)VAR_6 > VAR_4)
  VAR_6 = (int)VAR_4;

 switch (VAR_5)
 {
 default:
  FUNC_0(VAR_0, "unknown png predictor %d, treating as none", VAR_5);

 case 0:
  FUNC_1(VAR_2, VAR_3, VAR_4);
  break;
 case 1:
  for (VAR_7 = VAR_6; VAR_7 > 0; VAR_7--)
  {
   *VAR_2++ = *VAR_3++;
  }
  for (VAR_7 = VAR_4 - VAR_6; VAR_7 > 0; VAR_7--)
  {
   *VAR_2 = *VAR_3++ + VAR_2[-VAR_6];
   VAR_2++;
  }
  break;
 case 2:
  for (VAR_7 = VAR_6; VAR_7 > 0; VAR_7--)
  {
   *VAR_2++ = *VAR_3++ + *VAR_8++;
  }
  for (VAR_7 = VAR_4 - VAR_6; VAR_7 > 0; VAR_7--)
  {
   *VAR_2++ = *VAR_3++ + *VAR_8++;
  }
  break;
 case 3:
  for (VAR_7 = VAR_6; VAR_7 > 0; VAR_7--)
  {
   *VAR_2++ = *VAR_3++ + (*VAR_8++) / 2;
  }
  for (VAR_7 = VAR_4 - VAR_6; VAR_7 > 0; VAR_7--)
  {
   *VAR_2 = *VAR_3++ + (VAR_2[-VAR_6] + *VAR_8++) / 2;
   VAR_2++;
  }
  break;
 case 4:
  for (VAR_7 = VAR_6; VAR_7 > 0; VAR_7--)
  {
   *VAR_2++ = *VAR_3++ + FUNC_2(0, *VAR_8++, 0);
  }
  for (VAR_7 = VAR_4 - VAR_6; VAR_7 > 0; VAR_7 --)
  {
   *VAR_2 = *VAR_3++ + FUNC_2(VAR_2[-VAR_6], *VAR_8, VAR_8[-VAR_6]);
   VAR_8++;
   VAR_2++;
  }
  break;
 }
}
