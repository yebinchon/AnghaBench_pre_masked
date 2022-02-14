
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int localTransactionId; int backendId; } ;
typedef TYPE_1__ VirtualTransactionId ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char*,int *,int *) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2, char **VAR_3, const char *VAR_4,
      VirtualTransactionId *VAR_5)
{
 char *VAR_6 = *VAR_3;
 int VAR_7 = FUNC_5(VAR_2);

 if (FUNC_6(VAR_6, VAR_2, VAR_7) != 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("invalid snapshot data in file \"%s\"", VAR_4)));
 VAR_6 += VAR_7;
 if (FUNC_3(VAR_6, "%d/%u", &VAR_5->backendId, &VAR_5->localTransactionId) != 2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("invalid snapshot data in file \"%s\"", VAR_4)));
 VAR_6 = FUNC_4(VAR_6, '\n');
 if (!VAR_6)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("invalid snapshot data in file \"%s\"", VAR_4)));
 *VAR_3 = VAR_6 + 1;
}
