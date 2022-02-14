
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int BufferDesc ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool
FUNC_7(BufferDesc *VAR_6, bool VAR_7)
{
 uint32 VAR_8;

 FUNC_0(!VAR_3);

 for (;;)
 {




  FUNC_2(FUNC_1(VAR_6), VAR_5);

  VAR_8 = FUNC_4(VAR_6);

  if (!(VAR_8 & VAR_1))
   break;







  FUNC_5(VAR_6, VAR_8);
  FUNC_3(FUNC_1(VAR_6));
  FUNC_6(VAR_6);
 }



 if (VAR_7 ? (VAR_8 & VAR_2) : !(VAR_8 & VAR_0))
 {

  FUNC_5(VAR_6, VAR_8);
  FUNC_3(FUNC_1(VAR_6));
  return 0;
 }

 VAR_8 |= VAR_1;
 FUNC_5(VAR_6, VAR_8);

 VAR_3 = VAR_6;
 VAR_4 = VAR_7;

 return 1;
}
