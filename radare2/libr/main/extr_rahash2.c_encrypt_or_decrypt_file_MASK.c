
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
 int FUNC_8 (int *,int *,int) ;
 scalar_t__ FUNC_9 (int *,char const*) ;
 scalar_t__ FUNC_10 (char*,int*) ;
 scalar_t__ FUNC_11 (int*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_12 (char*,char const*) ;
 int FUNC_13 (int,int *,int) ;

__attribute__((used)) static int FUNC_14(const char *VAR_1, int VAR_2, char *VAR_3, const ut8 *VAR_4, int VAR_5, int VAR_6) {
 bool VAR_7 = !FUNC_12 ("base64", VAR_1) || !FUNC_12 ("base91", VAR_1) || !FUNC_12 ("punycode", VAR_1);
 if (VAR_7 || VAR_0.len > 0) {
  RCrypto *VAR_8 = FUNC_5 ();
  if (FUNC_9 (VAR_8, VAR_1)) {
   if (FUNC_7 (VAR_8, VAR_0.buf, VAR_0.len, 0, VAR_2)) {
    int VAR_9;
    ut8 *VAR_10 = FUNC_12 (VAR_3, "-")
               ? (ut8 *) FUNC_10 (VAR_3, &VAR_9)
        : (ut8 *) FUNC_11 (&VAR_9);
    if (!VAR_10) {
     FUNC_0 ("rahash2: Cannot open '%s'\n", VAR_3);
     return -1;
    }

    if (VAR_4 && !FUNC_6 (VAR_8, VAR_4, VAR_5)) {
     FUNC_0 ("Invalid IV.\n");
     FUNC_1 (VAR_10);
     return 0;
    }

    FUNC_8 (VAR_8, VAR_10, VAR_9);
    FUNC_2 (VAR_8, ((void*)0), 0);

    int VAR_11 = 0;
    ut8 *VAR_12 = FUNC_4 (VAR_8, &VAR_11);
    if (VAR_12) {
     FUNC_13 (1, VAR_12, VAR_11);
     FUNC_1 (VAR_12);
    }
    FUNC_1 (VAR_10);
   } else {
    FUNC_0 ("Invalid key\n");
   }
   return 0;
  } else {
   FUNC_0 ("Unknown %s algorithm '%s'\n", ((!VAR_2)? "encryption": "decryption"), VAR_1);
  }
  FUNC_3 (VAR_8);
 } else {
  FUNC_0 ("%s key not defined. Use -S [key]\n", ((!VAR_2)? "Encryption": "Decryption"));
 }
 return 1;
}
