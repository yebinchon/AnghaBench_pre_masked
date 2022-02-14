
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MultiXactOffset ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(MultiXactOffset VAR_3, MultiXactOffset VAR_4)
{
 const int VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = FUNC_0(VAR_3);
 int VAR_7 = FUNC_0(VAR_4);
 int VAR_8 = VAR_6;





 while (VAR_8 != VAR_7)
 {
  FUNC_2(VAR_0, "truncating multixact members segment %x", VAR_8);
  FUNC_1(VAR_2, VAR_8);


  if (VAR_8 == VAR_5)
   VAR_8 = 0;
  else
   VAR_8 += 1;
 }
}
