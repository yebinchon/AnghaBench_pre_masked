
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int,char*,char const*) ;
 int * FUNC_6 (int *,int *,int *,int *) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static X509 *FUNC_10(const char *VAR_1)
{
 unsigned char VAR_2[2];
 X509 *VAR_3;
 BIO *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_1, "rb");
 FUNC_5(!VAR_4, "%s", VAR_1);


 VAR_5 = FUNC_2(VAR_4, VAR_2, 2);
 if (VAR_5 != 2) {
  if (FUNC_4(VAR_4)) {
   FUNC_9(VAR_0, "%s: Read wanted retry\n", VAR_1);
   FUNC_8(1);
  }
  if (VAR_5 >= 0) {
   FUNC_9(VAR_0, "%s: Short read\n", VAR_1);
   FUNC_8(1);
  }
  FUNC_5(1, "%s", VAR_1);
 }

 FUNC_5(FUNC_3(VAR_4) != 0, "%s", VAR_1);

 if (VAR_2[0] == 0x30 && VAR_2[1] >= 0x81 && VAR_2[1] <= 0x84)

  VAR_3 = FUNC_7(VAR_4, ((void*)0));
 else

  VAR_3 = FUNC_6(VAR_4, ((void*)0), ((void*)0), ((void*)0));

 FUNC_0(VAR_4);
 FUNC_5(!VAR_3, "%s", VAR_1);

 return VAR_3;
}
