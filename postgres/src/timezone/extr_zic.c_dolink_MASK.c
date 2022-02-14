
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char const*) ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char*,char*,char*,char const*,char const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*,int) ;
 char* VAR_7 ;
 int FUNC_11 (int,int *) ;
 char* FUNC_12 (char const*,char const*) ;
 scalar_t__ FUNC_13 (char const*) ;
 int VAR_8 ;
 char* FUNC_14 (int) ;
 scalar_t__ FUNC_15 (char const*,char const*) ;
 int FUNC_16 (char*,char*) ;

__attribute__((used)) static void
FUNC_17(char const *VAR_9, char const *VAR_10, bool VAR_11)
{
 bool VAR_12 = 0;
 int VAR_13;





 if (FUNC_8(VAR_9))
 {
  FUNC_4(VAR_8, FUNC_0("%s: link from %s/%s failed: %s\n"),
    VAR_7, VAR_5, VAR_9, FUNC_14(VAR_3));
  FUNC_2(VAR_4);
 }
 if (VAR_11)
  VAR_11 = FUNC_9(VAR_10);
 if (FUNC_13(VAR_10) == 0)
  VAR_12 = 1;
 else if (VAR_6 != VAR_0)
 {
  char const *VAR_14 = FUNC_14(VAR_6);

  FUNC_4(VAR_8, FUNC_0("%s: Can't remove %s/%s: %s\n"),
    VAR_7, VAR_5, VAR_10, VAR_14);
  FUNC_2(VAR_4);
 }
 VAR_13 = VAR_11 ? VAR_1 : FUNC_7(VAR_9, VAR_10);
 if (VAR_13 == VAR_0 && !VAR_12)
 {
  FUNC_10(VAR_10, 1);
  VAR_12 = 1;
  VAR_13 = FUNC_7(VAR_9, VAR_10);
 }
 if (VAR_13 != 0)
 {
  {
   FILE *VAR_15,
        *VAR_16;
   int VAR_17;

   VAR_15 = FUNC_3(VAR_9, "rb");
   if (!VAR_15)
   {
    char const *VAR_18 = FUNC_14(VAR_6);

    FUNC_4(VAR_8, FUNC_0("%s: Can't read %s/%s: %s\n"),
      VAR_7, VAR_5, VAR_9, VAR_18);
    FUNC_2(VAR_4);
   }
   VAR_16 = FUNC_3(VAR_10, "wb");
   if (!VAR_16)
   {
    char const *VAR_19 = FUNC_14(VAR_6);

    FUNC_4(VAR_8, FUNC_0("%s: Can't create %s/%s: %s\n"),
      VAR_7, VAR_5, VAR_10, VAR_19);
    FUNC_2(VAR_4);
   }
   while ((VAR_17 = FUNC_6(VAR_15)) != VAR_2)
    FUNC_11(VAR_17, VAR_16);
   FUNC_1(VAR_15, VAR_5, VAR_9);
   FUNC_1(VAR_16, VAR_5, VAR_10);
   if (VAR_13 != VAR_1)
    FUNC_16(FUNC_0("copy used because hard link failed: %s"),
      FUNC_14(VAR_13));





  }
 }
}
