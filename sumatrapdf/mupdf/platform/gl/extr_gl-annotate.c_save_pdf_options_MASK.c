
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t do_encrypt; char** upwd_utf8; char** opwd_utf8; scalar_t__ do_sanitize; scalar_t__ do_clean; scalar_t__ do_garbage; scalar_t__ do_linear; scalar_t__ do_incremental; scalar_t__ do_compress_fonts; scalar_t__ do_compress_images; scalar_t__ do_compress; scalar_t__ do_decompress; scalar_t__ do_ascii; scalar_t__ do_pretty; } ;
struct TYPE_5__ {int text; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char** VAR_6 ;
 int FUNC_0 (char**,int ,int ) ;
 int FUNC_1 (char**) ;
 TYPE_1__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_2 (char*,scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ,int,int) ;
 int FUNC_6 (char*,char const*,char**,int ) ;
 int FUNC_7 () ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static void FUNC_8(void)
{
 const char *VAR_10 = VAR_6[VAR_8.do_encrypt];
 int VAR_11;

 FUNC_5(VAR_3, VAR_5, VAR_0, 2, 2);
 FUNC_4("PDF write options:");
 FUNC_5(VAR_3, VAR_5, VAR_0, 4, 2);

 FUNC_2("Incremental", &VAR_8.do_incremental);
 FUNC_7();
 FUNC_2("Pretty-print", &VAR_8.do_pretty);
 FUNC_2("Ascii", &VAR_8.do_ascii);
 FUNC_2("Decompress", &VAR_8.do_decompress);
 FUNC_2("Compress", &VAR_8.do_compress);
 FUNC_2("Compress images", &VAR_8.do_compress_images);
 FUNC_2("Compress fonts", &VAR_8.do_compress_fonts);
 if (VAR_8.do_incremental)
 {
  VAR_8.do_garbage = 0;
  VAR_8.do_linear = 0;
  VAR_8.do_clean = 0;
  VAR_8.do_sanitize = 0;
  VAR_8.do_encrypt = VAR_1;
 }
 else
 {
  FUNC_7();
  FUNC_2("Linearize", &VAR_8.do_linear);
  FUNC_2("Garbage collect", &VAR_8.do_garbage);
  FUNC_2("Clean syntax", &VAR_8.do_clean);
  FUNC_2("Sanitize syntax", &VAR_8.do_sanitize);

  FUNC_7();
  FUNC_4("Encryption:");
  VAR_11 = FUNC_6("Encryption", VAR_10, VAR_6, FUNC_1(VAR_6));
  if (VAR_11 != -1)
   VAR_8.do_encrypt = VAR_11;
 }

 if (VAR_8.do_encrypt >= VAR_2)
 {
  FUNC_7();
  FUNC_4("User password:");
  if (FUNC_3(&VAR_9, 32, 1) >= VAR_4)
   FUNC_0(VAR_8.upwd_utf8, VAR_9.text, FUNC_1(VAR_8.upwd_utf8));
  FUNC_4("Owner password:");
  if (FUNC_3(&VAR_7, 32, 1) >= VAR_4)
   FUNC_0(VAR_8.opwd_utf8, VAR_7.text, FUNC_1(VAR_8.opwd_utf8));
 }
}
