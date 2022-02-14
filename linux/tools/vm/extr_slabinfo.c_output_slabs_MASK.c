
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {scalar_t__ alias; } ;


 int FUNC_0 (struct slabinfo*) ;
 int VAR_0 ;
 int FUNC_1 (struct slabinfo*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct slabinfo*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct slabinfo*) ;
 int FUNC_4 (struct slabinfo*,int ) ;
 int FUNC_5 (struct slabinfo*) ;
 int FUNC_6 (struct slabinfo*) ;
 int FUNC_7 (struct slabinfo*) ;
 struct slabinfo* VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_8(void)
{
 struct slabinfo *VAR_11;
 int VAR_12 = VAR_0;

 for (VAR_11 = VAR_8; (VAR_11 < VAR_8 + VAR_9) &&
   VAR_12 != 0; VAR_11++) {

  if (VAR_11->alias)
   continue;

  if (VAR_12 != -1)
   VAR_12--;

  if (VAR_2)
   FUNC_4(VAR_11, 0);
  else if (VAR_6)
   FUNC_2(VAR_11);
  else if (VAR_10)
   FUNC_6(VAR_11);
  else if (VAR_7)
   FUNC_5(VAR_11);
  else if (VAR_1)
   FUNC_3(VAR_11);
  else if (VAR_3)
   FUNC_0(VAR_11);
  else if (VAR_5)
   FUNC_7(VAR_11);
  else if (VAR_4)
   FUNC_1(VAR_11);
 }
}
