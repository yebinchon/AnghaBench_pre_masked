
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef int SHM_QUEUE ;
typedef int SERIALIZABLEXID ;
typedef int PREDICATELOCKTARGET ;
typedef int PREDICATELOCK ;
typedef int OldSerXidControlData ;


 long VAR_0 ;
 long FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (long,int) ;
 long VAR_6 ;
 int FUNC_4 (int,int ) ;

Size
FUNC_5(void)
{
 Size VAR_7 = 0;
 long VAR_8;


 VAR_8 = FUNC_0();
 VAR_7 = FUNC_2(VAR_7, FUNC_3(VAR_8,
            sizeof(PREDICATELOCKTARGET)));


 VAR_8 *= 2;
 VAR_7 = FUNC_2(VAR_7, FUNC_3(VAR_8,
            sizeof(PREDICATELOCK)));





 VAR_7 = FUNC_2(VAR_7, VAR_7 / 10);


 VAR_8 = VAR_0 + VAR_6;
 VAR_8 *= 10;
 VAR_7 = FUNC_2(VAR_7, VAR_2);
 VAR_7 = FUNC_2(VAR_7, FUNC_4((Size) VAR_8,
           VAR_3));


 VAR_7 = FUNC_2(VAR_7, FUNC_3(VAR_8,
            sizeof(SERIALIZABLEXID)));


 VAR_8 *= 5;
 VAR_7 = FUNC_2(VAR_7, VAR_5);
 VAR_7 = FUNC_2(VAR_7, FUNC_4((Size) VAR_8,
           VAR_4));


 VAR_7 = FUNC_2(VAR_7, sizeof(SHM_QUEUE));


 VAR_7 = FUNC_2(VAR_7, sizeof(OldSerXidControlData));
 VAR_7 = FUNC_2(VAR_7, FUNC_1(VAR_1, 0));

 return VAR_7;
}
