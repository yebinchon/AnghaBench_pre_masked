
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct rbcfg_ctx {char* tmp_file; char* mtd_device; int buflen; scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct rbcfg_ctx*) ;
 int FUNC_7 (int,scalar_t__,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_8(struct rbcfg_ctx *VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7, VAR_8;
 char *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_10 = FUNC_6(VAR_5);
 VAR_9 = (VAR_10) ? VAR_5->tmp_file : VAR_5->mtd_device;

 VAR_11 = FUNC_4(VAR_9, VAR_0);
 if (VAR_11 < 0) {
  FUNC_2(VAR_4, "unable to open %s\n", VAR_9);
  VAR_12 = VAR_2;
  goto err;
 }

 VAR_12 = FUNC_7(VAR_11, VAR_5->buf, VAR_5->buflen);
 if (VAR_12 != VAR_5->buflen) {
  FUNC_2(VAR_4, "unable to read from %s\n", VAR_9);
  VAR_12 = VAR_2;
  goto err_close;
 }

 VAR_6 = FUNC_3(VAR_5->buf);
 if (VAR_6 != VAR_3) {
  FUNC_2(VAR_4, "invalid configuration\n");
  VAR_12 = VAR_1;
  goto err_close;
 }

 VAR_7 = FUNC_3(VAR_5->buf + 4);
 FUNC_5(VAR_5->buf + 4, 0);
 VAR_8 = FUNC_1((unsigned char *) VAR_5->buf, VAR_5->buflen);
 if (VAR_8 != VAR_7) {
  FUNC_2(VAR_4, "configuration has CRC error\n");
  VAR_12 = VAR_1;
  goto err_close;
 }

 VAR_12 = 0;

 err_close:
 FUNC_0(VAR_11);
 err:
 return VAR_12;
}
