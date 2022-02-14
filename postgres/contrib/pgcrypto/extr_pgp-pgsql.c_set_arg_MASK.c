
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_expect {int expect; void* unicode_mode; void* compress_algo; void* s2k_cipher_algo; int s2k_digest_algo; void* s2k_count; void* s2k_mode; void* use_sess_key; void* disable_mdc; void* cipher_algo; void* debug; } ;
typedef int PGP_Context ;


 int VAR_0 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int *,void*) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,void*) ;
 int FUNC_6 (int *,void*) ;
 int FUNC_7 (int *,void*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,void*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,void*) ;
 int FUNC_12 (int *,void*) ;
 int FUNC_13 (int *,void*) ;
 scalar_t__ FUNC_14 (char*,char*) ;

__attribute__((used)) static int
FUNC_15(PGP_Context *VAR_1, char *VAR_2, char *VAR_3,
  struct debug_expect *VAR_4)
{
 int VAR_5 = 0;

 if (FUNC_14(VAR_2, "cipher-algo") == 0)
  VAR_5 = FUNC_4(VAR_1, VAR_3);
 else if (FUNC_14(VAR_2, "disable-mdc") == 0)
  VAR_5 = FUNC_1(VAR_1, FUNC_0(VAR_3));
 else if (FUNC_14(VAR_2, "sess-key") == 0)
  VAR_5 = FUNC_12(VAR_1, FUNC_0(VAR_3));
 else if (FUNC_14(VAR_2, "s2k-mode") == 0)
  VAR_5 = FUNC_11(VAR_1, FUNC_0(VAR_3));
 else if (FUNC_14(VAR_2, "s2k-count") == 0)
  VAR_5 = FUNC_9(VAR_1, FUNC_0(VAR_3));
 else if (FUNC_14(VAR_2, "s2k-digest-algo") == 0)
  VAR_5 = FUNC_10(VAR_1, VAR_3);
 else if (FUNC_14(VAR_2, "s2k-cipher-algo") == 0)
  VAR_5 = FUNC_8(VAR_1, VAR_3);
 else if (FUNC_14(VAR_2, "compress-algo") == 0)
  VAR_5 = FUNC_5(VAR_1, FUNC_0(VAR_3));
 else if (FUNC_14(VAR_2, "compress-level") == 0)
  VAR_5 = FUNC_6(VAR_1, FUNC_0(VAR_3));
 else if (FUNC_14(VAR_2, "convert-crlf") == 0)
  VAR_5 = FUNC_7(VAR_1, FUNC_0(VAR_3));
 else if (FUNC_14(VAR_2, "unicode-mode") == 0)
  VAR_5 = FUNC_13(VAR_1, FUNC_0(VAR_3));





 else if (VAR_4 != ((void*)0) && FUNC_14(VAR_2, "debug") == 0)
  VAR_4->debug = FUNC_0(VAR_3);
 else if (VAR_4 != ((void*)0) && FUNC_14(VAR_2, "expect-cipher-algo") == 0)
 {
  VAR_4->expect = 1;
  VAR_4->cipher_algo = FUNC_2(VAR_3);
 }
 else if (VAR_4 != ((void*)0) && FUNC_14(VAR_2, "expect-disable-mdc") == 0)
 {
  VAR_4->expect = 1;
  VAR_4->disable_mdc = FUNC_0(VAR_3);
 }
 else if (VAR_4 != ((void*)0) && FUNC_14(VAR_2, "expect-sess-key") == 0)
 {
  VAR_4->expect = 1;
  VAR_4->use_sess_key = FUNC_0(VAR_3);
 }
 else if (VAR_4 != ((void*)0) && FUNC_14(VAR_2, "expect-s2k-mode") == 0)
 {
  VAR_4->expect = 1;
  VAR_4->s2k_mode = FUNC_0(VAR_3);
 }
 else if (VAR_4 != ((void*)0) && FUNC_14(VAR_2, "expect-s2k-count") == 0)
 {
  VAR_4->expect = 1;
  VAR_4->s2k_count = FUNC_0(VAR_3);
 }
 else if (VAR_4 != ((void*)0) && FUNC_14(VAR_2, "expect-s2k-digest-algo") == 0)
 {
  VAR_4->expect = 1;
  VAR_4->s2k_digest_algo = FUNC_3(VAR_3);
 }
 else if (VAR_4 != ((void*)0) && FUNC_14(VAR_2, "expect-s2k-cipher-algo") == 0)
 {
  VAR_4->expect = 1;
  VAR_4->s2k_cipher_algo = FUNC_2(VAR_3);
 }
 else if (VAR_4 != ((void*)0) && FUNC_14(VAR_2, "expect-compress-algo") == 0)
 {
  VAR_4->expect = 1;
  VAR_4->compress_algo = FUNC_0(VAR_3);
 }
 else if (VAR_4 != ((void*)0) && FUNC_14(VAR_2, "expect-unicode-mode") == 0)
 {
  VAR_4->expect = 1;
  VAR_4->unicode_mode = FUNC_0(VAR_3);
 }
 else
  VAR_5 = VAR_0;

 return VAR_5;
}
