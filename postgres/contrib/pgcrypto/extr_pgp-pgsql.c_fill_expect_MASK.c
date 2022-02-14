
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_expect {int cipher_algo; int s2k_mode; int s2k_count; int s2k_cipher_algo; int s2k_digest_algo; int compress_algo; int use_sess_key; int disable_mdc; int unicode_mode; scalar_t__ expect; scalar_t__ debug; } ;



__attribute__((used)) static void
FUNC_0(struct debug_expect *VAR_0, int VAR_1)
{
 VAR_0->debug = 0;
 VAR_0->expect = 0;
 VAR_0->cipher_algo = -1;
 VAR_0->s2k_mode = -1;
 VAR_0->s2k_count = -1;
 VAR_0->s2k_cipher_algo = -1;
 VAR_0->s2k_digest_algo = -1;
 VAR_0->compress_algo = -1;
 VAR_0->use_sess_key = -1;
 VAR_0->disable_mdc = -1;
 VAR_0->unicode_mode = -1;
}
