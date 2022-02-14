
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int XLogRecPtr ;
typedef int BufferDesc ;
typedef scalar_t__ Buffer ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int * FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 () ;

XLogRecPtr
FUNC_10(Buffer VAR_0)
{
 BufferDesc *VAR_1 = FUNC_5(VAR_0 - 1);
 char *VAR_2 = FUNC_1(VAR_0);
 XLogRecPtr VAR_3;
 uint32 VAR_4;




 if (!FUNC_9() || FUNC_2(VAR_0))
  return FUNC_7(VAR_2);


 FUNC_0(FUNC_4(VAR_0));
 FUNC_0(FUNC_3(VAR_0));

 VAR_4 = FUNC_6(VAR_1);
 VAR_3 = FUNC_7(VAR_2);
 FUNC_8(VAR_1, VAR_4);

 return VAR_3;
}
