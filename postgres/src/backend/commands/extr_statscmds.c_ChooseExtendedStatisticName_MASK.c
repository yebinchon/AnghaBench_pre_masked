
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int modlabel ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (char const*,char const*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,char const*,int) ;

__attribute__((used)) static char *
FUNC_8(const char *VAR_3, const char *VAR_4,
       const char *VAR_5, Oid VAR_6)
{
 int VAR_7 = 0;
 char *VAR_8 = ((void*)0);
 char VAR_9[VAR_1];


 FUNC_4(VAR_9, VAR_5, sizeof(VAR_9));

 for (;;)
 {
  Oid VAR_10;

  VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_9);

  VAR_10 = FUNC_0(VAR_2, VAR_0,
          FUNC_3(VAR_8),
          FUNC_1(VAR_6));
  if (!FUNC_2(VAR_10))
   break;


  FUNC_6(VAR_8);
  FUNC_7(VAR_9, sizeof(VAR_9), "%s%d", VAR_5, ++VAR_7);
 }

 return VAR_8;
}
