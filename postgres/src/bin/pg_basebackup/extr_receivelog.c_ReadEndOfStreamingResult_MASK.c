
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;
typedef int XLogRecPtr ;
typedef int PGresult ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int ,char*,int*,int*) ;

__attribute__((used)) static bool
FUNC_6(PGresult *VAR_0, XLogRecPtr *VAR_1, uint32 *VAR_2)
{
 uint32 VAR_3,
    VAR_4;
 if (FUNC_1(VAR_0) < 2 || FUNC_2(VAR_0) != 1)
 {
  FUNC_4("unexpected result set after end-of-timeline: got %d rows and %d fields, expected %d rows and %d fields",
      FUNC_2(VAR_0), FUNC_1(VAR_0), 1, 2);
  return 0;
 }

 *VAR_2 = FUNC_3(FUNC_0(VAR_0, 0, 0));
 if (FUNC_5(FUNC_0(VAR_0, 0, 1), "%X/%X", &VAR_3,
      &VAR_4) != 2)
 {
  FUNC_4("could not parse next timeline's starting point \"%s\"",
      FUNC_0(VAR_0, 0, 1));
  return 0;
 }
 *VAR_1 = ((uint64) VAR_3 << 32) | VAR_4;

 return 1;
}
