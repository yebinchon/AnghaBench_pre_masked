
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_7__ {int * p; int * end; } ;
typedef TYPE_1__* STREAM ;


 int FUNC_0 (char*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int*) ;

__attribute__((used)) static STREAM
FUNC_6(uint8 * VAR_2)
{
 static STREAM VAR_3;
 uint16 VAR_4, VAR_5;
 uint8 VAR_6;

 if ((VAR_3 == ((void*)0)) || (VAR_0 >= VAR_3->end) || (VAR_0 == ((void*)0)))
 {
  VAR_3 = FUNC_5(&VAR_6);
  if (VAR_3 == ((void*)0))
   return ((void*)0);
  if (VAR_6 == 0xff)
  {
   VAR_0 = VAR_3->end;
   *VAR_2 = 0;
   return VAR_3;
  }
  else if (VAR_6 != 3)
  {

   FUNC_4(VAR_3);
   *VAR_2 = 0;
   return VAR_3;
  }

  VAR_0 = VAR_3->p;
 }
 else
 {
  VAR_3->p = VAR_0;
 }

 FUNC_2(VAR_3, VAR_4);

 if (VAR_4 == 0x8000)
 {
  VAR_0 += 8;
  *VAR_2 = 0;
  return VAR_3;
 }
 FUNC_2(VAR_3, VAR_5);
 FUNC_3(VAR_3, 2);
 *VAR_2 = VAR_5 & 0xf;






 VAR_0 += VAR_4;
 return VAR_3;
}
