
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int offset; } ;
typedef TYPE_2__ zip_entry ;
typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int * file; } ;
struct TYPE_8__ {TYPE_1__ super; } ;
typedef TYPE_3__ fz_zip_archive ;
typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int,int) ;
 int FUNC_3 (int *,int ,char*,...) ;

__attribute__((used)) static int FUNC_4(fz_context *VAR_3, fz_zip_archive *VAR_4, zip_entry *VAR_5)
{
 fz_stream *VAR_6 = VAR_4->super.file;
 uint32_t VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_2(VAR_3, VAR_6, VAR_5->offset, 0);

 VAR_7 = FUNC_1(VAR_3, VAR_6);
 if (VAR_7 != VAR_2)
  FUNC_3(VAR_3, VAR_0, "wrong zip local file signature (0x%x)", VAR_7);

 (void) FUNC_0(VAR_3, VAR_6);
 VAR_8 = FUNC_0(VAR_3, VAR_6);
 if (VAR_8 & VAR_1)
  FUNC_3(VAR_3, VAR_0, "zip content is encrypted");

 VAR_9 = FUNC_0(VAR_3, VAR_6);
 (void) FUNC_0(VAR_3, VAR_6);
 (void) FUNC_0(VAR_3, VAR_6);
 (void) FUNC_1(VAR_3, VAR_6);
 (void) FUNC_1(VAR_3, VAR_6);
 (void) FUNC_1(VAR_3, VAR_6);
 VAR_10 = FUNC_0(VAR_3, VAR_6);
 VAR_11 = FUNC_0(VAR_3, VAR_6);

 FUNC_2(VAR_3, VAR_6, VAR_10 + VAR_11, 1);

 return VAR_9;
}
