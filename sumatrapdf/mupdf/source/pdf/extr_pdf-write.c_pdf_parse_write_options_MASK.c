
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int do_garbage; int do_appearance; void* permissions; int upwd_utf8; int opwd_utf8; void* do_encrypt; void* do_incremental; void* do_sanitize; void* do_clean; void* do_linear; void* do_pretty; void* do_ascii; void* do_compress_images; void* do_compress_fonts; void* do_compress; void* do_decompress; } ;
typedef TYPE_1__ pdf_write_options ;
typedef int fz_context ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* FUNC_0 (char const*) ;
 int FUNC_1 (int *,char const*,int ,int ) ;
 scalar_t__ FUNC_2 (int *,char const*,char*,char const**) ;
 void* FUNC_3 (char const*,char*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int ) ;

pdf_write_options *
FUNC_6(fz_context *VAR_7, pdf_write_options *VAR_8, const char *VAR_9)
{
 const char *VAR_10;

 FUNC_4(VAR_8, 0, sizeof *VAR_8);

 if (FUNC_2(VAR_7, VAR_9, "decompress", &VAR_10))
  VAR_8->do_decompress = FUNC_3(VAR_10, "yes");
 if (FUNC_2(VAR_7, VAR_9, "compress", &VAR_10))
  VAR_8->do_compress = FUNC_3(VAR_10, "yes");
 if (FUNC_2(VAR_7, VAR_9, "compress-fonts", &VAR_10))
  VAR_8->do_compress_fonts = FUNC_3(VAR_10, "yes");
 if (FUNC_2(VAR_7, VAR_9, "compress-images", &VAR_10))
  VAR_8->do_compress_images = FUNC_3(VAR_10, "yes");
 if (FUNC_2(VAR_7, VAR_9, "ascii", &VAR_10))
  VAR_8->do_ascii = FUNC_3(VAR_10, "yes");
 if (FUNC_2(VAR_7, VAR_9, "pretty", &VAR_10))
  VAR_8->do_pretty = FUNC_3(VAR_10, "yes");
 if (FUNC_2(VAR_7, VAR_9, "linearize", &VAR_10))
  VAR_8->do_linear = FUNC_3(VAR_10, "yes");
 if (FUNC_2(VAR_7, VAR_9, "clean", &VAR_10))
  VAR_8->do_clean = FUNC_3(VAR_10, "yes");
 if (FUNC_2(VAR_7, VAR_9, "sanitize", &VAR_10))
  VAR_8->do_sanitize = FUNC_3(VAR_10, "yes");
 if (FUNC_2(VAR_7, VAR_9, "incremental", &VAR_10))
  VAR_8->do_incremental = FUNC_3(VAR_10, "yes");
 if (FUNC_2(VAR_7, VAR_9, "decrypt", &VAR_10))
  VAR_8->do_encrypt = FUNC_3(VAR_10, "yes") ? VAR_3 : VAR_2;
 if (FUNC_2(VAR_7, VAR_9, "encrypt", &VAR_10))
 {
  VAR_8->do_encrypt = VAR_6;
  if (FUNC_3(VAR_10, "none") || FUNC_3(VAR_10, "no"))
   VAR_8->do_encrypt = VAR_3;
  if (FUNC_3(VAR_10, "keep"))
   VAR_8->do_encrypt = VAR_2;
  if (FUNC_3(VAR_10, "rc4-40") || FUNC_3(VAR_10, "yes"))
   VAR_8->do_encrypt = VAR_5;
  if (FUNC_3(VAR_10, "rc4-128"))
   VAR_8->do_encrypt = VAR_4;
  if (FUNC_3(VAR_10, "aes-128"))
   VAR_8->do_encrypt = VAR_0;
  if (FUNC_3(VAR_10, "aes-256"))
   VAR_8->do_encrypt = VAR_1;
 }
 if (FUNC_2(VAR_7, VAR_9, "owner-password", &VAR_10))
  FUNC_1(VAR_7, VAR_10, VAR_8->opwd_utf8, FUNC_5(VAR_8->opwd_utf8));
 if (FUNC_2(VAR_7, VAR_9, "user-password", &VAR_10))
  FUNC_1(VAR_7, VAR_10, VAR_8->upwd_utf8, FUNC_5(VAR_8->upwd_utf8));
 if (FUNC_2(VAR_7, VAR_9, "permissions", &VAR_10))
  VAR_8->permissions = FUNC_0(VAR_10);
 else
  VAR_8->permissions = ~0;
 if (FUNC_2(VAR_7, VAR_9, "garbage", &VAR_10))
 {
  if (FUNC_3(VAR_10, "yes"))
   VAR_8->do_garbage = 1;
  else if (FUNC_3(VAR_10, "compact"))
   VAR_8->do_garbage = 2;
  else if (FUNC_3(VAR_10, "deduplicate"))
   VAR_8->do_garbage = 3;
  else
   VAR_8->do_garbage = FUNC_0(VAR_10);
 }
 if (FUNC_2(VAR_7, VAR_9, "appearance", &VAR_10))
 {
  if (FUNC_3(VAR_10, "yes"))
   VAR_8->do_appearance = 1;
  else if (FUNC_3(VAR_10, "all"))
   VAR_8->do_appearance = 2;
 }

 return VAR_8;
}
