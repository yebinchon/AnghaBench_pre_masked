
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
struct dstr {char* array; int member_0; } ;
typedef int argv ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int VAR_0 ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__*) ;
 int FUNC_16 (struct dstr*,int ) ;
 int FUNC_17 (struct dstr*) ;
 int FUNC_18 (struct dstr*,char*,char*) ;
 int FUNC_19 (char*) ;
 int VAR_1 ;
 int FUNC_20 (char const*) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 () ;
 int FUNC_23 (char const*,int ,int ,int) ;
 int FUNC_24 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 char* VAR_7 ;
 int FUNC_25 (char*) ;

bool FUNC_26(const char *VAR_8)
{
 if (VAR_3)
  return 1;
 FUNC_10(VAR_8);


 FUNC_7();
 if (!FUNC_8())
  return 0;
 FUNC_0();
 if (!FUNC_2())
  return 0;




 wchar_t *VAR_9[] = {L"", ((void*)0)};
 int VAR_10 = sizeof(VAR_9) / sizeof(wchar_t *) - 1;

 FUNC_6(VAR_10, VAR_9);
 FUNC_14(VAR_0);

 VAR_2 = FUNC_4("obspython");
 bool VAR_11 = !FUNC_24();
 if (!VAR_11) {
  FUNC_25("Error importing obspython.py', unloading obs-python");
  goto out;
 }

 VAR_3 = FUNC_5(VAR_7) == 0;
 FUNC_24();

 FUNC_12(VAR_2);
 FUNC_24();

 FUNC_13(VAR_2);
 FUNC_24();

out:



 FUNC_1(FUNC_3());

 if (!VAR_11) {
  FUNC_25("Failed to load python plugin");
  FUNC_22();
 }

 VAR_4 = VAR_11;

 if (VAR_3)
  FUNC_21(VAR_5, ((void*)0));

 return VAR_3;
}
