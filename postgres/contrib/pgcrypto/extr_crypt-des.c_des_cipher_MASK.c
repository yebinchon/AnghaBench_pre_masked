
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint32 ;
typedef int buffer ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char,char,char*,char*,int) ;
 int FUNC_2 (char*,char const*,int) ;
 char FUNC_3 (char) ;
 char FUNC_4 (char) ;
 int FUNC_5 (long) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_1, char *VAR_2, long VAR_3, int VAR_4)
{
 uint32 VAR_5[2];
 uint32 VAR_6,
    VAR_7,
    VAR_8,
    VAR_9;
 int VAR_10;

 if (!VAR_0)
  FUNC_0();

 FUNC_5(VAR_3);


 FUNC_2(VAR_5, VAR_1, sizeof(VAR_5));

 VAR_8 = FUNC_4(VAR_5[0]);
 VAR_9 = FUNC_4(VAR_5[1]);

 VAR_10 = FUNC_1(VAR_8, VAR_9, &VAR_6, &VAR_7, VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_5[0] = FUNC_3(VAR_6);
 VAR_5[1] = FUNC_3(VAR_7);


 FUNC_2(VAR_2, VAR_5, sizeof(VAR_5));

 return VAR_10;
}
