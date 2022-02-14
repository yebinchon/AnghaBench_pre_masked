
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_2__ {scalar_t__ len; int buf; } ;
typedef int RCrypto ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int*) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int const*,int) ;
 scalar_t__ FUNC_7 (int *,int ,scalar_t__,int ,int) ;
 int FUNC_8 (int *,int const*,int) ;
 scalar_t__ FUNC_9 (int *,char const*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (int,int *,int) ;

__attribute__((used)) static int FUNC_12(const char *VAR_1, int VAR_2, const char *VAR_3, int VAR_4, const ut8 *VAR_5, int VAR_6, int VAR_7) {
 bool VAR_8 = !FUNC_10 ("base64", VAR_1) || !FUNC_10 ("base91", VAR_1) || !FUNC_10 ("punycode", VAR_1);
 if (VAR_8 || VAR_0.len > 0) {
  RCrypto *VAR_9 = FUNC_5 ();
  if (FUNC_9 (VAR_9, VAR_1)) {
   if (FUNC_7 (VAR_9, VAR_0.buf, VAR_0.len, 0, VAR_2)) {
    const char *VAR_10 = VAR_3;
    int VAR_11 = VAR_4;

    if (VAR_5 && !FUNC_6 (VAR_9, VAR_5, VAR_6)) {
     FUNC_0 ("Invalid IV.\n");
     return 0;
    }

    FUNC_8 (VAR_9, (const ut8 *) VAR_10, VAR_11);
    FUNC_2 (VAR_9, ((void*)0), 0);

    int VAR_12 = 0;
    ut8 *VAR_13 = FUNC_4 (VAR_9, &VAR_12);
    if (VAR_13) {
     FUNC_11 (1, VAR_13, VAR_12);
     FUNC_1 (VAR_13);
    }
   } else {
    FUNC_0 ("Invalid key\n");
   }
   return 0;
  } else {
   FUNC_0 ("Unknown %s algorithm '%s'\n", ((!VAR_2)? "encryption": "decryption"), VAR_1);
  }
  FUNC_3 (VAR_9);
 } else {
  FUNC_0 ("%s key not defined. Use -S [key]\n", ((!VAR_2)? "Encryption": "Decryption"));
 }
 return 1;
}
