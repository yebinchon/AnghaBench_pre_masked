
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int text_mode; int convert_crlf; int unicode_mode; int use_sess_key; int disable_mdc; int compress_level; int compress_algo; int s2k_digest_algo; int s2k_count; int s2k_mode; int s2k_cipher_algo; int cipher_algo; } ;
typedef TYPE_1__ PGP_Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_1 (int) ;

int
FUNC_2(PGP_Context **VAR_12)
{
 PGP_Context *VAR_13;

 VAR_13 = FUNC_1(sizeof *VAR_13);
 FUNC_0(VAR_13, 0, sizeof *VAR_13);

 VAR_13->cipher_algo = VAR_0;
 VAR_13->s2k_cipher_algo = VAR_5;
 VAR_13->s2k_mode = VAR_8;
 VAR_13->s2k_count = VAR_6;
 VAR_13->s2k_digest_algo = VAR_7;
 VAR_13->compress_algo = VAR_1;
 VAR_13->compress_level = VAR_2;
 VAR_13->disable_mdc = VAR_4;
 VAR_13->use_sess_key = VAR_11;
 VAR_13->unicode_mode = VAR_10;
 VAR_13->convert_crlf = VAR_3;
 VAR_13->text_mode = VAR_9;

 *VAR_12 = VAR_13;
 return 0;
}
