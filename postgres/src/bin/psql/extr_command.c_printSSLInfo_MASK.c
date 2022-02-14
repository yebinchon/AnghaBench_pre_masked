
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int db; } ;


 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,char const*,char const*,char*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 const char *VAR_1;
 const char *VAR_2;
 const char *VAR_3;
 const char *VAR_4;

 if (!FUNC_1(VAR_0.db))
  return;

 VAR_1 = FUNC_0(VAR_0.db, "protocol");
 VAR_2 = FUNC_0(VAR_0.db, "cipher");
 VAR_3 = FUNC_0(VAR_0.db, "key_bits");
 VAR_4 = FUNC_0(VAR_0.db, "compression");

 FUNC_3(FUNC_2("SSL connection (protocol: %s, cipher: %s, bits: %s, compression: %s)\n"),
     VAR_1 ? VAR_1 : FUNC_2("unknown"),
     VAR_2 ? VAR_2 : FUNC_2("unknown"),
     VAR_3 ? VAR_3 : FUNC_2("unknown"),
     (VAR_4 && FUNC_4(VAR_4, "off") != 0) ? FUNC_2("on") : FUNC_2("off"));
}
