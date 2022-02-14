
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64 ;
typedef int StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,int,int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__,int ,char*,int,int,char const*,int) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (int ,char) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 char* FUNC_10 (char*,int,int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,char const*,char const*,int) ;

__attribute__((used)) static StringInfo
FUNC_13(const char *VAR_4, char *VAR_5,
       const char *VAR_6, bool VAR_7, bool VAR_8,
       const char *VAR_9, bool VAR_10)
{
 StringInfo VAR_11;
 char *VAR_12;
 uint64 VAR_13;

 if (VAR_5)
  VAR_12 = FUNC_10(VAR_5, 1, 0);
 else
  VAR_12 = "table";

 VAR_11 = FUNC_9();

 FUNC_0();
 if (FUNC_1(VAR_4, 1, 0) != VAR_2)
  FUNC_6(VAR_1,
    (FUNC_7(VAR_0),
     FUNC_8("invalid query")));

 if (!VAR_8)
 {
  FUNC_12(VAR_11, VAR_12, VAR_6,
           VAR_9, VAR_10);
  FUNC_5(VAR_11, '\n');
 }

 if (VAR_6)
  FUNC_4(VAR_11, "%s\n\n", VAR_6);

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
  FUNC_3(VAR_13, VAR_11, VAR_5, VAR_7,
          VAR_8, VAR_9, VAR_10);

 if (!VAR_8)
  FUNC_11(VAR_11, VAR_12);

 FUNC_2();

 return VAR_11;
}
