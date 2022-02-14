
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef int HASHSEGMENT ;
typedef int HASHHDR ;
typedef int HASHELEMENT ;
typedef int HASHBUCKET ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long FUNC_0 (int) ;
 int FUNC_1 (int,long) ;
 long FUNC_2 (int) ;
 long FUNC_3 (long,long) ;
 long FUNC_4 (long) ;

Size
FUNC_5(long VAR_3, Size VAR_4)
{
 Size VAR_5;
 long VAR_6,
    VAR_7,
    VAR_8,
    VAR_9,
    VAR_10,
    VAR_11;


 VAR_6 = FUNC_4((VAR_3 - 1) / VAR_1 + 1);

 VAR_7 = FUNC_4((VAR_6 - 1) / VAR_2 + 1);

 VAR_8 = VAR_0;
 while (VAR_8 < VAR_7)
  VAR_8 <<= 1;


 VAR_5 = FUNC_0(sizeof(HASHHDR));

 VAR_5 = FUNC_1(VAR_5, FUNC_3(VAR_8, sizeof(HASHSEGMENT)));

 VAR_5 = FUNC_1(VAR_5, FUNC_3(VAR_7,
           FUNC_0(VAR_2 * sizeof(HASHBUCKET))));

 VAR_11 = FUNC_2(VAR_4);
 VAR_9 = (VAR_3 - 1) / VAR_11 + 1;
 VAR_10 = FUNC_0(sizeof(HASHELEMENT)) + FUNC_0(VAR_4);
 VAR_5 = FUNC_1(VAR_5,
     FUNC_3(VAR_9,
        FUNC_3(VAR_11, VAR_10)));

 return VAR_5;
}
