
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Tuplestorestate ;
typedef int MemoryContext ;
typedef int AttInMetadata ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,char*,char*,char*,char*,char*,int ,int*,int,int,int,int ,int *,int *) ;
 int FUNC_4 (int ,char*,int) ;
 int * FUNC_5 (int,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static Tuplestorestate *
FUNC_6(char *VAR_2,
    char *VAR_3,
    char *VAR_4,
    char *VAR_5,
    char *VAR_6,
    char *VAR_7,
    int VAR_8,
    bool VAR_9,
    bool VAR_10,
    MemoryContext VAR_11,
    bool VAR_12,
    AttInMetadata *VAR_13)
{
 Tuplestorestate *VAR_14 = ((void*)0);
 int VAR_15;
 MemoryContext VAR_16;

 int VAR_17 = 1;


 if ((VAR_15 = FUNC_1()) < 0)

  FUNC_4(VAR_0, "connectby: SPI_connect returned %d", VAR_15);


 VAR_16 = FUNC_0(VAR_11);


 VAR_14 = FUNC_5(VAR_12, 0, VAR_1);

 FUNC_0(VAR_16);


 FUNC_3(VAR_3,
         VAR_4,
         VAR_2,
         VAR_5,
         VAR_6,
         VAR_7,
         VAR_7,
         0,
         &VAR_17,
         VAR_8,
         VAR_9,
         VAR_10,
         VAR_11,
         VAR_13,
         VAR_14);

 FUNC_2();

 return VAR_14;
}
