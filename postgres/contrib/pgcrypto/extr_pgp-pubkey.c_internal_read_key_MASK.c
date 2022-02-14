
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_6__ {scalar_t__ can_encrypt; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_PubKey ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_1__**) ;
 int FUNC_1 (int **,int *,int,int,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int*,int*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__**,int const*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int
FUNC_8(PullFilter *VAR_6, PGP_PubKey **VAR_7,
      const uint8 *VAR_8, int VAR_9, int VAR_10)
{
 PullFilter *VAR_11 = ((void*)0);
 int VAR_12;
 uint8 VAR_13;
 int VAR_14;
 PGP_PubKey *VAR_15 = ((void*)0);
 PGP_PubKey *VAR_16 = ((void*)0);
 int VAR_17 = 0;






 while (1)
 {
  VAR_12 = FUNC_3(VAR_6, &VAR_13, &VAR_14, 0);
  if (VAR_12 <= 0)
   break;
  VAR_12 = FUNC_1(&VAR_11, VAR_6, VAR_14, VAR_12, ((void*)0));
  if (VAR_12 < 0)
   break;

  switch (VAR_13)
  {
   case 135:
   case 133:
    if (VAR_17)
    {
     VAR_12 = VAR_2;
     break;
    }
    VAR_17 = 1;
    VAR_12 = FUNC_4(VAR_11);
    break;

   case 134:
    if (VAR_10 != 0)
     VAR_12 = VAR_1;
    else
     VAR_12 = FUNC_0(VAR_11, &VAR_16);
    break;

   case 132:
    if (VAR_10 != 1)
     VAR_12 = VAR_0;
    else
     VAR_12 = FUNC_5(VAR_11, &VAR_16, VAR_8, VAR_9);
    break;

   case 131:
   case 137:
   case 130:
   case 128:
   case 129:
   case 136:
    VAR_12 = FUNC_4(VAR_11);
    break;
   default:
    FUNC_7("unknown/unexpected packet: %d", VAR_13);
    VAR_12 = VAR_5;
  }
  FUNC_6(VAR_11);
  VAR_11 = ((void*)0);

  if (VAR_16 != ((void*)0))
  {
   if (VAR_12 >= 0 && VAR_16->can_encrypt)
   {
    if (VAR_15 == ((void*)0))
    {
     VAR_15 = VAR_16;
     VAR_16 = ((void*)0);
    }
    else
     VAR_12 = VAR_3;
   }

   if (VAR_16)
    FUNC_2(VAR_16);
   VAR_16 = ((void*)0);
  }

  if (VAR_12 < 0)
   break;
 }

 if (VAR_11)
  FUNC_6(VAR_11);

 if (VAR_12 < 0)
 {
  if (VAR_15)
   FUNC_2(VAR_15);
  return VAR_12;
 }

 if (!VAR_15)
  VAR_12 = VAR_4;
 else
  *VAR_7 = VAR_15;
 return VAR_12;
}
