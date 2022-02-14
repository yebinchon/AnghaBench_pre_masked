
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_3__ {int colour_code; int data_size; int* data; } ;
typedef int STREAM ;
typedef TYPE_1__ BRUSHDATA ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int,TYPE_1__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (char*,int,int) ;
 void* FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(STREAM VAR_0, uint16 VAR_1)
{
 BRUSHDATA VAR_2;
 uint8 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 uint8 *VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_2(VAR_0, VAR_3);
 FUNC_2(VAR_0, VAR_4);
 FUNC_2(VAR_0, VAR_5);
 FUNC_2(VAR_0, VAR_6);
 FUNC_2(VAR_0, VAR_8);
 FUNC_2(VAR_0, VAR_7);

 FUNC_0(("BRUSHCACHE(idx=%d,wd=%d,ht=%d,sz=%d)\n", VAR_3, VAR_5, VAR_6, VAR_7));

 if ((VAR_5 == 8) && (VAR_6 == 8))
 {
  if (VAR_4 == 1)
  {
   VAR_2.colour_code = 1;
   VAR_2.data_size = 8;
   VAR_2.data = FUNC_7(8);
   if (VAR_7 == 8)
   {

    for (VAR_10 = 7; VAR_10 >= 0; VAR_10--)
    {
     FUNC_2(VAR_0, VAR_2.data[VAR_10]);
    }
   }
   else
   {
    FUNC_6("incompatible brush, colour_code %d size %d\n", VAR_4,
     VAR_7);
   }
   FUNC_1(1, VAR_3, &VAR_2);
  }
  else if ((VAR_4 >= 3) && (VAR_4 <= 6))
  {
   VAR_11 = VAR_4 - 2;
   VAR_2.colour_code = VAR_4;
   VAR_2.data_size = 8 * 8 * VAR_11;
   VAR_2.data = FUNC_7(8 * 8 * VAR_11);
   if (VAR_7 == 16 + 4 * VAR_11)
   {
    FUNC_4(VAR_0, VAR_9, 16 + 4 * VAR_11);
    FUNC_5(VAR_9, VAR_2.data, VAR_11);
   }
   else
   {
    FUNC_3(VAR_0, VAR_2.data, 8 * 8 * VAR_11);
   }
   FUNC_1(VAR_4, VAR_3, &VAR_2);
  }
  else
  {
   FUNC_6("incompatible brush, colour_code %d size %d\n", VAR_4, VAR_7);
  }
 }
 else
 {
  FUNC_6("incompatible brush, width height %d %d\n", VAR_5, VAR_6);
 }
 if (VAR_8) {}
}
