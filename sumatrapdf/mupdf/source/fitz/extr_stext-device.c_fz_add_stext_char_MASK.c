
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ fz_stext_device ;
typedef int fz_matrix ;
typedef int fz_font ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int *,int,int,int ,float,int) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_2, fz_stext_device *VAR_3, fz_font *VAR_4, int VAR_5, int VAR_6, fz_matrix VAR_7, float VAR_8, int VAR_9)
{

 if (VAR_5 == -1)
  return;

 if (!(VAR_3->flags & VAR_0))
 {
  switch (VAR_5)
  {
  case 0xFB00:
   FUNC_0(VAR_2, VAR_3, VAR_4, 'f', VAR_6, VAR_7, VAR_8, VAR_9);
   FUNC_0(VAR_2, VAR_3, VAR_4, 'f', -1, VAR_7, 0, VAR_9);
   return;
  case 0xFB01:
   FUNC_0(VAR_2, VAR_3, VAR_4, 'f', VAR_6, VAR_7, VAR_8, VAR_9);
   FUNC_0(VAR_2, VAR_3, VAR_4, 'i', -1, VAR_7, 0, VAR_9);
   return;
  case 0xFB02:
   FUNC_0(VAR_2, VAR_3, VAR_4, 'f', VAR_6, VAR_7, VAR_8, VAR_9);
   FUNC_0(VAR_2, VAR_3, VAR_4, 'l', -1, VAR_7, 0, VAR_9);
   return;
  case 0xFB03:
   FUNC_0(VAR_2, VAR_3, VAR_4, 'f', VAR_6, VAR_7, VAR_8, VAR_9);
   FUNC_0(VAR_2, VAR_3, VAR_4, 'f', -1, VAR_7, 0, VAR_9);
   FUNC_0(VAR_2, VAR_3, VAR_4, 'i', -1, VAR_7, 0, VAR_9);
   return;
  case 0xFB04:
   FUNC_0(VAR_2, VAR_3, VAR_4, 'f', VAR_6, VAR_7, VAR_8, VAR_9);
   FUNC_0(VAR_2, VAR_3, VAR_4, 'f', -1, VAR_7, 0, VAR_9);
   FUNC_0(VAR_2, VAR_3, VAR_4, 'l', -1, VAR_7, 0, VAR_9);
   return;
  case 0xFB05:
  case 0xFB06:
   FUNC_0(VAR_2, VAR_3, VAR_4, 's', VAR_6, VAR_7, VAR_8, VAR_9);
   FUNC_0(VAR_2, VAR_3, VAR_4, 't', -1, VAR_7, 0, VAR_9);
   return;
  }
 }

 if (!(VAR_3->flags & VAR_1))
 {
  switch (VAR_5)
  {
  case 0x0009:
  case 0x0020:
  case 0x00A0:
  case 0x1680:
  case 0x180E:
  case 0x2000:
  case 0x2001:
  case 0x2002:
  case 0x2003:
  case 0x2004:
  case 0x2005:
  case 0x2006:
  case 0x2007:
  case 0x2008:
  case 0x2009:
  case 0x200A:
  case 0x202F:
  case 0x205F:
  case 0x3000:
   VAR_5 = ' ';
  }
 }

 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
