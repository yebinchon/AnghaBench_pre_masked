
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8 ;
typedef int buf ;
struct TYPE_3__ {unsigned int key_len; int const* salt; int const* key; } ;
typedef int PX_MD ;
typedef TYPE_1__ PGP_S2K ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int const*,int const*,unsigned int) ;
 int FUNC_1 (int const*,int ,unsigned int) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,unsigned int) ;
 int FUNC_6 (int const*,int ,int) ;

__attribute__((used)) static int
FUNC_7(PGP_S2K *VAR_2, PX_MD *VAR_3, const uint8 *VAR_4, unsigned VAR_5)
{
 unsigned VAR_6;
 uint8 VAR_7[VAR_0];
 unsigned VAR_8 = 0;
 uint8 *VAR_9;
 unsigned VAR_10;

 VAR_6 = FUNC_4(VAR_3);

 VAR_9 = VAR_2->key;
 VAR_10 = VAR_2->key_len;
 while (VAR_10 > 0)
 {
  FUNC_3(VAR_3);

  if (VAR_8 > 0)
  {
   FUNC_1(VAR_7, 0, VAR_8);
   FUNC_5(VAR_3, VAR_7, VAR_8);
  }
  VAR_8++;

  FUNC_5(VAR_3, VAR_2->salt, VAR_1);
  FUNC_5(VAR_3, VAR_4, VAR_5);
  FUNC_2(VAR_3, VAR_7);

  if (VAR_10 > VAR_6)
  {
   FUNC_0(VAR_9, VAR_7, VAR_6);
   VAR_10 -= VAR_6;
   VAR_9 += VAR_6;
  }
  else
  {
   FUNC_0(VAR_9, VAR_7, VAR_10);
   VAR_10 = 0;
  }
 }
 FUNC_6(VAR_7, 0, sizeof(VAR_7));
 return 0;
}
