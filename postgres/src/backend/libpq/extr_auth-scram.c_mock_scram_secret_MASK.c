
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,char*,int) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_4, int *VAR_5, char **VAR_6,
     uint8 *VAR_7, uint8 *VAR_8)
{
 char *VAR_9;
 char *VAR_10;
 int VAR_11;


 VAR_9 = FUNC_5(VAR_4);

 VAR_11 = FUNC_3(VAR_2);

 VAR_10 = (char *) FUNC_2(VAR_11 + 1);
 VAR_11 = FUNC_4(VAR_9, VAR_2, VAR_10,
        VAR_11);







 if (VAR_11 < 0)
  FUNC_0(VAR_0, "could not encode salt");
 VAR_10[VAR_11] = '\0';

 *VAR_6 = VAR_10;
 *VAR_5 = VAR_1;


 FUNC_1(VAR_7, 0, VAR_3);
 FUNC_1(VAR_8, 0, VAR_3);
}
