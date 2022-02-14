
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8 ;
typedef int buf ;
struct TYPE_3__ {unsigned int key_len; int const* key; } ;
typedef int PX_MD ;
typedef TYPE_1__ PGP_S2K ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*,unsigned int) ;
 int FUNC_1 (int const*,int ,unsigned int) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,unsigned int) ;
 int FUNC_6 (int const*,int ,int) ;

__attribute__((used)) static int
FUNC_7(PGP_S2K *VAR_1, PX_MD *VAR_2, const uint8 *VAR_3,
    unsigned VAR_4)
{
 unsigned VAR_5;
 uint8 VAR_6[VAR_0];
 unsigned VAR_7;
 unsigned VAR_8;
 uint8 *VAR_9 = VAR_1->key;

 VAR_5 = FUNC_4(VAR_2);

 VAR_8 = VAR_1->key_len;
 VAR_7 = 0;
 while (VAR_8 > 0)
 {
  FUNC_3(VAR_2);

  if (VAR_7)
  {
   FUNC_1(VAR_6, 0, VAR_7);
   FUNC_5(VAR_2, VAR_6, VAR_7);
  }
  VAR_7++;

  FUNC_5(VAR_2, VAR_3, VAR_4);
  FUNC_2(VAR_2, VAR_6);

  if (VAR_8 > VAR_5)
  {
   FUNC_0(VAR_9, VAR_6, VAR_5);
   VAR_9 += VAR_5;
   VAR_8 -= VAR_5;
  }
  else
  {
   FUNC_0(VAR_9, VAR_6, VAR_8);
   VAR_8 = 0;
  }
 }
 FUNC_6(VAR_6, 0, sizeof(VAR_6));
 return 0;
}
