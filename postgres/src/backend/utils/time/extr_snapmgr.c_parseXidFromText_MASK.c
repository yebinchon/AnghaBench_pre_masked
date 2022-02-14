
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TransactionId ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char*,int *) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char const*,int) ;

__attribute__((used)) static TransactionId
FUNC_7(const char *VAR_2, char **VAR_3, const char *VAR_4)
{
 char *VAR_5 = *VAR_3;
 int VAR_6 = FUNC_5(VAR_2);
 TransactionId VAR_7;

 if (FUNC_6(VAR_5, VAR_2, VAR_6) != 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("invalid snapshot data in file \"%s\"", VAR_4)));
 VAR_5 += VAR_6;
 if (FUNC_3(VAR_5, "%u", &VAR_7) != 1)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("invalid snapshot data in file \"%s\"", VAR_4)));
 VAR_5 = FUNC_4(VAR_5, '\n');
 if (!VAR_5)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("invalid snapshot data in file \"%s\"", VAR_4)));
 *VAR_3 = VAR_5 + 1;
 return VAR_7;
}
