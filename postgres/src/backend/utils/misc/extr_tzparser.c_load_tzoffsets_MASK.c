
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tzEntry ;
typedef int TimeZoneAbbrevTable ;
typedef int MemoryContext ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int * FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,int ,int **,int*,int ) ;
 scalar_t__ FUNC_6 (int) ;

TimeZoneAbbrevTable *
FUNC_7(const char *VAR_2)
{
 TimeZoneAbbrevTable *VAR_3 = ((void*)0);
 MemoryContext VAR_4;
 MemoryContext VAR_5;
 tzEntry *VAR_6;
 int VAR_7;
 int VAR_8;





 VAR_4 = FUNC_0(VAR_1,
            "TZParserMemory",
            VAR_0);
 VAR_5 = FUNC_4(VAR_4);


 VAR_7 = 128;
 VAR_6 = (tzEntry *) FUNC_6(VAR_7 * sizeof(tzEntry));


 VAR_8 = FUNC_5(VAR_2, 0, &VAR_6, &VAR_7, 0);


 if (VAR_8 >= 0)
 {
  VAR_3 = FUNC_1(VAR_6, VAR_8);
  if (!VAR_3)
   FUNC_2("out of memory");
 }


 FUNC_4(VAR_5);
 FUNC_3(VAR_4);

 return VAR_3;
}
