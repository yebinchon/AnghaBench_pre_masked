
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ backend; scalar_t__ backend_addr; int backend_file; int backend_size; } ;
struct mic_info {TYPE_1__ mic_virtblk; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int,int ,scalar_t__,long) ;
 int FUNC_3 (char*,int ,int ,...) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mic_info*) ;
 int FUNC_6 (struct mic_info*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool
FUNC_8(struct mic_info *VAR_6)
{
 if (!FUNC_5(VAR_6))
  goto _error_exit;
 VAR_6->mic_virtblk.backend = FUNC_4(VAR_6->mic_virtblk.backend_file, VAR_2);
 if (VAR_6->mic_virtblk.backend < 0) {
  FUNC_3("%s: can't open: %s\n", VAR_6->name,
   VAR_6->mic_virtblk.backend_file);
  goto _error_free;
 }
 if (!FUNC_6(VAR_6))
  goto _error_close;
 VAR_6->mic_virtblk.backend_addr = FUNC_2(((void*)0),
  VAR_6->mic_virtblk.backend_size,
  VAR_3|VAR_4, VAR_1,
  VAR_6->mic_virtblk.backend, 0L);
 if (VAR_6->mic_virtblk.backend_addr == VAR_0) {
  FUNC_3("%s: can't map: %s %s\n",
   VAR_6->name, VAR_6->mic_virtblk.backend_file,
   FUNC_7(VAR_5));
  goto _error_close;
 }
 return 1;

 _error_close:
 FUNC_0(VAR_6->mic_virtblk.backend);
 _error_free:
 FUNC_1(VAR_6->mic_virtblk.backend_file);
 _error_exit:
 return 0;
}
