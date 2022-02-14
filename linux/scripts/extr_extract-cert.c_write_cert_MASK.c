
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int X509 ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_6(X509 *VAR_4)
{
 char VAR_5[200];

 if (!VAR_3) {
  VAR_3 = FUNC_0(VAR_0, "wb");
  FUNC_1(!VAR_3, "%s", VAR_0);
 }
 FUNC_2(FUNC_3(VAR_4), VAR_5, sizeof(VAR_5));
 FUNC_1(!FUNC_5(VAR_3, VAR_4), "%s", VAR_0);
 if (VAR_1)
  FUNC_4(VAR_2, "Extracted cert: %s\n", VAR_5);
}
